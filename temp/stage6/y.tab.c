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
	#include "e1.c"
	
	int yylex(void);
	FILE *fp;
	extern FILE *yyin;
	int l[20];
	struct Typetable *gtype;
	int params=0;
	int args;
	int flabell=0;
	struct Typetable* rettype;
	struct FieldList *ftype;

#line 91 "y.tab.c"

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
    ENDTYPE = 284                  /* ENDTYPE  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "e1.y"

	char character;
	struct tNode *no;
	int integer;        //1 INT 3 STR
	char *string;
	struct Paramstruct *par;
	struct argList * al;
	struct Typetable* tipe;

#line 212 "y.tab.c"

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
  YYSYMBOL_30_ = 30,                       /* '-'  */
  YYSYMBOL_31_ = 31,                       /* '+'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_34_ = 34,                       /* '{'  */
  YYSYMBOL_35_ = 35,                       /* '}'  */
  YYSYMBOL_36_ = 36,                       /* ';'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_38_ = 38,                       /* '['  */
  YYSYMBOL_39_ = 39,                       /* ']'  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* '='  */
  YYSYMBOL_43_ = 43,                       /* '.'  */
  YYSYMBOL_44_ = 44,                       /* '%'  */
  YYSYMBOL_45_ = 45,                       /* '>'  */
  YYSYMBOL_46_ = 46,                       /* '<'  */
  YYSYMBOL_47_ = 47,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_Final = 49,                     /* Final  */
  YYSYMBOL_Program = 50,                   /* Program  */
  YYSYMBOL_TypeDefBlock = 51,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 52,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 53,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 54,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 55,                 /* FieldDecl  */
  YYSYMBOL_GdeclBlock = 56,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 57,                 /* GdeclList  */
  YYSYMBOL_GDecl = 58,                     /* GDecl  */
  YYSYMBOL_GidList = 59,                   /* GidList  */
  YYSYMBOL_Gid = 60,                       /* Gid  */
  YYSYMBOL_ParamList = 61,                 /* ParamList  */
  YYSYMBOL_Param = 62,                     /* Param  */
  YYSYMBOL_FdefBlock = 63,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 64,                      /* Fdef  */
  YYSYMBOL_ParamList2 = 65,                /* ParamList2  */
  YYSYMBOL_Param2 = 66,                    /* Param2  */
  YYSYMBOL_TypeName2 = 67,                 /* TypeName2  */
  YYSYMBOL_LdeclBlock = 68,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 69,                  /* LDecList  */
  YYSYMBOL_LDecl = 70,                     /* LDecl  */
  YYSYMBOL_IdList = 71,                    /* IdList  */
  YYSYMBOL_E = 72,                         /* E  */
  YYSYMBOL_Empty = 73,                     /* Empty  */
  YYSYMBOL_ArgList = 74,                   /* ArgList  */
  YYSYMBOL_MainBlock = 75,                 /* MainBlock  */
  YYSYMBOL_TypeName = 76,                  /* TypeName  */
  YYSYMBOL_Slist = 77,                     /* Slist  */
  YYSYMBOL_Stmt = 78,                      /* Stmt  */
  YYSYMBOL_RetStmt = 79,                   /* RetStmt  */
  YYSYMBOL_WhileStmt = 80,                 /* WhileStmt  */
  YYSYMBOL_InputStmt = 81,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 82,                /* OutputStmt  */
  YYSYMBOL_IfStmt = 83,                    /* IfStmt  */
  YYSYMBOL_AsgStmt = 84,                   /* AsgStmt  */
  YYSYMBOL_BrkStmt = 85,                   /* BrkStmt  */
  YYSYMBOL_ContStmt = 86,                  /* ContStmt  */
  YYSYMBOL_Field = 87                      /* Field  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   433

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
       2,     2,     2,    47,     2,     2,     2,    44,     2,     2,
      40,    41,    32,    31,    37,    30,    43,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
      46,    42,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    45,    46,    53,    54,    56,    57,    59,
      62,    63,    65,    70,    74,    76,    77,    79,    85,    86,
      89,    95,   102,   110,   111,   112,   114,   120,   128,   140,
     150,   151,   152,   154,   164,   165,   166,   173,   174,   176,
     177,   179,   182,   188,   197,   198,   200,   202,   203,   205,
     223,   227,   228,   229,   233,   234,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   247,   248,   251,   252,
     254,   256,   259,   261,   266,   269,   271,   274,   275,   277,
     279,   281,   291,   301,   303,   305,   307,   309,   311,   312,
     313,   314,   315,   316,   317,   319,   321,   323,   325,   327,
     329
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
  "'-'", "'+'", "'*'", "'/'", "'{'", "'}'", "';'", "','", "'['", "']'",
  "'('", "')'", "'='", "'.'", "'%'", "'>'", "'<'", "'!'", "$accept",
  "Final", "Program", "TypeDefBlock", "TypeDefList", "TypeDef",
  "FieldDeclList", "FieldDecl", "GdeclBlock", "GdeclList", "GDecl",
  "GidList", "Gid", "ParamList", "Param", "FdefBlock", "Fdef",
  "ParamList2", "Param2", "TypeName2", "LdeclBlock", "LDecList", "LDecl",
  "IdList", "E", "Empty", "ArgList", "MainBlock", "TypeName", "Slist",
  "Stmt", "RetStmt", "WhileStmt", "InputStmt", "OutputStmt", "IfStmt",
  "AsgStmt", "BrkStmt", "ContStmt", "Field", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    36,    58,  -124,    45,    39,    -5,  -124,  -124,    94,
     410,    94,  -124,  -124,  -124,  -124,  -124,     0,  -124,    76,
      88,    65,   410,  -124,  -124,    99,    -7,  -124,   112,  -124,
    -124,    41,    68,  -124,  -124,   120,  -124,  -124,   103,  -124,
    -124,   115,   173,   106,  -124,    76,   136,   152,   106,  -124,
     130,  -124,  -124,  -124,   -14,  -124,   179,  -124,  -124,   413,
    -124,   186,   395,    18,  -124,   198,  -124,   106,  -124,  -124,
    -124,  -124,  -124,    96,   170,   183,    97,   184,   185,   175,
     190,    63,   187,   110,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,   166,   106,   194,  -124,  -124,  -124,   221,
     233,    63,    63,    48,   234,    63,    63,  -124,  -124,  -124,
      -8,  -124,    63,    64,   200,   236,   210,  -124,    61,   238,
    -124,   120,  -124,    34,   129,   117,   135,   219,   153,  -124,
     171,   189,    63,    63,   207,    63,    63,    63,    63,    63,
    -124,   205,    63,    12,    23,   218,   132,   164,  -124,   222,
     225,  -124,   259,    63,   228,   229,   230,   235,   237,  -124,
     268,   265,   243,   297,   240,    49,  -124,   297,   313,   313,
     146,   146,    63,   297,    63,   297,    63,   297,    63,   247,
     248,   254,  -124,   395,   261,  -124,  -124,  -124,    63,   260,
     395,   395,  -124,  -124,    63,  -124,   297,   297,   297,   297,
    -124,  -124,   262,   327,   256,   279,  -124,   355,   364,   297,
    -124,   264,   266,  -124,   395,   277,   278,  -124,  -124,   386,
    -124,  -124,   280,  -124
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     0,     2,    14,     0,     0,     8,     1,     0,
       0,     0,     5,     7,    53,    51,    52,     0,    16,     0,
       0,     0,     0,    28,     4,     0,     0,    11,     0,    13,
      15,    20,     0,    19,    50,     0,    27,     3,     0,     9,
      10,     0,     0,    25,    17,     0,     0,     0,    32,    12,
       0,    36,    34,    35,     0,    24,     0,    18,    38,     0,
      40,     0,     0,     0,    31,     0,    21,     0,    22,    26,
      37,    39,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    63,    60,    56,    57,    59,
      58,    61,    62,     0,     0,     0,    33,    23,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    79,    89,
      90,    91,     0,     0,    92,     0,     0,    54,     0,     0,
      30,     0,    42,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    48,     0,     0,    88,   100,    84,    83,
      85,    86,     0,    87,     0,    94,     0,    95,     0,     0,
       0,     0,    76,     0,     0,    68,    70,    71,     0,     0,
       0,     0,    93,    44,     0,    45,    96,    98,    97,    99,
      64,    65,     0,     0,     0,     0,    77,     0,     0,    47,
      78,     0,     0,    75,     0,     0,     0,    29,    69,     0,
      73,    67,     0,    72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,  -124,  -124,   295,  -124,   291,  -124,  -124,
     301,  -124,   274,  -124,   253,  -124,   309,  -124,   255,   -44,
     216,  -124,   293,  -124,   -96,  -124,  -124,   328,     3,  -123,
     -81,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,   -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     6,     7,    26,    27,    10,    17,
      18,    32,    33,    54,    55,    22,    23,    63,    64,    56,
      47,    59,    60,    73,   113,   164,   165,    24,    19,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,   114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      93,    14,   117,     5,    65,   125,   126,   128,    14,   130,
     131,    15,    16,    25,    28,   109,   134,    29,    15,    16,
     110,    93,   150,    67,    12,    25,   109,    68,    39,    28,
     132,   110,   133,     1,   111,   104,   162,   163,   124,   167,
     168,   169,   170,   171,     5,   111,   173,   175,   177,    61,
      65,   109,   112,   147,   174,    94,   110,   184,     8,    95,
     203,     9,    61,   112,   109,   176,   109,   207,   208,   110,
     111,   110,   153,    11,   127,   154,   196,   104,   197,    42,
     198,    43,   199,   111,    31,   111,   194,   149,   112,   135,
     195,   219,   205,    34,   136,   137,   138,   139,   209,    35,
     140,   112,    14,   112,    44,    45,   141,    38,   142,   143,
     144,   145,    15,    16,    51,   116,    74,    75,    76,    77,
      41,    93,   117,    78,    52,    53,   117,   117,    93,    93,
      79,    80,    98,    99,    81,   102,    46,    82,   117,   103,
     104,    93,   135,    48,    14,    93,    93,   136,   137,   138,
     139,    49,    93,    58,    15,    16,    62,    93,   156,   141,
     135,   142,   143,   144,   145,   136,   137,   138,   139,    66,
     155,   135,   119,   179,   157,   104,    50,   141,   135,   142,
     143,   144,   145,   136,   137,   138,   139,    69,   141,   159,
     142,   143,   144,   145,    72,   141,   135,   142,   143,   144,
     145,   136,   137,   138,   139,   180,    96,   119,   118,   119,
     100,   107,   160,   141,   135,   142,   143,   144,   145,   136,
     137,   138,   139,   101,   105,   106,   108,   115,   121,   122,
     161,   141,   135,   142,   143,   144,   145,   136,   137,   138,
     139,   123,   129,   119,   146,   148,   151,   172,   166,   141,
     135,   142,   143,   144,   145,   136,   137,   138,   139,   158,
     178,   182,   181,   183,   185,   186,   187,   141,   135,   142,
     143,   144,   145,   136,   137,   138,   139,   188,   189,   190,
     191,   193,   192,   200,   201,   141,   135,   142,   143,   144,
     145,   136,   137,   138,   139,   202,   206,   212,   210,   217,
     204,    13,   218,   141,   135,   142,   143,   144,   145,   136,
     137,   138,   139,   220,   221,   213,   223,    40,    30,    57,
      97,   141,   135,   142,   143,   144,   145,   136,   137,   138,
     139,    36,   211,    74,    75,    76,    77,   152,   135,   141,
      78,   142,   143,   144,   145,   138,   139,    79,    80,   120,
      37,    81,    71,     0,    82,   141,     0,   142,   143,   144,
     145,    74,    75,    76,    77,   214,     0,   215,    78,     0,
      74,    75,    76,    77,     0,    79,    80,    78,   216,    81,
       0,     0,    82,     0,    79,    80,     0,     0,    81,     0,
       0,    82,    74,    75,    76,    77,     0,     0,   222,    78,
       0,    74,    75,    76,    77,     0,    79,    80,    78,     0,
      81,     0,     0,    82,    20,    79,    80,     0,    14,    81,
       0,    14,    82,     0,     0,     0,     0,     0,    15,    16,
      70,    15,    16,    21
};

static const yytype_int16 yycheck[] =
{
      62,     8,    83,     8,    48,   101,   102,   103,     8,   105,
     106,    18,    19,    10,    11,     3,   112,    17,    18,    19,
       8,    83,   118,    37,    29,    22,     3,    41,    35,    26,
      38,     8,    40,    28,    22,    43,   132,   133,   100,   135,
     136,   137,   138,   139,     8,    22,   142,   143,   144,    46,
      94,     3,    40,   115,    42,    37,     8,   153,     0,    41,
     183,    16,    59,    40,     3,    42,     3,   190,   191,     8,
      22,     8,    38,    34,    26,    41,   172,    43,   174,    38,
     176,    40,   178,    22,     8,    22,    37,    26,    40,    25,
      41,   214,   188,     5,    30,    31,    32,    33,   194,    34,
      36,    40,     8,    40,    36,    37,    42,     8,    44,    45,
      46,    47,    18,    19,     8,     5,     6,     7,     8,     9,
       8,   183,   203,    13,    18,    19,   207,   208,   190,   191,
      20,    21,    36,    37,    24,    38,    16,    27,   219,    42,
      43,   203,    25,    40,     8,   207,   208,    30,    31,    32,
      33,    36,   214,    17,    18,    19,     4,   219,    41,    42,
      25,    44,    45,    46,    47,    30,    31,    32,    33,    39,
      41,    25,    43,    41,    39,    43,     3,    42,    25,    44,
      45,    46,    47,    30,    31,    32,    33,     8,    42,    36,
      44,    45,    46,    47,     8,    42,    25,    44,    45,    46,
      47,    30,    31,    32,    33,    41,     8,    43,    42,    43,
      40,    36,    41,    42,    25,    44,    45,    46,    47,    30,
      31,    32,    33,    40,    40,    40,    36,    40,    34,     8,
      41,    42,    25,    44,    45,    46,    47,    30,    31,    32,
      33,     8,     8,    43,     8,    35,     8,    42,    41,    42,
      25,    44,    45,    46,    47,    30,    31,    32,    33,    40,
      42,    36,    40,     4,    36,    36,    36,    42,    25,    44,
      45,    46,    47,    30,    31,    32,    33,    42,    41,    11,
      15,    41,    39,    36,    36,    42,    25,    44,    45,    46,
      47,    30,    31,    32,    33,    41,    36,    41,    36,    35,
      39,     6,    36,    42,    25,    44,    45,    46,    47,    30,
      31,    32,    33,    36,    36,    36,    36,    26,    17,    45,
      67,    42,    25,    44,    45,    46,    47,    30,    31,    32,
      33,    22,     5,     6,     7,     8,     9,   121,    25,    42,
      13,    44,    45,    46,    47,    32,    33,    20,    21,    94,
      22,    24,    59,    -1,    27,    42,    -1,    44,    45,    46,
      47,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
       6,     7,     8,     9,    -1,    20,    21,    13,    14,    24,
      -1,    -1,    27,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    27,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,     6,     7,     8,     9,    -1,    20,    21,    13,    -1,
      24,    -1,    -1,    27,     4,    20,    21,    -1,     8,    24,
      -1,     8,    27,    -1,    -1,    -1,    -1,    -1,    18,    19,
      17,    18,    19,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    49,    50,    51,     8,    52,    53,     0,    16,
      56,    34,    29,    53,     8,    18,    19,    57,    58,    76,
       4,    23,    63,    64,    75,    76,    54,    55,    76,    17,
      58,     8,    59,    60,     5,    34,    64,    75,     8,    35,
      55,     8,    38,    40,    36,    37,    16,    68,    40,    36,
       3,     8,    18,    19,    61,    62,    67,    60,    17,    69,
      70,    76,     4,    65,    66,    67,    39,    37,    41,     8,
      17,    70,     8,    71,     6,     7,     8,     9,    13,    20,
      21,    24,    27,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    37,    41,     8,    62,    36,    37,
      40,    40,    38,    42,    43,    40,    40,    36,    36,     3,
       8,    22,    40,    72,    87,    40,     5,    78,    42,    43,
      66,    34,     8,     8,    87,    72,    72,    26,    72,     8,
      72,    72,    38,    40,    72,    25,    30,    31,    32,    33,
      36,    42,    44,    45,    46,    47,     8,    87,    35,    26,
      72,     8,    68,    38,    41,    41,    41,    39,    40,    36,
      41,    41,    72,    72,    73,    74,    41,    72,    72,    72,
      72,    72,    42,    72,    42,    72,    42,    72,    42,    41,
      41,    40,    36,     4,    72,    36,    36,    36,    42,    41,
      11,    15,    39,    41,    37,    41,    72,    72,    72,    72,
      36,    36,    41,    77,    39,    72,    36,    77,    77,    72,
      36,     5,    41,    36,    10,    12,    14,    35,    36,    77,
      36,    36,    12,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      54,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    60,    60,    61,    61,    61,    62,    63,    63,    64,
      65,    65,    65,    66,    67,    67,    67,    68,    68,    69,
      69,    70,    71,    71,    72,    72,    73,    74,    74,    75,
      75,    76,    76,    76,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    80,    81,    81,
      81,    82,    83,    83,    84,    84,    84,    84,    84,    85,
      86,    87,    87,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     3,     3,     0,     2,     1,     4,
       2,     1,     3,     3,     0,     2,     1,     3,     3,     1,
       1,     4,     4,     3,     1,     0,     2,     2,     1,    11,
       3,     1,     0,     2,     1,     1,     1,     3,     2,     2,
       1,     3,     3,     1,     4,     4,     0,     3,     1,     7,
       2,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     3,     8,     5,     8,
       5,     5,    10,     8,     4,     7,     4,     6,     6,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     4,     3,     3,     4,     4,     4,     4,
       3
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
#line 42 "e1.y"
                                  {	printf("hi final23");
					return;
						}
#line 1468 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock GdeclBlock FdefBlock MainBlock  */
#line 45 "e1.y"
                                                    {;}
#line 1474 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock GdeclBlock MainBlock  */
#line 46 "e1.y"
                                           {;}
#line 1480 "y.tab.c"
    break;

  case 5: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 53 "e1.y"
                                       {printf("printing types\n");printTypes();}
#line 1486 "y.tab.c"
    break;

  case 9: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 59 "e1.y"
                                        { printf("doing tinstall\n");TInstall((yyvsp[-3].string),0,fieldHead);
					  fieldHead=NULL;fIndex=0;     }
#line 1493 "y.tab.c"
    break;

  case 12: /* FieldDecl: TypeName ID ';'  */
#line 65 "e1.y"
                                {(yyval.tipe)=addField((yyvsp[-1].string),fIndex,(yyvsp[-2].tipe));fIndex++;}
#line 1499 "y.tab.c"
    break;

  case 13: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 70 "e1.y"
                                    {  //showTable();
					initialize(fp,l);
					printf("gdecl completed\n");
					}
#line 1508 "y.tab.c"
    break;

  case 14: /* GdeclBlock: %empty  */
#line 74 "e1.y"
                                {initialize(fp,l);}
#line 1514 "y.tab.c"
    break;

  case 15: /* GdeclList: GdeclList GDecl  */
#line 76 "e1.y"
                            {;}
#line 1520 "y.tab.c"
    break;

  case 16: /* GdeclList: GDecl  */
#line 77 "e1.y"
                 {;}
#line 1526 "y.tab.c"
    break;

  case 17: /* GDecl: TypeName GidList ';'  */
#line 79 "e1.y"
                             {if((yyvsp[-2].tipe)->existyet==0){
				yyerror("undeclared type");
				exit(0);};
				}
#line 1535 "y.tab.c"
    break;

  case 18: /* GidList: GidList ',' Gid  */
#line 85 "e1.y"
                          {;}
#line 1541 "y.tab.c"
    break;

  case 19: /* GidList: Gid  */
#line 86 "e1.y"
             {;}
#line 1547 "y.tab.c"
    break;

  case 20: /* Gid: ID  */
#line 89 "e1.y"
                { 		if(Lookitup((yyvsp[0].string))==NULL)
  				GInstall((yyvsp[0].string),gtype, 1,NULL);
  				else{  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration ");
  					exit(1);
  				};}
#line 1558 "y.tab.c"
    break;

  case 21: /* Gid: ID '[' NUM ']'  */
#line 95 "e1.y"
                     {         if(Lookitup((yyvsp[-3].string))==NULL)
  				GInstall((yyvsp[-3].string),gtype, (yyvsp[-1].integer),NULL);
  				else{  					printf("%s",(yyvsp[-3].string));
  					yyerror("redecleration ");
  					exit(1);
  				};
  				}
#line 1570 "y.tab.c"
    break;

  case 22: /* Gid: ID '(' ParamList ')'  */
#line 102 "e1.y"
                               {if(Lookitup((yyvsp[-3].string))==NULL )
  				GInstall((yyvsp[-3].string),gtype, 0,(yyvsp[-1].par));
  				else{  					printf("%s",(yyvsp[-3].string));
  					yyerror("redecleration ");
  					exit(1);
  				};
  				}
#line 1582 "y.tab.c"
    break;

  case 23: /* ParamList: ParamList ',' Param  */
#line 110 "e1.y"
                               {(yyval.par)=addParam((yyvsp[-2].par),(yyvsp[0].par));}
#line 1588 "y.tab.c"
    break;

  case 24: /* ParamList: Param  */
#line 111 "e1.y"
                                {printf("not empty\n");(yyval.par)=(yyvsp[0].par);}
#line 1594 "y.tab.c"
    break;

  case 25: /* ParamList: %empty  */
#line 112 "e1.y"
                                {printf("empty\n");(yyval.par)=NULL;}
#line 1600 "y.tab.c"
    break;

  case 26: /* Param: TypeName2 ID  */
#line 114 "e1.y"
                   {(yyval.par)=createParam((yyvsp[0].string),(yyvsp[-1].tipe),1);}
#line 1606 "y.tab.c"
    break;

  case 27: /* FdefBlock: FdefBlock Fdef  */
#line 120 "e1.y"
                           {	
				//printree($2);
	  		showTable();
	  		flabell++;
	  		genCode((yyvsp[0].no),args,fp,l,flabell);
	  		//then destroy the Lsymboltable for that fuunction
			params=0;
	  		ClearLsymbol();printf("FdefBlock completed1\n");}
#line 1619 "y.tab.c"
    break;

  case 28: /* FdefBlock: Fdef  */
#line 128 "e1.y"
                {	printf("FdefBlock started1\n");
			//generate code using Lsymbol table
			showTable();
	  		//printree($1);
	  		flabell++;
	  		genCode((yyvsp[0].no),args,fp,l,flabell);
	  		//then destroy the Lsymboltable for that fuunction
	  		params=0;
	  		ClearLsymbol();
	  		printf("FdefBlock completed1\n");fflush(stdout);
	  			}
#line 1635 "y.tab.c"
    break;

  case 29: /* Fdef: TypeName ID '(' ParamList2 ')' '{' LdeclBlock BEGINN Slist END '}'  */
#line 140 "e1.y"
                                                                      {	if(rettype!=(yyvsp[-10].tipe)){
									yyerror("rettype error");
  									exit(1);		
										}
									printf("yofn\n");	
									typecheck((yyvsp[-10].tipe), Lookitup((yyvsp[-9].string))->type, 'e');
									checkParams((yyvsp[-9].string),(yyvsp[-7].par));
									args=doBinding(params);
									(yyval.no)=(yyvsp[-2].no);}
#line 1649 "y.tab.c"
    break;

  case 30: /* ParamList2: ParamList2 ',' Param2  */
#line 150 "e1.y"
                                   {(yyval.par)=addParam((yyvsp[-2].par),(yyvsp[0].par));}
#line 1655 "y.tab.c"
    break;

  case 31: /* ParamList2: Param2  */
#line 151 "e1.y"
                                {(yyval.par)=(yyvsp[0].par);}
#line 1661 "y.tab.c"
    break;

  case 32: /* ParamList2: %empty  */
#line 152 "e1.y"
                                {(yyval.par)=NULL;}
#line 1667 "y.tab.c"
    break;

  case 33: /* Param2: TypeName2 ID  */
#line 154 "e1.y"
                    {		if(Lookitup2((yyvsp[0].string))==NULL)
  				LInstall((yyvsp[0].string),(yyvsp[-1].tipe));
  				else{
  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};
  				params++;
  				(yyval.par)=createParam((yyvsp[0].string),(yyvsp[-1].tipe),1);}
#line 1681 "y.tab.c"
    break;

  case 34: /* TypeName2: INT  */
#line 164 "e1.y"
                   {(yyval.tipe)=TLookup("int");}
#line 1687 "y.tab.c"
    break;

  case 35: /* TypeName2: STR  */
#line 165 "e1.y"
              {(yyval.tipe)=TLookup("str");}
#line 1693 "y.tab.c"
    break;

  case 36: /* TypeName2: ID  */
#line 166 "e1.y"
                {(yyval.tipe)=TLookup((yyvsp[0].string));}
#line 1699 "y.tab.c"
    break;

  case 37: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 173 "e1.y"
                                   {printf("hi3");}
#line 1705 "y.tab.c"
    break;

  case 38: /* LdeclBlock: DECL ENDDECL  */
#line 174 "e1.y"
                         {;}
#line 1711 "y.tab.c"
    break;

  case 39: /* LDecList: LDecList LDecl  */
#line 176 "e1.y"
                          {;}
#line 1717 "y.tab.c"
    break;

  case 40: /* LDecList: LDecl  */
#line 177 "e1.y"
                {;}
#line 1723 "y.tab.c"
    break;

  case 41: /* LDecl: TypeName IdList ';'  */
#line 179 "e1.y"
                            {;}
#line 1729 "y.tab.c"
    break;

  case 42: /* IdList: IdList ',' ID  */
#line 182 "e1.y"
                       {	if(Lookitup2((yyvsp[0].string))==NULL)
  				LInstall((yyvsp[0].string),gtype);
  				else{	  printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};}
#line 1740 "y.tab.c"
    break;

  case 43: /* IdList: ID  */
#line 188 "e1.y"
           {			if(Lookitup2((yyvsp[0].string))==NULL)
  				LInstall((yyvsp[0].string),gtype);
  				else{  		printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};;}
#line 1751 "y.tab.c"
    break;

  case 44: /* E: ID '(' Empty ')'  */
#line 197 "e1.y"
                            {printf("hii");(yyval.no)=getFunNode((yyvsp[-3].string),NULL);}
#line 1757 "y.tab.c"
    break;

  case 45: /* E: ID '(' ArgList ')'  */
#line 198 "e1.y"
                         {printf("enter\n");checkArgs((yyvsp[-3].string),(yyvsp[-1].al));(yyval.no)=getFunNode((yyvsp[-3].string),(yyvsp[-1].al));printf("exit\n");}
#line 1763 "y.tab.c"
    break;

  case 46: /* Empty: %empty  */
#line 200 "e1.y"
                        {;}
#line 1769 "y.tab.c"
    break;

  case 47: /* ArgList: ArgList ',' E  */
#line 202 "e1.y"
                        {(yyval.al)=getArgList1((yyvsp[-2].al),(yyvsp[0].no));}
#line 1775 "y.tab.c"
    break;

  case 48: /* ArgList: E  */
#line 203 "e1.y"
            {(yyval.al)=getArgList2((yyvsp[0].no));}
#line 1781 "y.tab.c"
    break;

  case 49: /* MainBlock: MAIN '{' LdeclBlock BEGINN Slist END '}'  */
#line 205 "e1.y"
                                                    {   
			if(rettype!=TLookup("int")){
							//printf("-%s-",rettype->name);
									yyerror("rettype error");
  									exit(1);		
										}
			args=doBinding(params);
			//printree($5);
	  		//showTable();
	  		//then destroy the Lsymboltable for that fuunction
	  		genCode((yyvsp[-2].no),args,fp,l,0);
	  		printf("finn\n");
	  		ClearLsymbol();
				//codegen($3,fp,l);
				printf("hi4");
				//exitt();
				return;
						}
#line 1804 "y.tab.c"
    break;

  case 50: /* MainBlock: BEGINN END  */
#line 223 "e1.y"
                        {	return;		}
#line 1810 "y.tab.c"
    break;

  case 51: /* TypeName: INT  */
#line 227 "e1.y"
                  {(yyval.tipe)=TLookup("int");gtype=TLookup("int");}
#line 1816 "y.tab.c"
    break;

  case 52: /* TypeName: STR  */
#line 228 "e1.y"
              {(yyval.tipe)=TLookup("str");gtype=TLookup("str");}
#line 1822 "y.tab.c"
    break;

  case 53: /* TypeName: ID  */
#line 229 "e1.y"
                {(yyval.tipe)=TLookup((yyvsp[0].string));gtype=TLookup((yyvsp[0].string));}
#line 1828 "y.tab.c"
    break;

  case 54: /* Slist: Slist Stmt  */
#line 233 "e1.y"
                          {(yyval.no)=getCNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1834 "y.tab.c"
    break;

  case 55: /* Slist: Stmt  */
#line 234 "e1.y"
                          {(yyval.no)=(yyvsp[0].no);}
#line 1840 "y.tab.c"
    break;

  case 56: /* Stmt: InputStmt  */
#line 236 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 1846 "y.tab.c"
    break;

  case 57: /* Stmt: OutputStmt  */
#line 237 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 1852 "y.tab.c"
    break;

  case 58: /* Stmt: AsgStmt  */
#line 238 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 1858 "y.tab.c"
    break;

  case 59: /* Stmt: IfStmt  */
#line 239 "e1.y"
                           {(yyval.no)=(yyvsp[0].no);}
#line 1864 "y.tab.c"
    break;

  case 60: /* Stmt: WhileStmt  */
#line 240 "e1.y"
                                {(yyval.no)=(yyvsp[0].no);}
#line 1870 "y.tab.c"
    break;

  case 61: /* Stmt: BrkStmt  */
#line 241 "e1.y"
                           {(yyval.no) = (yyvsp[0].no);}
#line 1876 "y.tab.c"
    break;

  case 62: /* Stmt: ContStmt  */
#line 242 "e1.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1882 "y.tab.c"
    break;

  case 63: /* Stmt: RetStmt  */
#line 243 "e1.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1888 "y.tab.c"
    break;

  case 64: /* Stmt: FREE '(' ID ')' ';'  */
#line 244 "e1.y"
                         {getFreeNode((yyvsp[-2].string));}
#line 1894 "y.tab.c"
    break;

  case 65: /* Stmt: FREE '(' Field ')' ';'  */
#line 245 "e1.y"
                         {getFreeNode((yyvsp[-2].no));}
#line 1900 "y.tab.c"
    break;

  case 66: /* RetStmt: RETURN E ';'  */
#line 247 "e1.y"
                        {rettype=(yyvsp[-1].no)->type;(yyval.no)=getRetNode((yyvsp[-1].no));printf("--%s--",rettype->name);}
#line 1906 "y.tab.c"
    break;

  case 67: /* WhileStmt: WHILE '(' E ')' DO Slist ENDWHILE ';'  */
#line 248 "e1.y"
                                                { typecheck((yyvsp[-5].no)->type, TLookup("bool"), 'i');
						  (yyval.no)=CreateTree(7,(yyvsp[-5].no),NULL,(yyvsp[-2].no));}
#line 1913 "y.tab.c"
    break;

  case 68: /* InputStmt: READ '(' ID ')' ';'  */
#line 251 "e1.y"
                                    {(yyval.no)=getrNode(getIdNode((yyvsp[-2].string),NULL));}
#line 1919 "y.tab.c"
    break;

  case 69: /* InputStmt: READ '(' ID '[' E ']' ')' ';'  */
#line 252 "e1.y"
                                      {	arraycheck((yyvsp[-5].string),(yyvsp[-3].no));
							(yyval.no)=getrNode(getIdNode((yyvsp[-5].string),(yyvsp[-3].no)));}
#line 1926 "y.tab.c"
    break;

  case 70: /* InputStmt: READ '(' Field ')' ';'  */
#line 254 "e1.y"
                                      {;}
#line 1932 "y.tab.c"
    break;

  case 71: /* OutputStmt: WRITE '(' E ')' ';'  */
#line 256 "e1.y"
                                {typecheck((yyvsp[-2].no)->type, 2, 'y'); 
							(yyval.no)=getwNode((yyvsp[-2].no));}
#line 1939 "y.tab.c"
    break;

  case 72: /* IfStmt: IF '(' E ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 259 "e1.y"
                                                      {typecheck((yyvsp[-7].no)->type, TLookup("bool"), 'i'); 
							(yyval.no)=CreateTree(6,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 1946 "y.tab.c"
    break;

  case 73: /* IfStmt: IF '(' E ')' THEN Slist ENDIF ';'  */
#line 261 "e1.y"
                                          {    typecheck((yyvsp[-5].no)->type, TLookup("bool"), 'i');
	   					(yyval.no)=CreateTree(6,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 1953 "y.tab.c"
    break;

  case 74: /* AsgStmt: ID '=' E ';'  */
#line 266 "e1.y"
                               {	//printf("type is%d\n",$3->type);
					typecheck(getIdNode((yyvsp[-3].string),NULL)->type, (yyvsp[-1].no)->type, 'e');
					(yyval.no)=getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-3].string),NULL),(yyvsp[-1].no));}
#line 1961 "y.tab.c"
    break;

  case 75: /* AsgStmt: ID '[' E ']' '=' E ';'  */
#line 269 "e1.y"
                                        {arraycheck((yyvsp[-6].string),(yyvsp[-4].no));}
#line 1967 "y.tab.c"
    break;

  case 76: /* AsgStmt: Field '=' E ';'  */
#line 271 "e1.y"
                                  {typecheck((yyvsp[-3].no)->type,(yyvsp[-1].no)->type,'e');
				   (yyval.no)=getOpNode(TLookup("void"),HI,(yyvsp[-3].no),(yyvsp[-1].no));              //NEW
						}
#line 1975 "y.tab.c"
    break;

  case 77: /* AsgStmt: ID '=' ALLOC '(' ')' ';'  */
#line 274 "e1.y"
                                        {(yyval.no)=getOpNode(TLookup("void"),HI,getIdNode((yyvsp[-5].string),NULL),getAllocNode()); }
#line 1981 "y.tab.c"
    break;

  case 78: /* AsgStmt: Field '=' ALLOC '(' ')' ';'  */
#line 275 "e1.y"
                                        {(yyval.no)=getOpNode(TLookup("void"),HI,(yyvsp[-5].no),getAllocNode());}
#line 1987 "y.tab.c"
    break;

  case 79: /* BrkStmt: BREAK ';'  */
#line 277 "e1.y"
                                    {(yyval.no) =CreateTree(8,NULL,NULL,NULL);}
#line 1993 "y.tab.c"
    break;

  case 80: /* ContStmt: CONTINUE ';'  */
#line 279 "e1.y"
                                        {(yyval.no) =CreateTree(9,NULL,NULL,NULL);}
#line 1999 "y.tab.c"
    break;

  case 81: /* Field: ID '.' ID  */
#line 281 "e1.y"
                           {if(ftype=FLookup(getIdNode((yyvsp[-2].string),NULL)->type,(yyvsp[0].string))){
				(yyval.no)=getFieldNode((yyvsp[-2].string),ftype->fieldIndex);
				(yyval.no)->type=ftype->type;
				}
			    else{
			    		yyerror("invalid member");
			    		exit(0);
			    }
			    		}
#line 2013 "y.tab.c"
    break;

  case 82: /* Field: Field '.' ID  */
#line 291 "e1.y"
                           {if(ftype=FLookup((yyvsp[-2].no)->type,(yyvsp[0].string))){
				(yyval.no)=addMember((yyvsp[-2].no),ftype->fieldIndex);
				(yyval.no)->type=ftype->type;
				}
			    else{
			    		yyerror("invalid member");
			    		exit(0);
			    }	
			    }
#line 2027 "y.tab.c"
    break;

  case 83: /* E: E '+' E  */
#line 301 "e1.y"
                            {printf("hoho\n");typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2034 "y.tab.c"
    break;

  case 84: /* E: E '-' E  */
#line 303 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2041 "y.tab.c"
    break;

  case 85: /* E: E '*' E  */
#line 305 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2048 "y.tab.c"
    break;

  case 86: /* E: E '/' E  */
#line 307 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2055 "y.tab.c"
    break;

  case 87: /* E: E '%' E  */
#line 309 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(TLookup("int"),MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2062 "y.tab.c"
    break;

  case 88: /* E: '(' E ')'  */
#line 311 "e1.y"
                            {(yyval.no)=(yyvsp[-1].no);	}
#line 2068 "y.tab.c"
    break;

  case 89: /* E: NUM  */
#line 312 "e1.y"
                            {(yyval.no)=getNumNode((yyvsp[0].integer));}
#line 2074 "y.tab.c"
    break;

  case 90: /* E: ID  */
#line 313 "e1.y"
                            {(yyval.no)=getIdNode((yyvsp[0].string),NULL);}
#line 2080 "y.tab.c"
    break;

  case 91: /* E: STRING  */
#line 314 "e1.y"
                            {(yyval.no)=getStringNode((yyvsp[0].string)); }
#line 2086 "y.tab.c"
    break;

  case 93: /* E: ID '[' E ']'  */
#line 316 "e1.y"
                                {arraycheck((yyvsp[-3].string),(yyvsp[-1].no));(yyval.no)=getIdNode((yyvsp[-3].string),(yyvsp[-1].no));}
#line 2092 "y.tab.c"
    break;

  case 94: /* E: E '>' E  */
#line 317 "e1.y"
                             {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2099 "y.tab.c"
    break;

  case 95: /* E: E '<' E  */
#line 319 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2106 "y.tab.c"
    break;

  case 96: /* E: E '=' '=' E  */
#line 321 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),EQ,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2113 "y.tab.c"
    break;

  case 97: /* E: E '<' '=' E  */
#line 323 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),LTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2120 "y.tab.c"
    break;

  case 98: /* E: E '>' '=' E  */
#line 325 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),GTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2127 "y.tab.c"
    break;

  case 99: /* E: E '!' '=' E  */
#line 327 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(TLookup("bool"),NE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2134 "y.tab.c"
    break;

  case 100: /* E: E AND E  */
#line 329 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'b'); //AND HAS b
				(yyval.no)=getOpNode(TLookup("bool"),12,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2141 "y.tab.c"
    break;


#line 2145 "y.tab.c"

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

#line 333 "e1.y"


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
