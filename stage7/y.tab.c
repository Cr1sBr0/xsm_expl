/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "e1.y"


	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"

	#include "type.c"
	#include "symbol.c"	
	#include "class.c"

	#include "e1.c"
	
	
	int yylex(void);
	FILE *fp;
	extern FILE *yyin;
	int l[20];
	struct Typetable *gtype,*Tptr;
	struct ClassTable* ctype=NULL;
	int params=0;
	int args;
	int flabell=0;
	struct Typetable* rettype;
	struct FieldList *ftype;
	struct ClassTable *Cptr;
	

#line 99 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    BEGINN = 259,                  /* BEGINN  */
    END = 260,                     /* END  */
    READ = 261,                    /* READ  */
    WRITE = 262,                   /* WRITE  */
    ID = 263,                      /* ID  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    THEN = 266,                    /* THEN  */
    ENDIF = 267,                   /* ENDIF  */
    WHILE = 268,                   /* WHILE  */
    ENDWHILE = 269,                /* ENDWHILE  */
    DO = 270,                      /* DO  */
    DECL = 271,                    /* DECL  */
    ENDDECL = 272,                 /* ENDDECL  */
    INT = 273,                     /* INT  */
    STR = 274,                     /* STR  */
    CONTINUE = 275,                /* CONTINUE  */
    BREAK = 276,                   /* BREAK  */
    STRING = 277,                  /* STRING  */
    MAIN = 278,                    /* MAIN  */
    RETURN = 279,                  /* RETURN  */
    AND = 280,                     /* AND  */
    ALLOC = 281,                   /* ALLOC  */
    FREE = 282,                    /* FREE  */
    TYPE = 283,                    /* TYPE  */
    ENDTYPE = 284,                 /* ENDTYPE  */
    NULLL = 285,                   /* NULLL  */
    NEW = 286,                     /* NEW  */
    CLASS = 287,                   /* CLASS  */
    ENDCLASS = 288,                /* ENDCLASS  */
    EXTEND = 289,                  /* EXTEND  */
    SELF = 290,                    /* SELF  */
    DELETE = 291                   /* DELETE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define BEGINN 259
#define END 260
#define READ 261
#define WRITE 262
#define ID 263
#define IF 264
#define ELSE 265
#define THEN 266
#define ENDIF 267
#define WHILE 268
#define ENDWHILE 269
#define DO 270
#define DECL 271
#define ENDDECL 272
#define INT 273
#define STR 274
#define CONTINUE 275
#define BREAK 276
#define STRING 277
#define MAIN 278
#define RETURN 279
#define AND 280
#define ALLOC 281
#define FREE 282
#define TYPE 283
#define ENDTYPE 284
#define NULLL 285
#define NEW 286
#define CLASS 287
#define ENDCLASS 288
#define EXTEND 289
#define SELF 290
#define DELETE 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "e1.y"

	char character;
	struct tNode *no;
	int integer;        //1 INT 3 STR
	char *string;
	struct Paramstruct *par;
	struct argList * al;
	struct Typetable* tipe;
	struct ClassTable *ctabel;

#line 235 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_BEGINN = 4,                     /* BEGINN  */
  YYSYMBOL_END = 5,                        /* END  */
  YYSYMBOL_READ = 6,                       /* READ  */
  YYSYMBOL_WRITE = 7,                      /* WRITE  */
  YYSYMBOL_ID = 8,                         /* ID  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_THEN = 11,                      /* THEN  */
  YYSYMBOL_ENDIF = 12,                     /* ENDIF  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_ENDWHILE = 14,                  /* ENDWHILE  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_DECL = 16,                      /* DECL  */
  YYSYMBOL_ENDDECL = 17,                   /* ENDDECL  */
  YYSYMBOL_INT = 18,                       /* INT  */
  YYSYMBOL_STR = 19,                       /* STR  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_STRING = 22,                    /* STRING  */
  YYSYMBOL_MAIN = 23,                      /* MAIN  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_AND = 25,                       /* AND  */
  YYSYMBOL_ALLOC = 26,                     /* ALLOC  */
  YYSYMBOL_FREE = 27,                      /* FREE  */
  YYSYMBOL_TYPE = 28,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 29,                   /* ENDTYPE  */
  YYSYMBOL_NULLL = 30,                     /* NULLL  */
  YYSYMBOL_NEW = 31,                       /* NEW  */
  YYSYMBOL_CLASS = 32,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 33,                  /* ENDCLASS  */
  YYSYMBOL_EXTEND = 34,                    /* EXTEND  */
  YYSYMBOL_SELF = 35,                      /* SELF  */
  YYSYMBOL_DELETE = 36,                    /* DELETE  */
  YYSYMBOL_37_ = 37,                       /* '-'  */
  YYSYMBOL_38_ = 38,                       /* '+'  */
  YYSYMBOL_39_ = 39,                       /* '*'  */
  YYSYMBOL_40_ = 40,                       /* '/'  */
  YYSYMBOL_41_ = 41,                       /* '{'  */
  YYSYMBOL_42_ = 42,                       /* '}'  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '.'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '['  */
  YYSYMBOL_49_ = 49,                       /* ']'  */
  YYSYMBOL_50_ = 50,                       /* '='  */
  YYSYMBOL_51_ = 51,                       /* '%'  */
  YYSYMBOL_52_ = 52,                       /* '>'  */
  YYSYMBOL_53_ = 53,                       /* '<'  */
  YYSYMBOL_54_ = 54,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_Final = 56,                     /* Final  */
  YYSYMBOL_Program = 57,                   /* Program  */
  YYSYMBOL_TypeDefBlock = 58,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 59,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 60,                   /* TypeDef  */
  YYSYMBOL_Tname = 61,                     /* Tname  */
  YYSYMBOL_FieldDeclList = 62,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 63,                 /* FieldDecl  */
  YYSYMBOL_ClassDefBlock = 64,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 65,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 66,                  /* ClassDef  */
  YYSYMBOL_Cname = 67,                     /* Cname  */
  YYSYMBOL_Fieldlists = 68,                /* Fieldlists  */
  YYSYMBOL_Fld = 69,                       /* Fld  */
  YYSYMBOL_MethodDecl = 70,                /* MethodDecl  */
  YYSYMBOL_MDecl = 71,                     /* MDecl  */
  YYSYMBOL_MethodDefns = 72,               /* MethodDefns  */
  YYSYMBOL_FieldFunction = 73,             /* FieldFunction  */
  YYSYMBOL_GdeclBlock = 74,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 75,                 /* GdeclList  */
  YYSYMBOL_GDecl = 76,                     /* GDecl  */
  YYSYMBOL_TypeName = 77,                  /* TypeName  */
  YYSYMBOL_GidList = 78,                   /* GidList  */
  YYSYMBOL_Gid = 79,                       /* Gid  */
  YYSYMBOL_ParamList = 80,                 /* ParamList  */
  YYSYMBOL_Param = 81,                     /* Param  */
  YYSYMBOL_FdefBlock = 82,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 83,                      /* Fdef  */
  YYSYMBOL_ParamList2 = 84,                /* ParamList2  */
  YYSYMBOL_Param2 = 85,                    /* Param2  */
  YYSYMBOL_TypeName2 = 86,                 /* TypeName2  */
  YYSYMBOL_LdeclBlock = 87,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 88,                  /* LDecList  */
  YYSYMBOL_LDecl = 89,                     /* LDecl  */
  YYSYMBOL_IdList = 90,                    /* IdList  */
  YYSYMBOL_E = 91,                         /* E  */
  YYSYMBOL_ArgList = 92,                   /* ArgList  */
  YYSYMBOL_MainBlock = 93,                 /* MainBlock  */
  YYSYMBOL_Slist = 94,                     /* Slist  */
  YYSYMBOL_Stmt = 95,                      /* Stmt  */
  YYSYMBOL_RetStmt = 96,                   /* RetStmt  */
  YYSYMBOL_WhileStmt = 97,                 /* WhileStmt  */
  YYSYMBOL_InputStmt = 98,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 99,                /* OutputStmt  */
  YYSYMBOL_IfStmt = 100,                   /* IfStmt  */
  YYSYMBOL_AsgStmt = 101,                  /* AsgStmt  */
  YYSYMBOL_BrkStmt = 102,                  /* BrkStmt  */
  YYSYMBOL_ContStmt = 103,                 /* ContStmt  */
  YYSYMBOL_Field = 104                     /* Field  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   504

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,     2,     2,    51,     2,     2,
      44,    45,    39,    38,    47,    37,    46,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
      53,    50,    52,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    56,    57,    58,    64,    66,    68,    69,
      71,    73,    75,    76,    78,    87,    88,    90,    91,    94,
      97,    98,   100,   101,   103,   106,   107,   109,   111,   112,
     115,   129,   155,   174,   175,   177,   178,   180,   185,   188,
     189,   192,   198,   205,   213,   214,   215,   217,   223,   224,
     226,   256,   257,   258,   260,   270,   283,   284,   285,   287,
     288,   290,   293,   304,   318,   329,   330,   331,   333,   357,
     358,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   371,   372,   375,   376,   378,   381,   384,   386,   391,
     394,   397,   400,   401,   403,   404,   406,   416,   423,   427,
     429,   431,   441,   468,   481,   483,   485,   487,   489,   491,
     492,   493,   494,   495,   496,   497,   498,   500,   502,   504,
     506,   508,   510,   512,   513
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "BEGINN", "END",
  "READ", "WRITE", "ID", "IF", "ELSE", "THEN", "ENDIF", "WHILE",
  "ENDWHILE", "DO", "DECL", "ENDDECL", "INT", "STR", "CONTINUE", "BREAK",
  "STRING", "MAIN", "RETURN", "AND", "ALLOC", "FREE", "TYPE", "ENDTYPE",
  "NULLL", "NEW", "CLASS", "ENDCLASS", "EXTEND", "SELF", "DELETE", "'-'",
  "'+'", "'*'", "'/'", "'{'", "'}'", "';'", "'('", "')'", "'.'", "','",
  "'['", "']'", "'='", "'%'", "'>'", "'<'", "'!'", "$accept", "Final",
  "Program", "TypeDefBlock", "TypeDefList", "TypeDef", "Tname",
  "FieldDeclList", "FieldDecl", "ClassDefBlock", "ClassDefList",
  "ClassDef", "Cname", "Fieldlists", "Fld", "MethodDecl", "MDecl",
  "MethodDefns", "FieldFunction", "GdeclBlock", "GdeclList", "GDecl",
  "TypeName", "GidList", "Gid", "ParamList", "Param", "FdefBlock", "Fdef",
  "ParamList2", "Param2", "TypeName2", "LdeclBlock", "LDecList", "LDecl",
  "IdList", "E", "ArgList", "MainBlock", "Slist", "Stmt", "RetStmt",
  "WhileStmt", "InputStmt", "OutputStmt", "IfStmt", "AsgStmt", "BrkStmt",
  "ContStmt", "Field", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-217)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-6)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    37,    56,  -217,    48,  -217,     6,  -217,    62,  -217,
     114,    36,  -217,  -217,   118,   100,     5,  -217,   111,   118,
      42,  -217,    -2,  -217,   131,   147,  -217,  -217,   148,    45,
    -217,   169,   151,   193,    42,  -217,  -217,  -217,  -217,   156,
    -217,  -217,  -217,  -217,   -28,    16,  -217,   203,   163,  -217,
    -217,  -217,   217,   218,   226,  -217,   169,    80,   232,   218,
     222,  -217,    84,  -217,  -217,   -26,  -217,   230,   192,  -217,
    -217,   241,    96,  -217,   197,    46,  -217,   244,    86,   245,
     118,  -217,  -217,   218,  -217,  -217,  -217,    26,  -217,  -217,
     196,   210,   108,   211,   212,   214,   220,   109,   216,   215,
     223,   173,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,    69,   225,   218,  -217,  -217,   218,   228,     1,  -217,
    -217,  -217,   256,     2,   109,   269,   109,    64,   109,   109,
    -217,  -217,  -217,   191,  -217,   242,   109,  -217,   122,   248,
       9,   279,    22,   249,  -217,   287,    76,   203,  -217,    71,
    -217,  -217,  -217,   150,   125,   265,  -217,   284,   257,   263,
     267,   289,   319,   337,   109,   292,   109,   304,   355,   109,
     109,   109,   109,   109,  -217,   275,   109,     4,    20,   280,
     305,   138,   142,  -217,   285,   177,  -217,  -217,   306,   308,
     309,   373,   348,   311,   312,   109,   317,   318,   313,   320,
    -217,   358,  -217,   356,   353,   445,    88,   334,   392,   335,
    -217,   445,   450,   450,   295,   295,   102,   445,   109,   445,
     109,   445,   106,   339,   338,   341,   342,   351,  -217,   378,
    -217,   197,  -217,  -217,   410,  -217,  -217,   109,   354,   357,
     197,   197,  -217,   109,   109,  -217,   109,  -217,   445,   445,
     445,  -217,   445,   109,  -217,  -217,  -217,   360,   359,   207,
     369,   415,  -217,   372,   238,   262,   445,    93,    98,   104,
    -217,   375,   377,   379,  -217,  -217,   197,   385,   390,  -217,
    -217,  -217,  -217,  -217,  -217,   272,  -217,  -217,   391,  -217
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,     0,     2,    16,    11,     0,     9,     0,     1,
       0,    34,     6,     8,     0,    20,     0,    18,     0,     0,
       0,    38,     0,    13,     0,     0,    15,    17,     0,     0,
      36,     0,     0,     0,     0,    49,     4,    10,    12,     0,
      21,    23,    33,    35,    41,     0,    40,    58,     0,    48,
       3,    14,     0,    46,     0,    37,     0,     0,     0,    53,
       0,    22,     0,    26,    55,     0,    45,     0,     0,    39,
      57,     0,     0,    60,     0,     0,    52,     0,     0,     0,
       0,    25,    43,     0,    47,    42,    63,     0,    56,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    78,    75,    71,    72,    74,    73,    76,
      77,     0,     0,     0,    54,    24,    46,     0,     0,    29,
      44,    61,     0,     0,     0,     0,     0,     0,     0,     0,
     100,    99,   110,   111,   112,     0,     0,   114,     0,   113,
       0,     0,     0,     0,    69,     0,     0,    58,    51,     0,
      19,    28,    62,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,     0,    68,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,    89,     0,     0,    66,     0,   101,     0,   103,
     109,   122,   105,   104,   106,   107,     0,   108,     0,   116,
       0,   117,     0,   102,     0,     0,     0,     0,    95,     0,
      91,     0,    27,    83,     0,    85,    86,     0,     0,     0,
       0,     0,    64,     0,    67,   115,    67,   124,   118,   120,
     119,   123,   121,    67,    79,    80,    98,     0,     0,     0,
       0,     0,    92,     0,     0,     0,    65,     0,     0,     0,
      93,     0,     0,     0,    90,    96,     0,     0,     0,    31,
      30,    32,    97,    50,    84,     0,    88,    82,     0,    87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,  -217,  -217,  -217,   393,  -217,  -217,   398,  -217,
    -217,   405,  -217,  -217,  -217,  -217,   374,  -217,  -217,  -217,
    -217,   408,   -11,  -217,   345,   322,   368,  -217,   -33,  -217,
     326,   -55,   310,  -217,   384,  -217,   -95,  -157,   437,  -216,
     -96,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,   -74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     6,     7,     8,    22,    23,    11,
      16,    17,    18,    52,    61,    62,    63,   118,   137,    20,
      29,    30,    33,    45,    46,    65,    66,    34,    35,    75,
      76,    67,    58,    72,    73,    87,   205,   206,    36,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   139
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,    49,   138,    24,    77,   144,    21,   132,    31,    21,
     153,    24,   133,    15,     5,   259,    53,   181,    31,    82,
      54,    83,     1,   132,   264,   265,   134,   111,   133,   155,
     184,   157,   161,   162,   163,    12,    -5,    99,    26,   135,
      37,   168,   134,   150,    99,     5,    71,   119,   136,   154,
      21,   191,    19,    21,   218,   135,     9,    99,    77,    55,
     285,    71,    42,    56,   136,    32,   182,   132,   185,   121,
     220,   208,   133,   122,   211,   212,   213,   214,   215,   132,
      10,   217,   219,   221,   133,   151,   134,   267,    21,   268,
     158,   112,    79,   113,   159,   160,   269,    70,   134,   135,
     234,    80,   188,    14,    21,   132,   189,   190,   136,   132,
     133,   135,   132,    88,   133,   145,   193,   133,    83,   146,
     136,   248,    15,   249,   134,   250,    21,   252,   134,   115,
     116,   134,   247,   242,    25,   243,   251,   135,   279,    39,
     243,   135,   261,   280,   135,   243,   136,   169,   266,   281,
     136,   243,    28,   136,   125,    40,   126,   111,   127,   170,
     171,   172,   173,   144,    41,   174,   111,   111,   144,   144,
     196,   145,   175,   176,   177,   178,   179,    44,   143,    90,
      91,    92,    93,   224,   125,   111,    94,   225,   145,   144,
     111,   111,    47,    95,    96,   194,   125,    97,   195,    51,
      98,    48,   111,    90,    91,    92,    93,    59,    99,   100,
      94,   111,   272,    90,    91,    92,    93,    95,    96,    57,
      94,    97,   226,   145,    98,    60,    64,    95,    96,    68,
      78,    97,    99,   100,    98,   164,    74,   165,    84,   166,
     123,    85,    99,   100,    90,    91,    92,    93,   276,    86,
     277,    94,   114,   117,   124,   128,   129,   130,    95,    96,
     140,   141,    97,   131,   152,    98,   147,   142,    90,    91,
      92,    93,   116,    99,   100,    94,   278,   156,    90,    91,
      92,    93,    95,    96,   288,    94,    97,   183,   167,    98,
     169,   186,    95,    96,   180,   187,    97,    99,   100,    98,
     207,   199,   170,   171,   172,   173,   200,    99,   100,   169,
     197,   201,   209,   223,   169,   175,   176,   177,   178,   179,
     169,   170,   171,   172,   173,   216,   170,   171,   172,   173,
     222,   125,   202,   198,   175,   176,   177,   178,   179,   175,
     176,   177,   178,   179,   169,   175,   176,   177,   178,   179,
     227,   228,   231,   229,   232,   233,   170,   171,   172,   173,
     235,   236,   169,   237,   203,   238,   239,   240,   241,   175,
     176,   177,   178,   179,   170,   171,   172,   173,   244,   246,
     169,   254,   204,   253,   255,   256,   258,   175,   176,   177,
     178,   179,   170,   171,   172,   173,   257,   262,   169,    13,
     210,    69,   263,   270,   271,   175,   176,   177,   178,   179,
     170,   171,   172,   173,   273,   275,   230,   169,   282,   283,
      38,    27,   284,   175,   176,   177,   178,   179,   286,   170,
     171,   172,   173,   287,   289,   169,    81,    43,   149,   148,
     169,   245,   175,   176,   177,   178,   179,   170,   171,   172,
     173,   120,   170,   171,   172,   173,    89,   192,   274,   260,
     175,   176,   177,   178,   179,   175,   176,   177,   178,   179,
     169,    50,     0,     0,     0,   169,     0,     0,     0,     0,
       0,     0,   170,   171,   172,   173,     0,     0,     0,   172,
     173,     0,     0,     0,     0,   175,   176,   177,   178,   179,
     175,   176,   177,   178,   179
};

static const yytype_int16 yycheck[] =
{
      74,    34,    97,    14,    59,   101,     8,     3,    19,     8,
       8,    22,     8,     8,     8,   231,    44,     8,    29,    45,
      48,    47,    28,     3,   240,   241,    22,   101,     8,   124,
       8,   126,   127,   128,   129,    29,     0,    35,    33,    35,
      42,   136,    22,    42,    35,     8,    57,    80,    44,   123,
       8,   146,    16,     8,    50,    35,     0,    35,   113,    43,
     276,    72,    17,    47,    44,    23,   140,     3,   142,    43,
      50,   166,     8,    47,   169,   170,   171,   172,   173,     3,
      32,   176,   177,   178,     8,   118,    22,   244,     8,   246,
      26,    45,     8,    47,    30,    31,   253,    17,    22,    35,
     195,    17,    26,    41,     8,     3,    30,    31,    44,     3,
       8,    35,     3,    17,     8,    46,    45,     8,    47,    50,
      44,   216,     8,   218,    22,   220,     8,   222,    22,    43,
      44,    22,    30,    45,    34,    47,    30,    35,    45,     8,
      47,    35,   237,    45,    35,    47,    44,    25,   243,    45,
      44,    47,    41,    44,    46,     8,    48,   231,    50,    37,
      38,    39,    40,   259,    16,    43,   240,   241,   264,   265,
      45,    46,    50,    51,    52,    53,    54,     8,     5,     6,
       7,     8,     9,    45,    46,   259,    13,    45,    46,   285,
     264,   265,    41,    20,    21,    45,    46,    24,    48,    43,
      27,     8,   276,     6,     7,     8,     9,    44,    35,    36,
      13,   285,     5,     6,     7,     8,     9,    20,    21,    16,
      13,    24,    45,    46,    27,     8,     8,    20,    21,     3,
       8,    24,    35,    36,    27,    44,     4,    46,     8,    48,
      44,    49,    35,    36,     6,     7,     8,     9,    10,     8,
      12,    13,     8,     8,    44,    44,    44,    43,    20,    21,
      44,    46,    24,    43,     8,    27,    41,    44,     6,     7,
       8,     9,    44,    35,    36,    13,    14,     8,     6,     7,
       8,     9,    20,    21,    12,    13,    24,     8,    46,    27,
      25,    42,    20,    21,    46,     8,    24,    35,    36,    27,
       8,    44,    37,    38,    39,    40,    43,    35,    36,    25,
      45,    44,     8,     8,    25,    50,    51,    52,    53,    54,
      25,    37,    38,    39,    40,    50,    37,    38,    39,    40,
      50,    46,    43,    49,    50,    51,    52,    53,    54,    50,
      51,    52,    53,    54,    25,    50,    51,    52,    53,    54,
      44,    43,     4,    44,    43,    43,    37,    38,    39,    40,
      43,    43,    25,    50,    45,    45,     8,    11,    15,    50,
      51,    52,    53,    54,    37,    38,    39,    40,    44,    44,
      25,    43,    45,    44,    43,    43,     8,    50,    51,    52,
      53,    54,    37,    38,    39,    40,    45,    43,    25,     6,
      45,    56,    45,    43,    45,    50,    51,    52,    53,    54,
      37,    38,    39,    40,    45,    43,    43,    25,    43,    42,
      22,    16,    43,    50,    51,    52,    53,    54,    43,    37,
      38,    39,    40,    43,    43,    25,    62,    29,   116,   113,
      25,    49,    50,    51,    52,    53,    54,    37,    38,    39,
      40,    83,    37,    38,    39,    40,    72,   147,    43,    49,
      50,    51,    52,    53,    54,    50,    51,    52,    53,    54,
      25,    34,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      50,    51,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    56,    57,    58,     8,    59,    60,    61,     0,
      32,    64,    29,    60,    41,     8,    65,    66,    67,    16,
      74,     8,    62,    63,    77,    34,    33,    66,    41,    75,
      76,    77,    23,    77,    82,    83,    93,    42,    63,     8,
       8,    16,    17,    76,     8,    78,    79,    41,     8,    83,
      93,    43,    68,    44,    48,    43,    47,    16,    87,    44,
       8,    69,    70,    71,     8,    80,    81,    86,     3,    79,
      17,    77,    88,    89,     4,    84,    85,    86,     8,     8,
      17,    71,    45,    47,     8,    49,     8,    90,    17,    89,
       6,     7,     8,     9,    13,    20,    21,    24,    27,    35,
      36,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    45,    47,     8,    43,    44,     8,    72,    83,
      81,    43,    47,    44,    44,    46,    48,    50,    44,    44,
      43,    43,     3,     8,    22,    35,    44,    73,    91,   104,
      44,    46,    44,     5,    95,    46,    50,    41,    85,    80,
      42,    83,     8,     8,   104,    91,     8,    91,    26,    30,
      31,    91,    91,    91,    44,    46,    48,    46,    91,    25,
      37,    38,    39,    40,    43,    50,    51,    52,    53,    54,
      46,     8,   104,     8,     8,   104,    42,     8,    26,    30,
      31,    91,    87,    45,    45,    48,    45,    45,    49,    44,
      43,    44,    43,    45,    45,    91,    92,     8,    91,     8,
      45,    91,    91,    91,    91,    91,    50,    91,    50,    91,
      50,    91,    50,     8,    45,    45,    45,    44,    43,    44,
      43,     4,    43,    43,    91,    43,    43,    50,    45,     8,
      11,    15,    45,    47,    44,    49,    44,    30,    91,    91,
      91,    30,    91,    44,    43,    43,    43,    45,     8,    94,
      49,    91,    43,    45,    94,    94,    91,    92,    92,    92,
      43,    45,     5,    45,    43,    43,    10,    12,    14,    45,
      45,    45,    43,    42,    43,    94,    43,    43,    12,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    58,    58,    59,    59,
      60,    61,    62,    62,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    69,    70,    70,    71,    72,    72,
      73,    73,    73,    74,    74,    75,    75,    76,    77,    78,
      78,    79,    79,    79,    80,    80,    80,    81,    82,    82,
      83,    84,    84,    84,    85,    86,    87,    87,    87,    88,
      88,    89,    90,    90,    91,    92,    92,    92,    93,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    97,    98,    98,    98,    99,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   102,
     103,   104,   104,   104,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     4,     2,     3,     0,     2,     1,
       4,     1,     2,     1,     3,     3,     0,     2,     1,     8,
       1,     3,     2,     0,     3,     2,     1,     6,     2,     1,
       6,     6,     6,     3,     0,     2,     1,     3,     1,     3,
       1,     1,     4,     4,     3,     1,     0,     2,     2,     1,
      11,     3,     1,     0,     2,     1,     3,     2,     0,     2,
       1,     3,     3,     1,     4,     3,     1,     0,     7,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     3,     8,     5,     8,     5,     5,    10,     8,     4,
       7,     4,     6,     6,     4,     4,     7,     7,     5,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     4,     3,     3,     4,     4,
       4,     4,     3,     4,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Final: Program  */
#line 53 "e1.y"
                                  {	printf("hi final23");
					return;
						}
#line 1552 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock ClassDefBlock GdeclBlock FdefBlock MainBlock  */
#line 56 "e1.y"
                                                                  {;}
#line 1558 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock ClassDefBlock GdeclBlock MainBlock  */
#line 57 "e1.y"
                                                         {;}
#line 1564 "y.tab.c"
    break;

  case 6: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 64 "e1.y"
                                       {//printf("printing types\n");printTypes();
              			initialize(fp,l);			}
#line 1571 "y.tab.c"
    break;

  case 7: /* TypeDefBlock: %empty  */
#line 66 "e1.y"
              {initialize(fp,l);}
#line 1577 "y.tab.c"
    break;

  case 10: /* TypeDef: Tname '{' FieldDeclList '}'  */
#line 71 "e1.y"
                                           { printf("completed a typeINstall\n");     }
#line 1583 "y.tab.c"
    break;

  case 11: /* Tname: ID  */
#line 73 "e1.y"
                        {Tptr=TInstall((yyvsp[0].string));}
#line 1589 "y.tab.c"
    break;

  case 14: /* FieldDecl: TypeName ID ';'  */
#line 78 "e1.y"
                                {if((yyvsp[-2].tipe)==NULL){
					yyerror("unknown type for ");
					printf("%s\n",(yyvsp[-1].string));
					exit(0);
				}
				Type_Minstall(Tptr,(yyvsp[-2].tipe),(yyvsp[-1].string));}
#line 1600 "y.tab.c"
    break;

  case 15: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 87 "e1.y"
                                          {printf("class decl finished\n");class=1;Cptr=NULL;}
#line 1606 "y.tab.c"
    break;

  case 19: /* ClassDef: Cname '{' DECL Fieldlists MethodDecl ENDDECL MethodDefns '}'  */
#line 94 "e1.y"
                                                                              {printf("class stuff\n");printClassDetails((yyvsp[-7].ctabel));}
#line 1612 "y.tab.c"
    break;

  case 20: /* Cname: ID  */
#line 97 "e1.y"
                      {Cptr=CInstall((yyvsp[0].string),NULL);(yyval.ctabel)=Cptr;}
#line 1618 "y.tab.c"
    break;

  case 21: /* Cname: ID EXTEND ID  */
#line 98 "e1.y"
                               {Cptr=CInstall((yyvsp[-2].string),(yyvsp[0].string));}
#line 1624 "y.tab.c"
    break;

  case 22: /* Fieldlists: Fieldlists Fld  */
#line 100 "e1.y"
                                        {;}
#line 1630 "y.tab.c"
    break;

  case 24: /* Fld: ID ID ';'  */
#line 103 "e1.y"
                           {Class_Finstall(Cptr,(yyvsp[-2].string),(yyvsp[-1].string));}
#line 1636 "y.tab.c"
    break;

  case 25: /* MethodDecl: MethodDecl MDecl  */
#line 106 "e1.y"
                                  {;}
#line 1642 "y.tab.c"
    break;

  case 26: /* MethodDecl: MDecl  */
#line 107 "e1.y"
                        {;}
#line 1648 "y.tab.c"
    break;

  case 27: /* MDecl: ID ID '(' ParamList ')' ';'  */
#line 109 "e1.y"
                                            {Class_Minstall(Cptr,(yyvsp[-4].string),TLookup((yyvsp[-5].string)),(yyvsp[-2].par));}
#line 1654 "y.tab.c"
    break;

  case 28: /* MethodDefns: MethodDefns Fdef  */
#line 111 "e1.y"
                                   {;}
#line 1660 "y.tab.c"
    break;

  case 29: /* MethodDefns: Fdef  */
#line 112 "e1.y"
                      {;}
#line 1666 "y.tab.c"
    break;

  case 30: /* FieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 115 "e1.y"
                                          {if(Class_Mlookup(Cptr,(yyvsp[-3].string))){
						checkArgs((yyvsp[-3].string),(yyvsp[-1].al),Cptr);
						(yyval.no)=getFunNode((yyvsp[-3].string),(yyvsp[-1].al));
						
						(yyval.no)->right=getSelfNode(NULL);

						(yyval.no)->val=Class_Mlookup(Cptr,(yyvsp[-3].string))->fLabel;
						(yyval.no)->type=Class_Mlookup(Cptr,(yyvsp[-3].string))->type;
						}
					   else{
					   yyerror("unknown member function\n");
					   exit(0);
					   }
					}
#line 1685 "y.tab.c"
    break;

  case 31: /* FieldFunction: ID '.' ID '(' ArgList ')'  */
#line 129 "e1.y"
                                             { printf("exit\n");fflush(stdout);	
		if(getIdNode((yyvsp[-5].string),NULL)->cType){

		if(Class_Mlookup(getIdNode((yyvsp[-5].string),NULL)->cType,(yyvsp[-3].string))){
			checkArgs((yyvsp[-3].string),(yyvsp[-1].al),getIdNode((yyvsp[-5].string),NULL)->cType);
			(yyval.no)=getFunNode((yyvsp[-3].string),(yyvsp[-1].al));

			(yyval.no)->right=getIdNode((yyvsp[-5].string),NULL);

			(yyval.no)->val=Class_Mlookup(getIdNode((yyvsp[-5].string),NULL)->cType,(yyvsp[-3].string))->fLabel;

			(yyval.no)->type=Class_Mlookup(getIdNode((yyvsp[-5].string),NULL)->cType,(yyvsp[-3].string))->type;

		}
		else{
			yyerror("unknown member function\n");
					   exit(0);
			}
			
		}
		else{
			yyerror("unknown class\n");
					   exit(0);
		}
		}
#line 1715 "y.tab.c"
    break;

  case 32: /* FieldFunction: Field '.' ID '(' ArgList ')'  */
#line 155 "e1.y"
                                              {if((yyvsp[-5].no)->cType && Class_Mlookup((yyvsp[-5].no)->cType,(yyvsp[-3].string))){	
					checkArgs((yyvsp[-3].string),(yyvsp[-1].al),(yyvsp[-5].no)->cType);		
					(yyval.no)=getFunNode((yyvsp[-3].string),(yyvsp[-1].al));

					(yyval.no)->right=(yyvsp[-5].no);

					(yyval.no)->val=Class_Mlookup((yyvsp[-5].no)->cType,(yyvsp[-3].string))->fLabel;

					(yyval.no)->type=Class_Mlookup((yyvsp[-5].no)->cType,(yyvsp[-3].string))->type;
										
						}
					        else{
					        	yyerror("unknown member function\n");
					        	exit(0);
					        }	
						}
#line 1736 "y.tab.c"
    break;

  case 33: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 174 "e1.y"
                                    {;}
#line 1742 "y.tab.c"
    break;

  case 34: /* GdeclBlock: %empty  */
#line 175 "e1.y"
                                {;}
#line 1748 "y.tab.c"
    break;

  case 35: /* GdeclList: GdeclList GDecl  */
#line 177 "e1.y"
                            {;}
#line 1754 "y.tab.c"
    break;

  case 36: /* GdeclList: GDecl  */
#line 178 "e1.y"
                 {;}
#line 1760 "y.tab.c"
    break;

  case 37: /* GDecl: TypeName GidList ';'  */
#line 180 "e1.y"
                             {if(gtype==NULL && ctype==NULL){
				yyerror("undeclared type");
				exit(0);};
				}
#line 1769 "y.tab.c"
    break;

  case 38: /* TypeName: ID  */
#line 185 "e1.y"
                {(yyval.tipe)=TLookup((yyvsp[0].string));gtype=TLookup((yyvsp[0].string));ctype=CLookup((yyvsp[0].string));}
#line 1775 "y.tab.c"
    break;

  case 39: /* GidList: GidList ',' Gid  */
#line 188 "e1.y"
                          {;}
#line 1781 "y.tab.c"
    break;

  case 40: /* GidList: Gid  */
#line 189 "e1.y"
             {;}
#line 1787 "y.tab.c"
    break;

  case 41: /* Gid: ID  */
#line 192 "e1.y"
                { 		if(Lookitup((yyvsp[0].string))==NULL)
  				GInstall((yyvsp[0].string),gtype,ctype, 1,NULL);
  				else{  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration ");
  					exit(1);
  				};}
#line 1798 "y.tab.c"
    break;

  case 42: /* Gid: ID '[' NUM ']'  */
#line 198 "e1.y"
                     {         if(Lookitup((yyvsp[-3].string))==NULL)
  				GInstall((yyvsp[-3].string),gtype,ctype, (yyvsp[-1].integer),NULL);
  				else{printf("%s",(yyvsp[-3].string));
  					yyerror("redecleration ");
  					exit(1);
  				};
  				}
#line 1810 "y.tab.c"
    break;

  case 43: /* Gid: ID '(' ParamList ')'  */
#line 205 "e1.y"
                               {if(Lookitup((yyvsp[-3].string))==NULL )
  				GInstall((yyvsp[-3].string),gtype,ctype, 0,(yyvsp[-1].par));
  				else{  					printf("%s",(yyvsp[-3].string));
  					yyerror("redecleration ");
  					exit(1);
  				};
  				}
#line 1822 "y.tab.c"
    break;

  case 44: /* ParamList: ParamList ',' Param  */
#line 213 "e1.y"
                               {(yyval.par)=addParam((yyvsp[-2].par),(yyvsp[0].par));}
#line 1828 "y.tab.c"
    break;

  case 45: /* ParamList: Param  */
#line 214 "e1.y"
                                {printf("not empty\n");(yyval.par)=(yyvsp[0].par);}
#line 1834 "y.tab.c"
    break;

  case 46: /* ParamList: %empty  */
#line 215 "e1.y"
                                {printf("empty\n");(yyval.par)=NULL;}
#line 1840 "y.tab.c"
    break;

  case 47: /* Param: TypeName2 ID  */
#line 217 "e1.y"
                   {(yyval.par)=createParam((yyvsp[0].string),(yyvsp[-1].tipe),1);}
#line 1846 "y.tab.c"
    break;

  case 48: /* FdefBlock: FdefBlock Fdef  */
#line 223 "e1.y"
                           {;}
#line 1852 "y.tab.c"
    break;

  case 49: /* FdefBlock: Fdef  */
#line 224 "e1.y"
                        {;}
#line 1858 "y.tab.c"
    break;

  case 50: /* Fdef: TypeName ID '(' ParamList2 ')' '{' LdeclBlock BEGINN Slist END '}'  */
#line 226 "e1.y"
                                                                      {
	if(class==0 && Class_Mlookup(Cptr,(yyvsp[-9].string))==NULL){
		yyerror("undeclared function ");
		printf("%s\n",(yyvsp[-9].string));
		exit(1);
	}

	//if(rettype!=TLookup($1)){	
//			yyerror("rettype error");
//			exit(1);		
//}
									printf("yofn\n");	
									//typecheck($1, Lookitup($2)->type, 'e');
									checkParams((yyvsp[-9].string),(yyvsp[-7].par),Cptr);
									args=doBinding(params);
									
			printf("FdefBlock started\n");
			//generate code using Lsymbol table
			showTable();
	  		//printree($1);
	  		flabell++;
	  		genCode((yyvsp[-2].no),args,fp,l,flabell,0);
	  		//then destroy the Lsymboltable for that fuunction
	  		params=0;
	  		args=0;
	  		ClearLsymbol();
	  		printf("FdefBlock completed\n");fflush(stdout);
//printf("leaving fdef\n");
}
#line 1892 "y.tab.c"
    break;

  case 51: /* ParamList2: ParamList2 ',' Param2  */
#line 256 "e1.y"
                                   {(yyval.par)=addParam((yyvsp[-2].par),(yyvsp[0].par));}
#line 1898 "y.tab.c"
    break;

  case 52: /* ParamList2: Param2  */
#line 257 "e1.y"
                                {(yyval.par)=(yyvsp[0].par);}
#line 1904 "y.tab.c"
    break;

  case 53: /* ParamList2: %empty  */
#line 258 "e1.y"
                                {(yyval.par)=NULL;}
#line 1910 "y.tab.c"
    break;

  case 54: /* Param2: TypeName2 ID  */
#line 260 "e1.y"
                    {		if(Lookitup2((yyvsp[0].string))==NULL)
  				LInstall((yyvsp[0].string),(yyvsp[-1].tipe));
  				else{
  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};
  				params++;
  				(yyval.par)=createParam((yyvsp[0].string),(yyvsp[-1].tipe),1);}
#line 1924 "y.tab.c"
    break;

  case 55: /* TypeName2: ID  */
#line 270 "e1.y"
                        {if(TLookup((yyvsp[0].string)))
			 (yyval.tipe)=TLookup((yyvsp[0].string));
			 else{
			 	yyerror("unknown param type");
			 	exit(1);
			 }
			 }
#line 1936 "y.tab.c"
    break;

  case 56: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 283 "e1.y"
                                   {;}
#line 1942 "y.tab.c"
    break;

  case 57: /* LdeclBlock: DECL ENDDECL  */
#line 284 "e1.y"
                         {;}
#line 1948 "y.tab.c"
    break;

  case 59: /* LDecList: LDecList LDecl  */
#line 287 "e1.y"
                          {;}
#line 1954 "y.tab.c"
    break;

  case 60: /* LDecList: LDecl  */
#line 288 "e1.y"
                {;}
#line 1960 "y.tab.c"
    break;

  case 61: /* LDecl: TypeName IdList ';'  */
#line 290 "e1.y"
                            {;}
#line 1966 "y.tab.c"
    break;

  case 62: /* IdList: IdList ',' ID  */
#line 293 "e1.y"
                       {	if(Lookitup2((yyvsp[0].string))==NULL){
				if(gtype==NULL){
					yyerror("unknown type");
  					exit(1);
				}
  				LInstall((yyvsp[0].string),gtype);
  				}
  				else{	  printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};}
#line 1982 "y.tab.c"
    break;

  case 63: /* IdList: ID  */
#line 304 "e1.y"
           {			if(Lookitup2((yyvsp[0].string))==NULL){
       				if(gtype==NULL){
					yyerror("unknown type");
  					exit(1);
				}
  				LInstall((yyvsp[0].string),gtype);
  				}
  				else{  		printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};;}
#line 1998 "y.tab.c"
    break;

  case 64: /* E: ID '(' ArgList ')'  */
#line 318 "e1.y"
                       {if(Lookitup((yyvsp[-3].string))==NULL){
			printf("yyerror %s undeclared function\n",(yyvsp[-3].string));
			exit(1);
			}
 			checkArgs((yyvsp[-3].string),(yyvsp[-1].al),NULL);
 			(yyval.no)=getFunNode((yyvsp[-3].string),(yyvsp[-1].al));
 			(yyval.no)->val=Lookitup((yyvsp[-3].string))->flabel;
			(yyval.no)->type=Lookitup((yyvsp[-3].string))->type;
			}
#line 2012 "y.tab.c"
    break;

  case 65: /* ArgList: ArgList ',' E  */
#line 329 "e1.y"
                        {(yyval.al)=getArgList1((yyvsp[-2].al),(yyvsp[0].no));}
#line 2018 "y.tab.c"
    break;

  case 66: /* ArgList: E  */
#line 330 "e1.y"
            {(yyval.al)=getArgList2((yyvsp[0].no));}
#line 2024 "y.tab.c"
    break;

  case 67: /* ArgList: %empty  */
#line 331 "e1.y"
            {(yyval.al)=getArgList2(NULL);}
#line 2030 "y.tab.c"
    break;

  case 68: /* MainBlock: MAIN '{' LdeclBlock BEGINN Slist END '}'  */
#line 333 "e1.y"
                                                    {   
			if(rettype!=TLookup("int")){
							//printf("-%s-",rettype->name);
									yyerror("rettype error");
  									exit(1);		
									}
			printf("params are %d\n",params);
			args=doBinding(params);
			//printree($5);
	  		//showTable();
	  		//then destroy the Lsymboltable for that fuunction

	  		genCode((yyvsp[-2].no),args,fp,l,0,1);
	  		ClearLsymbol();
				//codegen($3,fp,l);
				//exitt();
				return;
						}
#line 2053 "y.tab.c"
    break;

  case 69: /* Slist: Slist Stmt  */
#line 357 "e1.y"
                          {(yyval.no)=getCNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2059 "y.tab.c"
    break;

  case 70: /* Slist: Stmt  */
#line 358 "e1.y"
                          {(yyval.no)=(yyvsp[0].no);}
#line 2065 "y.tab.c"
    break;

  case 71: /* Stmt: InputStmt  */
#line 360 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 2071 "y.tab.c"
    break;

  case 72: /* Stmt: OutputStmt  */
#line 361 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 2077 "y.tab.c"
    break;

  case 73: /* Stmt: AsgStmt  */
#line 362 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 2083 "y.tab.c"
    break;

  case 74: /* Stmt: IfStmt  */
#line 363 "e1.y"
                           {(yyval.no)=(yyvsp[0].no);}
#line 2089 "y.tab.c"
    break;

  case 75: /* Stmt: WhileStmt  */
#line 364 "e1.y"
                                {(yyval.no)=(yyvsp[0].no);}
#line 2095 "y.tab.c"
    break;

  case 76: /* Stmt: BrkStmt  */
#line 365 "e1.y"
                           {(yyval.no) = (yyvsp[0].no);}
#line 2101 "y.tab.c"
    break;

  case 77: /* Stmt: ContStmt  */
#line 366 "e1.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 2107 "y.tab.c"
    break;

  case 78: /* Stmt: RetStmt  */
#line 367 "e1.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2113 "y.tab.c"
    break;

  case 79: /* Stmt: FREE '(' ID ')' ';'  */
#line 368 "e1.y"
                         {getFreeNode(getIdNode((yyvsp[-2].string),NULL));}
#line 2119 "y.tab.c"
    break;

  case 80: /* Stmt: FREE '(' Field ')' ';'  */
#line 369 "e1.y"
                         {getFreeNode((yyvsp[-2].no));}
#line 2125 "y.tab.c"
    break;

  case 81: /* RetStmt: RETURN E ';'  */
#line 371 "e1.y"
                        {rettype=(yyvsp[-1].no)->type;(yyval.no)=getRetNode((yyvsp[-1].no));}
#line 2131 "y.tab.c"
    break;

  case 82: /* WhileStmt: WHILE '(' E ')' DO Slist ENDWHILE ';'  */
#line 372 "e1.y"
                                                { typecheck((yyvsp[-5].no)->type, TLookup("bool"), 'i');
						  (yyval.no)=CreateTree(7,(yyvsp[-5].no),NULL,(yyvsp[-2].no));}
#line 2138 "y.tab.c"
    break;

  case 83: /* InputStmt: READ '(' ID ')' ';'  */
#line 375 "e1.y"
                                    {typecheck(getIdNode((yyvsp[-2].string),NULL)->type,NULL,'y');(yyval.no)=getrNode(getIdNode((yyvsp[-2].string),NULL));}
#line 2144 "y.tab.c"
    break;

  case 84: /* InputStmt: READ '(' ID '[' E ']' ')' ';'  */
#line 376 "e1.y"
                                      {	arraycheck((yyvsp[-5].string),(yyvsp[-3].no));
			(yyval.no)=getrNode(getIdNode((yyvsp[-5].string),(yyvsp[-3].no)));}
#line 2151 "y.tab.c"
    break;

  case 85: /* InputStmt: READ '(' Field ')' ';'  */
#line 378 "e1.y"
                                      {typecheck((yyvsp[-2].no)->type,NULL,'y');
	      		(yyval.no)=getrNode((yyvsp[-2].no));}
#line 2158 "y.tab.c"
    break;

  case 86: /* OutputStmt: WRITE '(' E ')' ';'  */
#line 381 "e1.y"
                                {typecheck((yyvsp[-2].no)->type, NULL, 'y'); 
					(yyval.no)=getwNode((yyvsp[-2].no));}
#line 2165 "y.tab.c"
    break;

  case 87: /* IfStmt: IF '(' E ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 384 "e1.y"
                                                      {typecheck((yyvsp[-7].no)->type, TLookup("bool"), 'i'); 
							(yyval.no)=CreateTree(6,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 2172 "y.tab.c"
    break;

  case 88: /* IfStmt: IF '(' E ')' THEN Slist ENDIF ';'  */
#line 386 "e1.y"
                                          {    typecheck((yyvsp[-5].no)->type, TLookup("bool"), 'i');
	   					(yyval.no)=CreateTree(6,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 2179 "y.tab.c"
    break;

  case 89: /* AsgStmt: ID '=' E ';'  */
#line 391 "e1.y"
                               {	//printf("ass stmt\n");
					typecheck(getIdNode((yyvsp[-3].string),NULL)->type, (yyvsp[-1].no)->type, 'e');
	(yyval.no)=getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-3].string),NULL),(yyvsp[-1].no));}
#line 2187 "y.tab.c"
    break;

  case 90: /* AsgStmt: ID '[' E ']' '=' E ';'  */
#line 394 "e1.y"
                                        {arraycheck((yyvsp[-6].string),(yyvsp[-4].no));
typecheck(getIdNode((yyvsp[-6].string),(yyvsp[-4].no))->type, (yyvsp[-4].no)->type, 'e');					getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-6].string),(yyvsp[-4].no)),(yyvsp[-1].no));}
#line 2194 "y.tab.c"
    break;

  case 91: /* AsgStmt: Field '=' E ';'  */
#line 397 "e1.y"
                                  {typecheck((yyvsp[-3].no)->type,(yyvsp[-1].no)->type,'e');
				   (yyval.no)=getOpNode(TLookup("void"),HI,(yyvsp[-3].no),(yyvsp[-1].no));              //NEW
						}
#line 2202 "y.tab.c"
    break;

  case 92: /* AsgStmt: ID '=' ALLOC '(' ')' ';'  */
#line 400 "e1.y"
                                        {(yyval.no)=getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-5].string),NULL),getAllocNode()); }
#line 2208 "y.tab.c"
    break;

  case 93: /* AsgStmt: Field '=' ALLOC '(' ')' ';'  */
#line 401 "e1.y"
                                        {(yyval.no)=getOpNode(TLookup("void"),HI,(yyvsp[-5].no),getAllocNode());}
#line 2214 "y.tab.c"
    break;

  case 94: /* AsgStmt: ID '=' NULLL ';'  */
#line 403 "e1.y"
                                {(yyval.no)=getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-3].string),NULL),getNulNode()); }
#line 2220 "y.tab.c"
    break;

  case 95: /* AsgStmt: Field '=' NULLL ';'  */
#line 404 "e1.y"
                                {(yyval.no)=getOpNode(TLookup("void"),HI,(yyvsp[-3].no),getNulNode());}
#line 2226 "y.tab.c"
    break;

  case 96: /* AsgStmt: ID '=' NEW '(' ID ')' ';'  */
#line 406 "e1.y"
                                         {
	if(getIdNode((yyvsp[-6].string),NULL)->cType!=CLookup((yyvsp[-2].string))){
		yyerror("conflicting types for ");
		printf("%s\n",(yyvsp[-2].string)
		);
		exit(0);
	}
	printf("hlo11\n");
	(yyval.no)=getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-6].string),NULL),getAllocNode());
	printf("hlo22\n");}
#line 2241 "y.tab.c"
    break;

  case 97: /* AsgStmt: Field '=' NEW '(' ID ')' ';'  */
#line 416 "e1.y"
                                        {
	if((yyvsp[-6].no)->cType!=CLookup((yyvsp[-2].string))){
		yyerror("conflicting types for ");
		printf("%s\n",(yyvsp[-2].string));
		exit(0);
	}
	(yyval.no)=getOpNode(TLookup("void"),HI,(yyvsp[-6].no),getAllocNode());}
#line 2253 "y.tab.c"
    break;

  case 98: /* AsgStmt: DELETE '(' Field ')' ';'  */
#line 423 "e1.y"
                                        {;}
#line 2259 "y.tab.c"
    break;

  case 99: /* BrkStmt: BREAK ';'  */
#line 427 "e1.y"
                                    {(yyval.no) =CreateTree(8,NULL,NULL,NULL);}
#line 2265 "y.tab.c"
    break;

  case 100: /* ContStmt: CONTINUE ';'  */
#line 429 "e1.y"
                                        {(yyval.no) =CreateTree(9,NULL,NULL,NULL);}
#line 2271 "y.tab.c"
    break;

  case 101: /* Field: ID '.' ID  */
#line 431 "e1.y"
                           {if(ftype=FLookup(getIdNode((yyvsp[-2].string),NULL)->type,(yyvsp[0].string))){
				(yyval.no)=getFieldNode((yyvsp[-2].string),ftype);
				(yyval.no)->type=ftype->type;
				}
			    else{
			    		yyerror("invalid member");
			    		exit(0);
			    }
			    		}
#line 2285 "y.tab.c"
    break;

  case 102: /* Field: Field '.' ID  */
#line 441 "e1.y"
                           {
	 		    if((yyvsp[-2].no)->type){
	 		
	 		      if(ftype=FLookup((yyvsp[-2].no)->type,(yyvsp[0].string))){
	 		
	 		      		(yyval.no)=addMember((yyvsp[-2].no),ftype);
	 		      	
	 		      }
	 		      else{
	 		      		yyerror("invalid member");
			    		exit(0);
	 		      }
	 				}
	 		    else if((yyvsp[-2].no)->cType){
	 	
	 		    	if(ftype=Class_Flookup((yyvsp[-2].no)->cType,(yyvsp[0].string))){
	 		    
	 		      		(yyval.no)=addMember((yyvsp[-2].no),ftype);
	 		      		
	 		      }
	 		      else{
	 		      		yyerror("invalid member");
			    		exit(0);
	 		      }
	 		    }		
	 				
	 		}
#line 2317 "y.tab.c"
    break;

  case 103: /* Field: SELF '.' ID  */
#line 468 "e1.y"
                            {	if(ftype=Class_Flookup(Cptr,(yyvsp[0].string))){

	 			(yyval.no)=getSelfNode(ftype);

	 			}
	 			else{yyerror("invalid member");
			    		exit(0);
	 			}
	 			}
#line 2331 "y.tab.c"
    break;

  case 104: /* E: E '+' E  */
#line 481 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2338 "y.tab.c"
    break;

  case 105: /* E: E '-' E  */
#line 483 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2345 "y.tab.c"
    break;

  case 106: /* E: E '*' E  */
#line 485 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2352 "y.tab.c"
    break;

  case 107: /* E: E '/' E  */
#line 487 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2359 "y.tab.c"
    break;

  case 108: /* E: E '%' E  */
#line 489 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2366 "y.tab.c"
    break;

  case 109: /* E: '(' E ')'  */
#line 491 "e1.y"
                            {(yyval.no)=(yyvsp[-1].no);	}
#line 2372 "y.tab.c"
    break;

  case 110: /* E: NUM  */
#line 492 "e1.y"
                            {(yyval.no)=getNumNode((yyvsp[0].integer));}
#line 2378 "y.tab.c"
    break;

  case 111: /* E: ID  */
#line 493 "e1.y"
                            {(yyval.no)=getIdNode((yyvsp[0].string),NULL);}
#line 2384 "y.tab.c"
    break;

  case 112: /* E: STRING  */
#line 494 "e1.y"
                            {(yyval.no)=getStringNode((yyvsp[0].string)); }
#line 2390 "y.tab.c"
    break;

  case 113: /* E: Field  */
#line 495 "e1.y"
                               {(yyval.no)=(yyvsp[0].no);}
#line 2396 "y.tab.c"
    break;

  case 114: /* E: FieldFunction  */
#line 496 "e1.y"
                              {(yyval.no)=(yyvsp[0].no);}
#line 2402 "y.tab.c"
    break;

  case 115: /* E: ID '[' E ']'  */
#line 497 "e1.y"
                                {arraycheck((yyvsp[-3].string),(yyvsp[-1].no));(yyval.no)=getIdNode((yyvsp[-3].string),(yyvsp[-1].no));}
#line 2408 "y.tab.c"
    break;

  case 116: /* E: E '>' E  */
#line 498 "e1.y"
                             {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2415 "y.tab.c"
    break;

  case 117: /* E: E '<' E  */
#line 500 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2422 "y.tab.c"
    break;

  case 118: /* E: E '=' '=' E  */
#line 502 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),EQ,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2429 "y.tab.c"
    break;

  case 119: /* E: E '<' '=' E  */
#line 504 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),LTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2436 "y.tab.c"
    break;

  case 120: /* E: E '>' '=' E  */
#line 506 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),GTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2443 "y.tab.c"
    break;

  case 121: /* E: E '!' '=' E  */
#line 508 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),NE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2450 "y.tab.c"
    break;

  case 122: /* E: E AND E  */
#line 510 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'b'); //AND HAS b
				(yyval.no)=getOpNode(TLookup("bool"),12,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2457 "y.tab.c"
    break;

  case 123: /* E: E '!' '=' NULLL  */
#line 512 "e1.y"
                                  {(yyval.no)=getOpNode(TLookup("bool"),NE,(yyvsp[-3].no),getNulNode());}
#line 2463 "y.tab.c"
    break;

  case 124: /* E: E '=' '=' NULLL  */
#line 513 "e1.y"
                                  {(yyval.no)=getOpNode(TLookup("bool"),EQ,(yyvsp[-3].no),getNulNode());}
#line 2469 "y.tab.c"
    break;


#line 2473 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 516 "e1.y"


void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}
int main()
{
	FILE *fp2 = fopen("input.txt", "r");
	if(fp2){
		yyin = fp2;
		}
	
    fp = fopen("a.xsm", "w");
    printf("HELLO OPENED\n");	
    // Check if the file is opened successfully
    if (fp == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1;  // Exit the program with an error code
    }

    // Use fprintf to write to the file
  TypeTableCreate();  
  fprintf(fp,"MOV R0,\"Heapset\"\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\n");
	fprintf(fp,"POP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n");
  yyparse();
  return 1;
}     
