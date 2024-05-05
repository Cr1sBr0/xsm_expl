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
	struct Typetable *gtype;
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
  YYSYMBOL_FieldDeclList = 61,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 62,                 /* FieldDecl  */
  YYSYMBOL_ClassDefBlock = 63,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 64,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 65,                  /* ClassDef  */
  YYSYMBOL_Cname = 66,                     /* Cname  */
  YYSYMBOL_Fieldlists = 67,                /* Fieldlists  */
  YYSYMBOL_Fld = 68,                       /* Fld  */
  YYSYMBOL_MethodDecl = 69,                /* MethodDecl  */
  YYSYMBOL_MDecl = 70,                     /* MDecl  */
  YYSYMBOL_MethodDefns = 71,               /* MethodDefns  */
  YYSYMBOL_FieldFunction = 72,             /* FieldFunction  */
  YYSYMBOL_GdeclBlock = 73,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 74,                 /* GdeclList  */
  YYSYMBOL_GDecl = 75,                     /* GDecl  */
  YYSYMBOL_TypeName = 76,                  /* TypeName  */
  YYSYMBOL_GidList = 77,                   /* GidList  */
  YYSYMBOL_Gid = 78,                       /* Gid  */
  YYSYMBOL_ParamList = 79,                 /* ParamList  */
  YYSYMBOL_Param = 80,                     /* Param  */
  YYSYMBOL_FdefBlock = 81,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 82,                      /* Fdef  */
  YYSYMBOL_ParamList2 = 83,                /* ParamList2  */
  YYSYMBOL_Param2 = 84,                    /* Param2  */
  YYSYMBOL_TypeName2 = 85,                 /* TypeName2  */
  YYSYMBOL_LdeclBlock = 86,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 87,                  /* LDecList  */
  YYSYMBOL_LDecl = 88,                     /* LDecl  */
  YYSYMBOL_IdList = 89,                    /* IdList  */
  YYSYMBOL_E = 90,                         /* E  */
  YYSYMBOL_ArgList = 91,                   /* ArgList  */
  YYSYMBOL_MainBlock = 92,                 /* MainBlock  */
  YYSYMBOL_Slist = 93,                     /* Slist  */
  YYSYMBOL_Stmt = 94,                      /* Stmt  */
  YYSYMBOL_RetStmt = 95,                   /* RetStmt  */
  YYSYMBOL_WhileStmt = 96,                 /* WhileStmt  */
  YYSYMBOL_InputStmt = 97,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 98,                /* OutputStmt  */
  YYSYMBOL_IfStmt = 99,                    /* IfStmt  */
  YYSYMBOL_AsgStmt = 100,                  /* AsgStmt  */
  YYSYMBOL_BrkStmt = 101,                  /* BrkStmt  */
  YYSYMBOL_ContStmt = 102,                 /* ContStmt  */
  YYSYMBOL_Field = 103                     /* Field  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   518

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  289

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
      71,    74,    75,    77,    81,    82,    84,    85,    88,    91,
      92,    94,    95,    97,   100,   101,   103,   106,   107,   110,
     125,   151,   169,   172,   174,   175,   177,   182,   185,   186,
     189,   195,   202,   210,   211,   212,   214,   220,   221,   223,
     253,   254,   255,   257,   267,   280,   281,   282,   284,   285,
     287,   290,   301,   315,   326,   327,   328,   330,   354,   355,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     368,   369,   372,   373,   375,   378,   381,   383,   388,   391,
     394,   397,   398,   400,   401,   403,   411,   418,   422,   424,
     426,   436,   463,   476,   478,   480,   482,   484,   486,   487,
     488,   489,   490,   491,   492,   493,   495,   497,   499,   501,
     503,   505,   507,   508
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
  "Program", "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList",
  "FieldDecl", "ClassDefBlock", "ClassDefList", "ClassDef", "Cname",
  "Fieldlists", "Fld", "MethodDecl", "MDecl", "MethodDefns",
  "FieldFunction", "GdeclBlock", "GdeclList", "GDecl", "TypeName",
  "GidList", "Gid", "ParamList", "Param", "FdefBlock", "Fdef",
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

#define YYPACT_NINF (-224)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-6)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,    49,    36,  -224,    48,    52,     6,  -224,  -224,    61,
      28,   121,  -224,  -224,    67,    22,  -224,    94,   121,    37,
    -224,     0,  -224,   139,   142,  -224,  -224,   159,    -2,  -224,
     147,   146,   150,    37,  -224,  -224,  -224,  -224,   145,  -224,
    -224,  -224,  -224,    68,    72,  -224,   176,   151,  -224,  -224,
    -224,   188,   190,   196,  -224,   147,    53,   203,   190,   193,
    -224,    56,  -224,  -224,   -23,  -224,   211,   174,  -224,  -224,
     214,    80,  -224,   197,     9,  -224,   217,    60,   218,   121,
    -224,  -224,   190,  -224,  -224,  -224,    97,  -224,  -224,   185,
     186,    93,   191,   192,   194,   195,    18,   205,   206,   209,
     173,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
      99,   198,   190,  -224,  -224,   190,   210,     1,  -224,  -224,
    -224,   232,     3,    18,   233,    18,    76,    18,    18,  -224,
    -224,  -224,    82,  -224,   215,    18,  -224,   263,   220,     4,
     247,    11,   221,  -224,   248,    87,   176,  -224,    89,  -224,
    -224,  -224,    46,   125,   284,  -224,   293,   213,   224,   216,
     314,   333,   351,    18,   256,    18,   264,   369,    18,    18,
      18,    18,    18,  -224,   227,    18,    15,    64,   237,   282,
     127,   131,  -224,   245,   138,  -224,  -224,   250,   252,   260,
     387,   301,   267,   268,    18,   269,   276,   270,   280,  -224,
     318,  -224,   316,   313,   459,   106,   296,   406,   297,  -224,
     459,   464,   464,   440,   440,   102,   459,    18,   459,    18,
     459,   130,   304,   306,   307,   312,   311,  -224,   352,  -224,
     197,  -224,  -224,   424,  -224,  -224,    18,   319,   324,   197,
     197,  -224,    18,    18,  -224,    18,  -224,   459,   459,   459,
    -224,   459,    18,  -224,  -224,  -224,   320,   329,   207,   330,
     429,  -224,   334,   238,   262,   459,   109,   114,   117,  -224,
     336,   317,   337,  -224,  -224,   197,   338,   339,  -224,  -224,
    -224,  -224,  -224,  -224,   272,  -224,  -224,   349,  -224
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,     0,     2,    15,     0,     0,     9,     1,     0,
      33,     0,     6,     8,    19,     0,    17,     0,     0,     0,
      37,     0,    12,     0,     0,    14,    16,     0,     0,    35,
       0,     0,     0,     0,    48,     4,    10,    11,     0,    20,
      22,    32,    34,    40,     0,    39,    57,     0,    47,     3,
      13,     0,    45,     0,    36,     0,     0,     0,    52,     0,
      21,     0,    25,    54,     0,    44,     0,     0,    38,    56,
       0,     0,    59,     0,     0,    51,     0,     0,     0,     0,
      24,    42,     0,    46,    41,    62,     0,    55,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    77,    74,    70,    71,    73,    72,    75,    76,
       0,     0,     0,    53,    23,    45,     0,     0,    28,    43,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    99,
      98,   109,   110,   111,     0,     0,   113,     0,   112,     0,
       0,     0,     0,    68,     0,     0,    57,    50,     0,    18,
      27,    61,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,     0,    67,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,    88,     0,     0,    65,     0,   100,     0,   102,   108,
     121,   104,   103,   105,   106,     0,   107,     0,   115,     0,
     116,     0,   101,     0,     0,     0,     0,    94,     0,    90,
       0,    26,    82,     0,    84,    85,     0,     0,     0,     0,
       0,    63,     0,    66,   114,    66,   123,   117,   119,   118,
     122,   120,    66,    78,    79,    97,     0,     0,     0,     0,
       0,    91,     0,     0,     0,    64,     0,     0,     0,    92,
       0,     0,     0,    89,    95,     0,     0,     0,    30,    29,
      31,    96,    49,    83,     0,    87,    81,     0,    86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -224,  -224,  -224,  -224,  -224,   355,  -224,   372,  -224,  -224,
     380,  -224,  -224,  -224,  -224,   350,  -224,  -224,  -224,  -224,
     370,    -8,  -224,   342,   285,   328,  -224,   -32,  -224,   287,
     -54,   271,  -224,   344,  -224,   -94,  -156,   383,  -223,   -95,
    -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,   -73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     6,     7,    21,    22,    10,    15,
      16,    17,    51,    60,    61,    62,   117,   136,    19,    28,
      29,    32,    44,    45,    64,    65,    33,    34,    74,    75,
      66,    57,    71,    72,    86,   204,   205,    35,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   138
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     110,    48,   137,    23,    76,   143,    20,   258,    20,    20,
      30,   152,   180,    23,     5,    41,   263,   264,   131,   183,
      30,   131,    81,   132,    82,     1,   132,   110,    -5,   154,
      14,   156,   160,   161,   162,    12,     8,   133,    98,    98,
     133,   167,    36,   149,    18,    20,    98,   118,    70,   153,
     134,   190,   284,   134,   111,    25,   112,     5,    76,   135,
      31,    20,   135,    70,    78,   217,   181,   131,   184,    14,
      69,   207,   132,    79,   210,   211,   212,   213,   214,   131,
       9,   216,   218,   220,   132,   150,   133,   266,    20,   267,
     131,   193,   124,    11,   194,   132,   268,    87,   133,   134,
     233,    24,   157,   114,   115,   131,   158,   159,   135,   133,
     132,   134,    52,   187,   219,    54,    53,   188,   189,    55,
     135,   247,   134,   248,   133,   249,   163,   251,   164,    20,
     165,   135,   246,   131,   192,    27,    82,   134,   132,   124,
     120,   125,   260,   126,   121,   144,   135,    38,   265,   145,
      39,   241,   133,   242,   278,    43,   242,   110,    47,   279,
     250,   242,   280,   143,   242,   134,   110,   110,   143,   143,
     195,   144,   223,   124,   135,    40,   224,   144,   142,    89,
      90,    91,    92,   225,   144,   110,    93,    46,    50,   143,
     110,   110,    56,    94,    95,    58,    59,    96,    63,    67,
      97,    77,   110,    89,    90,    91,    92,    73,    98,    99,
      93,   110,   271,    89,    90,    91,    92,    94,    95,    83,
      93,    96,    85,    84,    97,   113,   116,    94,    95,   122,
     123,    96,    98,    99,    97,   127,   128,   129,   130,   146,
     151,   155,    98,    99,    89,    90,    91,    92,   275,   139,
     276,    93,   140,   141,   115,   182,   186,   198,    94,    95,
     200,   166,    96,   185,   206,    97,   179,   199,    89,    90,
      91,    92,   208,    98,    99,    93,   277,   215,    89,    90,
      91,    92,    94,    95,   287,    93,    96,   221,   168,    97,
     222,   124,    94,    95,   226,   227,    96,    98,    99,    97,
     169,   170,   171,   172,   228,   230,   173,    98,    99,   168,
     231,   232,   234,   174,   175,   176,   177,   178,   168,   235,
     236,   169,   170,   171,   172,   237,   238,   239,   240,   196,
     169,   170,   171,   172,   174,   175,   176,   177,   178,   168,
     243,   245,   197,   174,   175,   176,   177,   178,   252,   253,
     254,   169,   170,   171,   172,   255,   256,   201,   168,   282,
     257,    13,   261,   269,   174,   175,   176,   177,   178,   262,
     169,   170,   171,   172,   270,   272,   168,   274,   202,   281,
     283,   285,   286,   174,   175,   176,   177,   178,   169,   170,
     171,   172,   288,    37,   168,    26,   203,    68,    42,   147,
     148,   174,   175,   176,   177,   178,   169,   170,   171,   172,
     119,    80,   168,     0,   209,    88,    49,   191,     0,   174,
     175,   176,   177,   178,   169,   170,   171,   172,     0,     0,
     229,   168,     0,     0,     0,     0,     0,   174,   175,   176,
     177,   178,     0,   169,   170,   171,   172,     0,     0,   168,
       0,     0,     0,     0,   168,   244,   174,   175,   176,   177,
     178,   169,   170,   171,   172,   168,   169,   170,   171,   172,
       0,     0,   273,   259,   174,   175,   176,   177,   178,   174,
     175,   176,   177,   178,   168,     0,     0,     0,     0,   168,
     174,   175,   176,   177,   178,     0,   169,   170,   171,   172,
       0,     0,     0,   171,   172,     0,     0,     0,     0,   174,
     175,   176,   177,   178,   174,   175,   176,   177,   178
};

static const yytype_int16 yycheck[] =
{
      73,    33,    96,    11,    58,   100,     8,   230,     8,     8,
      18,     8,     8,    21,     8,    17,   239,   240,     3,     8,
      28,     3,    45,     8,    47,    28,     8,   100,     0,   123,
       8,   125,   126,   127,   128,    29,     0,    22,    35,    35,
      22,   135,    42,    42,    16,     8,    35,    79,    56,   122,
      35,   145,   275,    35,    45,    33,    47,     8,   112,    44,
      23,     8,    44,    71,     8,    50,   139,     3,   141,     8,
      17,   165,     8,    17,   168,   169,   170,   171,   172,     3,
      32,   175,   176,   177,     8,   117,    22,   243,     8,   245,
       3,    45,    46,    41,    48,     8,   252,    17,    22,    35,
     194,    34,    26,    43,    44,     3,    30,    31,    44,    22,
       8,    35,    44,    26,    50,    43,    48,    30,    31,    47,
      44,   215,    35,   217,    22,   219,    44,   221,    46,     8,
      48,    44,    30,     3,    45,    41,    47,    35,     8,    46,
      43,    48,   236,    50,    47,    46,    44,     8,   242,    50,
       8,    45,    22,    47,    45,     8,    47,   230,     8,    45,
      30,    47,    45,   258,    47,    35,   239,   240,   263,   264,
      45,    46,    45,    46,    44,    16,    45,    46,     5,     6,
       7,     8,     9,    45,    46,   258,    13,    41,    43,   284,
     263,   264,    16,    20,    21,    44,     8,    24,     8,     3,
      27,     8,   275,     6,     7,     8,     9,     4,    35,    36,
      13,   284,     5,     6,     7,     8,     9,    20,    21,     8,
      13,    24,     8,    49,    27,     8,     8,    20,    21,    44,
      44,    24,    35,    36,    27,    44,    44,    43,    43,    41,
       8,     8,    35,    36,     6,     7,     8,     9,    10,    44,
      12,    13,    46,    44,    44,     8,     8,    44,    20,    21,
      44,    46,    24,    42,     8,    27,    46,    43,     6,     7,
       8,     9,     8,    35,    36,    13,    14,    50,     6,     7,
       8,     9,    20,    21,    12,    13,    24,    50,    25,    27,
       8,    46,    20,    21,    44,    43,    24,    35,    36,    27,
      37,    38,    39,    40,    44,     4,    43,    35,    36,    25,
      43,    43,    43,    50,    51,    52,    53,    54,    25,    43,
      50,    37,    38,    39,    40,    45,     8,    11,    15,    45,
      37,    38,    39,    40,    50,    51,    52,    53,    54,    25,
      44,    44,    49,    50,    51,    52,    53,    54,    44,    43,
      43,    37,    38,    39,    40,    43,    45,    43,    25,    42,
       8,     6,    43,    43,    50,    51,    52,    53,    54,    45,
      37,    38,    39,    40,    45,    45,    25,    43,    45,    43,
      43,    43,    43,    50,    51,    52,    53,    54,    37,    38,
      39,    40,    43,    21,    25,    15,    45,    55,    28,   112,
     115,    50,    51,    52,    53,    54,    37,    38,    39,    40,
      82,    61,    25,    -1,    45,    71,    33,   146,    -1,    50,
      51,    52,    53,    54,    37,    38,    39,    40,    -1,    -1,
      43,    25,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    37,    38,    39,    40,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    25,    49,    50,    51,    52,    53,
      54,    37,    38,    39,    40,    25,    37,    38,    39,    40,
      -1,    -1,    43,    49,    50,    51,    52,    53,    54,    50,
      51,    52,    53,    54,    25,    -1,    -1,    -1,    -1,    25,
      50,    51,    52,    53,    54,    -1,    37,    38,    39,    40,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    50,    51,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    56,    57,    58,     8,    59,    60,     0,    32,
      63,    41,    29,    60,     8,    64,    65,    66,    16,    73,
       8,    61,    62,    76,    34,    33,    65,    41,    74,    75,
      76,    23,    76,    81,    82,    92,    42,    62,     8,     8,
      16,    17,    75,     8,    77,    78,    41,     8,    82,    92,
      43,    67,    44,    48,    43,    47,    16,    86,    44,     8,
      68,    69,    70,     8,    79,    80,    85,     3,    78,    17,
      76,    87,    88,     4,    83,    84,    85,     8,     8,    17,
      70,    45,    47,     8,    49,     8,    89,    17,    88,     6,
       7,     8,     9,    13,    20,    21,    24,    27,    35,    36,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    45,    47,     8,    43,    44,     8,    71,    82,    80,
      43,    47,    44,    44,    46,    48,    50,    44,    44,    43,
      43,     3,     8,    22,    35,    44,    72,    90,   103,    44,
      46,    44,     5,    94,    46,    50,    41,    84,    79,    42,
      82,     8,     8,   103,    90,     8,    90,    26,    30,    31,
      90,    90,    90,    44,    46,    48,    46,    90,    25,    37,
      38,    39,    40,    43,    50,    51,    52,    53,    54,    46,
       8,   103,     8,     8,   103,    42,     8,    26,    30,    31,
      90,    86,    45,    45,    48,    45,    45,    49,    44,    43,
      44,    43,    45,    45,    90,    91,     8,    90,     8,    45,
      90,    90,    90,    90,    90,    50,    90,    50,    90,    50,
      90,    50,     8,    45,    45,    45,    44,    43,    44,    43,
       4,    43,    43,    90,    43,    43,    50,    45,     8,    11,
      15,    45,    47,    44,    49,    44,    30,    90,    90,    90,
      30,    90,    44,    43,    43,    43,    45,     8,    93,    49,
      90,    43,    45,    93,    93,    90,    91,    91,    91,    43,
      45,     5,    45,    43,    43,    10,    12,    14,    45,    45,
      45,    43,    42,    43,    93,    43,    43,    12,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    58,    58,    59,    59,
      60,    61,    61,    62,    63,    63,    64,    64,    65,    66,
      66,    67,    67,    68,    69,    69,    70,    71,    71,    72,
      72,    72,    73,    73,    74,    74,    75,    76,    77,    77,
      78,    78,    78,    79,    79,    79,    80,    81,    81,    82,
      83,    83,    83,    84,    85,    86,    86,    86,    87,    87,
      88,    89,    89,    90,    91,    91,    91,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    96,    97,    97,    97,    98,    99,    99,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   101,   102,
     103,   103,   103,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     4,     2,     3,     0,     2,     1,
       4,     2,     1,     3,     3,     0,     2,     1,     8,     1,
       3,     2,     0,     3,     2,     1,     6,     2,     1,     6,
       6,     6,     3,     0,     2,     1,     3,     1,     3,     1,
       1,     4,     4,     3,     1,     0,     2,     2,     1,    11,
       3,     1,     0,     2,     1,     3,     2,     0,     2,     1,
       3,     3,     1,     4,     3,     1,     0,     7,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       3,     8,     5,     8,     5,     5,    10,     8,     4,     7,
       4,     6,     6,     4,     4,     7,     7,     5,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     4,     3,     3,     4,     4,     4,
       4,     3,     4,     4
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
#line 1553 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock ClassDefBlock GdeclBlock FdefBlock MainBlock  */
#line 56 "e1.y"
                                                                  {;}
#line 1559 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock ClassDefBlock GdeclBlock MainBlock  */
#line 57 "e1.y"
                                                         {;}
#line 1565 "y.tab.c"
    break;

  case 6: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 64 "e1.y"
                                       {printf("printing types\n");printTypes();
              			initialize(fp,l);			}
#line 1572 "y.tab.c"
    break;

  case 7: /* TypeDefBlock: %empty  */
#line 66 "e1.y"
              {initialize(fp,l);}
#line 1578 "y.tab.c"
    break;

  case 10: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 71 "e1.y"
                                        { printf("doing tinstall\n");TInstall((yyvsp[-3].string),0,fieldHead);
					  fieldHead=NULL;fIndex=0;     }
#line 1585 "y.tab.c"
    break;

  case 13: /* FieldDecl: TypeName ID ';'  */
#line 77 "e1.y"
                                {(yyval.tipe)=addField((yyvsp[-1].string),fIndex,(yyvsp[-2].tipe));fIndex++;}
#line 1591 "y.tab.c"
    break;

  case 14: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 81 "e1.y"
                                          {printf("class decl finished\n");class=1;Cptr=NULL;}
#line 1597 "y.tab.c"
    break;

  case 18: /* ClassDef: Cname '{' DECL Fieldlists MethodDecl ENDDECL MethodDefns '}'  */
#line 88 "e1.y"
                                                                              {printf("class stuff\n");printClassDetails((yyvsp[-7].ctabel));}
#line 1603 "y.tab.c"
    break;

  case 19: /* Cname: ID  */
#line 91 "e1.y"
                      {printf("cname\n");Cptr=CInstall((yyvsp[0].string),NULL);(yyval.ctabel)=Cptr;}
#line 1609 "y.tab.c"
    break;

  case 20: /* Cname: ID EXTEND ID  */
#line 92 "e1.y"
                               {Cptr=CInstall((yyvsp[-2].string),(yyvsp[0].string));}
#line 1615 "y.tab.c"
    break;

  case 21: /* Fieldlists: Fieldlists Fld  */
#line 94 "e1.y"
                                {printf("fieldlists\n");}
#line 1621 "y.tab.c"
    break;

  case 23: /* Fld: ID ID ';'  */
#line 97 "e1.y"
                           {Class_Finstall(Cptr,(yyvsp[-2].string),(yyvsp[-1].string));}
#line 1627 "y.tab.c"
    break;

  case 24: /* MethodDecl: MethodDecl MDecl  */
#line 100 "e1.y"
                                  {printf("methoddecl1\n");}
#line 1633 "y.tab.c"
    break;

  case 25: /* MethodDecl: MDecl  */
#line 101 "e1.y"
                        {printf("methoddecl2\n");}
#line 1639 "y.tab.c"
    break;

  case 26: /* MDecl: ID ID '(' ParamList ')' ';'  */
#line 104 "e1.y"
{printf("mdecl\n");Class_Minstall(Cptr,(yyvsp[-4].string),TLookup((yyvsp[-5].string)),(yyvsp[-2].par));printf("mdeclend\n");}
#line 1645 "y.tab.c"
    break;

  case 27: /* MethodDefns: MethodDefns Fdef  */
#line 106 "e1.y"
                                   {printf("methoddefs1\n");}
#line 1651 "y.tab.c"
    break;

  case 28: /* MethodDefns: Fdef  */
#line 107 "e1.y"
                      {printf("methoddefs2\n");}
#line 1657 "y.tab.c"
    break;

  case 29: /* FieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 110 "e1.y"
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
					   printf("exit\n");fflush(stdout);	
					}
#line 1677 "y.tab.c"
    break;

  case 30: /* FieldFunction: ID '.' ID '(' ArgList ')'  */
#line 125 "e1.y"
                                             { printf("exit\n");fflush(stdout);	
		if(getIdNode((yyvsp[-5].string),NULL)->cType){

		if(Class_Mlookup(getIdNode((yyvsp[-5].string),NULL)->cType,(yyvsp[-3].string))){

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
			yyerror("unknown\n");
					   exit(0);
		}
		}
#line 1707 "y.tab.c"
    break;

  case 31: /* FieldFunction: Field '.' ID '(' ArgList ')'  */
#line 151 "e1.y"
                                              {if((yyvsp[-5].no)->cType && Class_Mlookup((yyvsp[-5].no)->cType,(yyvsp[-3].string))){	checkArgs((yyvsp[-3].string),(yyvsp[-1].al),(yyvsp[-5].no)->cType);		
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
#line 1727 "y.tab.c"
    break;

  case 32: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 169 "e1.y"
                                    {  //showTable();
					printf("gdecl completed\n");
					}
#line 1735 "y.tab.c"
    break;

  case 33: /* GdeclBlock: %empty  */
#line 172 "e1.y"
                                {;}
#line 1741 "y.tab.c"
    break;

  case 34: /* GdeclList: GdeclList GDecl  */
#line 174 "e1.y"
                            {;}
#line 1747 "y.tab.c"
    break;

  case 35: /* GdeclList: GDecl  */
#line 175 "e1.y"
                 {;}
#line 1753 "y.tab.c"
    break;

  case 36: /* GDecl: TypeName GidList ';'  */
#line 177 "e1.y"
                             {if((yyvsp[-2].tipe)->existyet==0 && ctype==NULL){
				yyerror("undeclared type");
				exit(0);};
				}
#line 1762 "y.tab.c"
    break;

  case 37: /* TypeName: ID  */
#line 182 "e1.y"
                {(yyval.tipe)=TLookup((yyvsp[0].string));gtype=TLookup((yyvsp[0].string));ctype=CLookup((yyvsp[0].string));}
#line 1768 "y.tab.c"
    break;

  case 38: /* GidList: GidList ',' Gid  */
#line 185 "e1.y"
                          {;}
#line 1774 "y.tab.c"
    break;

  case 39: /* GidList: Gid  */
#line 186 "e1.y"
             {;}
#line 1780 "y.tab.c"
    break;

  case 40: /* Gid: ID  */
#line 189 "e1.y"
                { 		if(Lookitup((yyvsp[0].string))==NULL)
  				GInstall((yyvsp[0].string),gtype,ctype, 1,NULL);
  				else{  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration ");
  					exit(1);
  				};}
#line 1791 "y.tab.c"
    break;

  case 41: /* Gid: ID '[' NUM ']'  */
#line 195 "e1.y"
                     {         if(Lookitup((yyvsp[-3].string))==NULL)
  				GInstall((yyvsp[-3].string),gtype,NULL, (yyvsp[-1].integer),NULL);
  				else{printf("%s",(yyvsp[-3].string));
  					yyerror("redecleration ");
  					exit(1);
  				};
  				}
#line 1803 "y.tab.c"
    break;

  case 42: /* Gid: ID '(' ParamList ')'  */
#line 202 "e1.y"
                               {if(Lookitup((yyvsp[-3].string))==NULL )
  				GInstall((yyvsp[-3].string),gtype,NULL, 0,(yyvsp[-1].par));
  				else{  					printf("%s",(yyvsp[-3].string));
  					yyerror("redecleration ");
  					exit(1);
  				};
  				}
#line 1815 "y.tab.c"
    break;

  case 43: /* ParamList: ParamList ',' Param  */
#line 210 "e1.y"
                               {(yyval.par)=addParam((yyvsp[-2].par),(yyvsp[0].par));}
#line 1821 "y.tab.c"
    break;

  case 44: /* ParamList: Param  */
#line 211 "e1.y"
                                {printf("not empty\n");(yyval.par)=(yyvsp[0].par);}
#line 1827 "y.tab.c"
    break;

  case 45: /* ParamList: %empty  */
#line 212 "e1.y"
                                {printf("empty\n");(yyval.par)=NULL;}
#line 1833 "y.tab.c"
    break;

  case 46: /* Param: TypeName2 ID  */
#line 214 "e1.y"
                   {(yyval.par)=createParam((yyvsp[0].string),(yyvsp[-1].tipe),1);}
#line 1839 "y.tab.c"
    break;

  case 47: /* FdefBlock: FdefBlock Fdef  */
#line 220 "e1.y"
                           {;}
#line 1845 "y.tab.c"
    break;

  case 48: /* FdefBlock: Fdef  */
#line 221 "e1.y"
                        {;}
#line 1851 "y.tab.c"
    break;

  case 49: /* Fdef: TypeName ID '(' ParamList2 ')' '{' LdeclBlock BEGINN Slist END '}'  */
#line 223 "e1.y"
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
#line 1885 "y.tab.c"
    break;

  case 50: /* ParamList2: ParamList2 ',' Param2  */
#line 253 "e1.y"
                                   {(yyval.par)=addParam((yyvsp[-2].par),(yyvsp[0].par));}
#line 1891 "y.tab.c"
    break;

  case 51: /* ParamList2: Param2  */
#line 254 "e1.y"
                                {(yyval.par)=(yyvsp[0].par);}
#line 1897 "y.tab.c"
    break;

  case 52: /* ParamList2: %empty  */
#line 255 "e1.y"
                                {(yyval.par)=NULL;}
#line 1903 "y.tab.c"
    break;

  case 53: /* Param2: TypeName2 ID  */
#line 257 "e1.y"
                    {		if(Lookitup2((yyvsp[0].string))==NULL)
  				LInstall((yyvsp[0].string),(yyvsp[-1].tipe));
  				else{
  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};
  				params++;
  				(yyval.par)=createParam((yyvsp[0].string),(yyvsp[-1].tipe),1);}
#line 1917 "y.tab.c"
    break;

  case 54: /* TypeName2: ID  */
#line 267 "e1.y"
                        {if(TLookup((yyvsp[0].string))->existyet==1)
			 (yyval.tipe)=TLookup((yyvsp[0].string));
			 else{
			 	yyerror("unknown param type");
			 	exit(1);
			 }
			 }
#line 1929 "y.tab.c"
    break;

  case 55: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 280 "e1.y"
                                   {printf("hi3");}
#line 1935 "y.tab.c"
    break;

  case 56: /* LdeclBlock: DECL ENDDECL  */
#line 281 "e1.y"
                         {;}
#line 1941 "y.tab.c"
    break;

  case 58: /* LDecList: LDecList LDecl  */
#line 284 "e1.y"
                          {;}
#line 1947 "y.tab.c"
    break;

  case 59: /* LDecList: LDecl  */
#line 285 "e1.y"
                {;}
#line 1953 "y.tab.c"
    break;

  case 60: /* LDecl: TypeName IdList ';'  */
#line 287 "e1.y"
                            {;}
#line 1959 "y.tab.c"
    break;

  case 61: /* IdList: IdList ',' ID  */
#line 290 "e1.y"
                       {	if(Lookitup2((yyvsp[0].string))==NULL){
				if(gtype->existyet==0){
					yyerror("unknown type");
  					exit(1);
				}
  				LInstall((yyvsp[0].string),gtype);
  				}
  				else{	  printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};}
#line 1975 "y.tab.c"
    break;

  case 62: /* IdList: ID  */
#line 301 "e1.y"
           {			if(Lookitup2((yyvsp[0].string))==NULL){
       				if(gtype->existyet==0){
					yyerror("unknown type");
  					exit(1);
				}
  				LInstall((yyvsp[0].string),gtype);
  				}
  				else{  		printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};;}
#line 1991 "y.tab.c"
    break;

  case 63: /* E: ID '(' ArgList ')'  */
#line 315 "e1.y"
                       {if(Lookitup((yyvsp[-3].string))==NULL){
			printf("yyerror %s undeclared function\n",(yyvsp[-3].string));
			exit(1);
			}
 			checkArgs((yyvsp[-3].string),(yyvsp[-1].al),NULL);
 			(yyval.no)=getFunNode((yyvsp[-3].string),(yyvsp[-1].al));
 			(yyval.no)->val=Lookitup((yyvsp[-3].string))->flabel;
			(yyval.no)->type=Lookitup((yyvsp[-3].string))->type;
			}
#line 2005 "y.tab.c"
    break;

  case 64: /* ArgList: ArgList ',' E  */
#line 326 "e1.y"
                        {(yyval.al)=getArgList1((yyvsp[-2].al),(yyvsp[0].no));}
#line 2011 "y.tab.c"
    break;

  case 65: /* ArgList: E  */
#line 327 "e1.y"
            {(yyval.al)=getArgList2((yyvsp[0].no));}
#line 2017 "y.tab.c"
    break;

  case 66: /* ArgList: %empty  */
#line 328 "e1.y"
            {(yyval.al)=getArgList2(NULL);}
#line 2023 "y.tab.c"
    break;

  case 67: /* MainBlock: MAIN '{' LdeclBlock BEGINN Slist END '}'  */
#line 330 "e1.y"
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
#line 2046 "y.tab.c"
    break;

  case 68: /* Slist: Slist Stmt  */
#line 354 "e1.y"
                          {(yyval.no)=getCNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2052 "y.tab.c"
    break;

  case 69: /* Slist: Stmt  */
#line 355 "e1.y"
                          {(yyval.no)=(yyvsp[0].no);}
#line 2058 "y.tab.c"
    break;

  case 70: /* Stmt: InputStmt  */
#line 357 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 2064 "y.tab.c"
    break;

  case 71: /* Stmt: OutputStmt  */
#line 358 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 2070 "y.tab.c"
    break;

  case 72: /* Stmt: AsgStmt  */
#line 359 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 2076 "y.tab.c"
    break;

  case 73: /* Stmt: IfStmt  */
#line 360 "e1.y"
                           {(yyval.no)=(yyvsp[0].no);}
#line 2082 "y.tab.c"
    break;

  case 74: /* Stmt: WhileStmt  */
#line 361 "e1.y"
                                {(yyval.no)=(yyvsp[0].no);}
#line 2088 "y.tab.c"
    break;

  case 75: /* Stmt: BrkStmt  */
#line 362 "e1.y"
                           {(yyval.no) = (yyvsp[0].no);}
#line 2094 "y.tab.c"
    break;

  case 76: /* Stmt: ContStmt  */
#line 363 "e1.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 2100 "y.tab.c"
    break;

  case 77: /* Stmt: RetStmt  */
#line 364 "e1.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2106 "y.tab.c"
    break;

  case 78: /* Stmt: FREE '(' ID ')' ';'  */
#line 365 "e1.y"
                         {getFreeNode(getIdNode((yyvsp[-2].string),NULL));}
#line 2112 "y.tab.c"
    break;

  case 79: /* Stmt: FREE '(' Field ')' ';'  */
#line 366 "e1.y"
                         {getFreeNode((yyvsp[-2].no));}
#line 2118 "y.tab.c"
    break;

  case 80: /* RetStmt: RETURN E ';'  */
#line 368 "e1.y"
                        {rettype=(yyvsp[-1].no)->type;(yyval.no)=getRetNode((yyvsp[-1].no));}
#line 2124 "y.tab.c"
    break;

  case 81: /* WhileStmt: WHILE '(' E ')' DO Slist ENDWHILE ';'  */
#line 369 "e1.y"
                                                { typecheck((yyvsp[-5].no)->type, TLookup("bool"), 'i');
						  (yyval.no)=CreateTree(7,(yyvsp[-5].no),NULL,(yyvsp[-2].no));}
#line 2131 "y.tab.c"
    break;

  case 82: /* InputStmt: READ '(' ID ')' ';'  */
#line 372 "e1.y"
                                    {typecheck(getIdNode((yyvsp[-2].string),NULL)->type,NULL,'y');(yyval.no)=getrNode(getIdNode((yyvsp[-2].string),NULL));}
#line 2137 "y.tab.c"
    break;

  case 83: /* InputStmt: READ '(' ID '[' E ']' ')' ';'  */
#line 373 "e1.y"
                                      {	arraycheck((yyvsp[-5].string),(yyvsp[-3].no));
			(yyval.no)=getrNode(getIdNode((yyvsp[-5].string),(yyvsp[-3].no)));}
#line 2144 "y.tab.c"
    break;

  case 84: /* InputStmt: READ '(' Field ')' ';'  */
#line 375 "e1.y"
                                      {typecheck((yyvsp[-2].no)->type,NULL,'y');
	      		(yyval.no)=getrNode((yyvsp[-2].no));}
#line 2151 "y.tab.c"
    break;

  case 85: /* OutputStmt: WRITE '(' E ')' ';'  */
#line 378 "e1.y"
                                {typecheck((yyvsp[-2].no)->type, NULL, 'y'); 
					(yyval.no)=getwNode((yyvsp[-2].no));}
#line 2158 "y.tab.c"
    break;

  case 86: /* IfStmt: IF '(' E ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 381 "e1.y"
                                                      {typecheck((yyvsp[-7].no)->type, TLookup("bool"), 'i'); 
							(yyval.no)=CreateTree(6,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 2165 "y.tab.c"
    break;

  case 87: /* IfStmt: IF '(' E ')' THEN Slist ENDIF ';'  */
#line 383 "e1.y"
                                          {    typecheck((yyvsp[-5].no)->type, TLookup("bool"), 'i');
	   					(yyval.no)=CreateTree(6,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 2172 "y.tab.c"
    break;

  case 88: /* AsgStmt: ID '=' E ';'  */
#line 388 "e1.y"
                               {	//printf("ass stmt\n");
					typecheck(getIdNode((yyvsp[-3].string),NULL)->type, (yyvsp[-1].no)->type, 'e');
	(yyval.no)=getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-3].string),NULL),(yyvsp[-1].no));}
#line 2180 "y.tab.c"
    break;

  case 89: /* AsgStmt: ID '[' E ']' '=' E ';'  */
#line 391 "e1.y"
                                        {arraycheck((yyvsp[-6].string),(yyvsp[-4].no));
typecheck(getIdNode((yyvsp[-6].string),(yyvsp[-4].no))->type, (yyvsp[-4].no)->type, 'e');					getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-6].string),(yyvsp[-4].no)),(yyvsp[-1].no));}
#line 2187 "y.tab.c"
    break;

  case 90: /* AsgStmt: Field '=' E ';'  */
#line 394 "e1.y"
                                  {typecheck((yyvsp[-3].no)->type,(yyvsp[-1].no)->type,'e');
				   (yyval.no)=getOpNode(TLookup("void"),HI,(yyvsp[-3].no),(yyvsp[-1].no));              //NEW
						}
#line 2195 "y.tab.c"
    break;

  case 91: /* AsgStmt: ID '=' ALLOC '(' ')' ';'  */
#line 397 "e1.y"
                                        {(yyval.no)=getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-5].string),NULL),getAllocNode()); }
#line 2201 "y.tab.c"
    break;

  case 92: /* AsgStmt: Field '=' ALLOC '(' ')' ';'  */
#line 398 "e1.y"
                                        {(yyval.no)=getOpNode(TLookup("void"),HI,(yyvsp[-5].no),getAllocNode());}
#line 2207 "y.tab.c"
    break;

  case 93: /* AsgStmt: ID '=' NULLL ';'  */
#line 400 "e1.y"
                                {(yyval.no)=getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-3].string),NULL),getNulNode()); }
#line 2213 "y.tab.c"
    break;

  case 94: /* AsgStmt: Field '=' NULLL ';'  */
#line 401 "e1.y"
                                {(yyval.no)=getOpNode(TLookup("void"),HI,(yyvsp[-3].no),getNulNode());}
#line 2219 "y.tab.c"
    break;

  case 95: /* AsgStmt: ID '=' NEW '(' ID ')' ';'  */
#line 403 "e1.y"
                                         {
	if(getIdNode((yyvsp[-6].string),NULL)->cType!=CLookup((yyvsp[-2].string))){
		yyerror("conflicting types for ");
		printf("%s\n",(yyvsp[-2].string)
		);
		exit(0);
	}
	getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-6].string),NULL),getAllocNode());}
#line 2232 "y.tab.c"
    break;

  case 96: /* AsgStmt: Field '=' NEW '(' ID ')' ';'  */
#line 411 "e1.y"
                                        {
	if((yyvsp[-6].no)->cType!=CLookup((yyvsp[-2].string))){
		yyerror("conflicting types for ");
		printf("%s\n",(yyvsp[-2].string));
		exit(0);
	}
	getOpNode(TLookup("void"),HI,(yyvsp[-6].no),getAllocNode());}
#line 2244 "y.tab.c"
    break;

  case 97: /* AsgStmt: DELETE '(' Field ')' ';'  */
#line 418 "e1.y"
                                        {;}
#line 2250 "y.tab.c"
    break;

  case 98: /* BrkStmt: BREAK ';'  */
#line 422 "e1.y"
                                    {(yyval.no) =CreateTree(8,NULL,NULL,NULL);}
#line 2256 "y.tab.c"
    break;

  case 99: /* ContStmt: CONTINUE ';'  */
#line 424 "e1.y"
                                        {(yyval.no) =CreateTree(9,NULL,NULL,NULL);}
#line 2262 "y.tab.c"
    break;

  case 100: /* Field: ID '.' ID  */
#line 426 "e1.y"
                           {if(ftype=FLookup(getIdNode((yyvsp[-2].string),NULL)->type,(yyvsp[0].string))){
				(yyval.no)=getFieldNode((yyvsp[-2].string),ftype);
				(yyval.no)->type=ftype->type;
				}
			    else{
			    		yyerror("invalid member");
			    		exit(0);
			    }
			    		}
#line 2276 "y.tab.c"
    break;

  case 101: /* Field: Field '.' ID  */
#line 436 "e1.y"
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
#line 2308 "y.tab.c"
    break;

  case 102: /* Field: SELF '.' ID  */
#line 463 "e1.y"
                            {	if(ftype=Class_Flookup(Cptr,(yyvsp[0].string))){

	 			(yyval.no)=getSelfNode(ftype);

	 			}
	 			else{yyerror("invalid member");
			    		exit(0);
	 			}
	 			}
#line 2322 "y.tab.c"
    break;

  case 103: /* E: E '+' E  */
#line 476 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2329 "y.tab.c"
    break;

  case 104: /* E: E '-' E  */
#line 478 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2336 "y.tab.c"
    break;

  case 105: /* E: E '*' E  */
#line 480 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2343 "y.tab.c"
    break;

  case 106: /* E: E '/' E  */
#line 482 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2350 "y.tab.c"
    break;

  case 107: /* E: E '%' E  */
#line 484 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2357 "y.tab.c"
    break;

  case 108: /* E: '(' E ')'  */
#line 486 "e1.y"
                            {(yyval.no)=(yyvsp[-1].no);	}
#line 2363 "y.tab.c"
    break;

  case 109: /* E: NUM  */
#line 487 "e1.y"
                            {(yyval.no)=getNumNode((yyvsp[0].integer));}
#line 2369 "y.tab.c"
    break;

  case 110: /* E: ID  */
#line 488 "e1.y"
                            {(yyval.no)=getIdNode((yyvsp[0].string),NULL);}
#line 2375 "y.tab.c"
    break;

  case 111: /* E: STRING  */
#line 489 "e1.y"
                            {(yyval.no)=getStringNode((yyvsp[0].string)); }
#line 2381 "y.tab.c"
    break;

  case 112: /* E: Field  */
#line 490 "e1.y"
                               {(yyval.no)=(yyvsp[0].no);}
#line 2387 "y.tab.c"
    break;

  case 113: /* E: FieldFunction  */
#line 491 "e1.y"
                              {(yyval.no)=(yyvsp[0].no);}
#line 2393 "y.tab.c"
    break;

  case 114: /* E: ID '[' E ']'  */
#line 492 "e1.y"
                                {arraycheck((yyvsp[-3].string),(yyvsp[-1].no));(yyval.no)=getIdNode((yyvsp[-3].string),(yyvsp[-1].no));}
#line 2399 "y.tab.c"
    break;

  case 115: /* E: E '>' E  */
#line 493 "e1.y"
                             {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2406 "y.tab.c"
    break;

  case 116: /* E: E '<' E  */
#line 495 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2413 "y.tab.c"
    break;

  case 117: /* E: E '=' '=' E  */
#line 497 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),EQ,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2420 "y.tab.c"
    break;

  case 118: /* E: E '<' '=' E  */
#line 499 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),LTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2427 "y.tab.c"
    break;

  case 119: /* E: E '>' '=' E  */
#line 501 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),GTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2434 "y.tab.c"
    break;

  case 120: /* E: E '!' '=' E  */
#line 503 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),NE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2441 "y.tab.c"
    break;

  case 121: /* E: E AND E  */
#line 505 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'b'); //AND HAS b
				(yyval.no)=getOpNode(TLookup("bool"),12,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2448 "y.tab.c"
    break;

  case 122: /* E: E '!' '=' NULLL  */
#line 507 "e1.y"
                                  {(yyval.no)=getOpNode(TLookup("bool"),NE,(yyvsp[-3].no),getNulNode());}
#line 2454 "y.tab.c"
    break;

  case 123: /* E: E '=' '=' NULLL  */
#line 508 "e1.y"
                                  {(yyval.no)=getOpNode(TLookup("bool"),EQ,(yyvsp[-3].no),getNulNode());}
#line 2460 "y.tab.c"
    break;


#line 2464 "y.tab.c"

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

#line 511 "e1.y"


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
