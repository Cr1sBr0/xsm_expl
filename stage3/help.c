struct tnode{
	int no;
	int address;
	struct tnode*next;
};
struct tnode* head;

void addList(int address,int num){
	
	if(head==NULL){
		struct tnode* a=malloc(sizeof(struct tnode));
		a->no=num;
		a->address=address;
		a->next=NULL;
		head=a;
		return;
	}
	else{
		struct tnode * temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		struct tnode* a=malloc(sizeof(struct tnode));
		a->no=num;
		a->address=address;
		a->next=NULL;
		temp->next=a;
		return;
	}
}
int getLine(int num){
	struct tnode * temp=head;
	while(temp){
		if(temp->no==num)
		return temp->address;
		temp=temp->next;
	}
	return -1;
}
void showList(){
	printf("showing\n");
	struct tnode * temp=head;
	while(temp){
		printf("%d %d\n",temp->no,temp->address);
		temp=temp->next;
	}
}
