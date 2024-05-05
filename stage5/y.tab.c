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
	#include "e1.c"
	int yylex(void);
	FILE *fp;
	extern FILE *yyin;
	int l[20];
	int gtype;
	int params=0;
	int args;
	int flabell=0;
	int rettype;

#line 88 "y.tab.c"

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
    AND = 280                      /* AND  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "e1.y"

	char character;
	struct tNode *no;
	int integer;        //1 INT 3 STR
	char *string;
	struct Paramstruct *par;
	struct argList * al;

#line 200 "y.tab.c"

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
  YYSYMBOL_26_ = 26,                       /* '-'  */
  YYSYMBOL_27_ = 27,                       /* '+'  */
  YYSYMBOL_28_ = 28,                       /* '*'  */
  YYSYMBOL_29_ = 29,                       /* '/'  */
  YYSYMBOL_30_ = 30,                       /* ';'  */
  YYSYMBOL_31_ = 31,                       /* ','  */
  YYSYMBOL_32_ = 32,                       /* '['  */
  YYSYMBOL_33_ = 33,                       /* ']'  */
  YYSYMBOL_34_ = 34,                       /* '('  */
  YYSYMBOL_35_ = 35,                       /* ')'  */
  YYSYMBOL_36_ = 36,                       /* '{'  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_38_ = 38,                       /* '='  */
  YYSYMBOL_39_ = 39,                       /* '%'  */
  YYSYMBOL_40_ = 40,                       /* '>'  */
  YYSYMBOL_41_ = 41,                       /* '<'  */
  YYSYMBOL_42_ = 42,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_Final = 44,                     /* Final  */
  YYSYMBOL_Program = 45,                   /* Program  */
  YYSYMBOL_GdeclBlock = 46,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 47,                 /* GdeclList  */
  YYSYMBOL_GDecl = 48,                     /* GDecl  */
  YYSYMBOL_GidList = 49,                   /* GidList  */
  YYSYMBOL_Gid = 50,                       /* Gid  */
  YYSYMBOL_ParamList = 51,                 /* ParamList  */
  YYSYMBOL_Param = 52,                     /* Param  */
  YYSYMBOL_FdefBlock = 53,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 54,                      /* Fdef  */
  YYSYMBOL_ParamList2 = 55,                /* ParamList2  */
  YYSYMBOL_Param2 = 56,                    /* Param2  */
  YYSYMBOL_Type2 = 57,                     /* Type2  */
  YYSYMBOL_LdeclBlock = 58,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 59,                  /* LDecList  */
  YYSYMBOL_LDecl = 60,                     /* LDecl  */
  YYSYMBOL_IdList = 61,                    /* IdList  */
  YYSYMBOL_E = 62,                         /* E  */
  YYSYMBOL_Empty = 63,                     /* Empty  */
  YYSYMBOL_ArgList = 64,                   /* ArgList  */
  YYSYMBOL_MainBlock = 65,                 /* MainBlock  */
  YYSYMBOL_Declarations = 66,              /* Declarations  */
  YYSYMBOL_DeclList = 67,                  /* DeclList  */
  YYSYMBOL_Decl = 68,                      /* Decl  */
  YYSYMBOL_Type = 69,                      /* Type  */
  YYSYMBOL_VarList = 70,                   /* VarList  */
  YYSYMBOL_Slist = 71,                     /* Slist  */
  YYSYMBOL_Stmt = 72,                      /* Stmt  */
  YYSYMBOL_RetStmt = 73,                   /* RetStmt  */
  YYSYMBOL_WhileStmt = 74,                 /* WhileStmt  */
  YYSYMBOL_InputStmt = 75,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 76,                /* OutputStmt  */
  YYSYMBOL_IfStmt = 77,                    /* IfStmt  */
  YYSYMBOL_AsgStmt = 78,                   /* AsgStmt  */
  YYSYMBOL_BrkStmt = 79,                   /* BrkStmt  */
  YYSYMBOL_ContStmt = 80                   /* ContStmt  */
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,    42,     2,     2,     2,    39,     2,     2,
      34,    35,    28,    27,    31,    26,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
      41,    38,    40,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    38,    38,    41,    42,    43,    46,    48,    49,    51,
      52,    54,    57,    58,    61,    67,    74,    82,    83,    84,
      86,    92,   100,   111,   120,   121,   122,   124,   134,   135,
     143,   144,   145,   147,   148,   150,   153,   159,   168,   169,
     171,   173,   174,   176,   192,   194,   195,   196,   199,   200,
     203,   206,   207,   210,   211,   220,   221,   223,   224,   225,
     226,   227,   228,   229,   230,   232,   233,   236,   237,   240,
     243,   245,   251,   254,   258,   260,   262,   264,   266,   268,
     270,   272,   273,   274,   275,   276,   277,   279,   281,   283,
     285,   287,   289
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
  "STRING", "MAIN", "RETURN", "AND", "'-'", "'+'", "'*'", "'/'", "';'",
  "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "'='", "'%'", "'>'",
  "'<'", "'!'", "$accept", "Final", "Program", "GdeclBlock", "GdeclList",
  "GDecl", "GidList", "Gid", "ParamList", "Param", "FdefBlock", "Fdef",
  "ParamList2", "Param2", "Type2", "LdeclBlock", "LDecList", "LDecl",
  "IdList", "E", "Empty", "ArgList", "MainBlock", "Declarations",
  "DeclList", "Decl", "Type", "VarList", "Slist", "Stmt", "RetStmt",
  "WhileStmt", "InputStmt", "OutputStmt", "IfStmt", "AsgStmt", "BrkStmt",
  "ContStmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      55,    21,    58,     6,    47,  -110,    83,  -110,  -110,  -110,
    -110,  -110,    95,  -110,    50,    53,  -110,    83,  -110,  -110,
      65,  -110,  -110,    29,    20,  -110,   111,    81,  -110,  -110,
      52,    91,    36,  -110,    50,  -110,   120,  -110,    90,   163,
      36,    67,  -110,  -110,   -21,  -110,    99,  -110,  -110,  -110,
    -110,    85,    69,    89,   -23,    92,    97,    79,   123,    38,
      75,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
     -19,  -110,   146,  -110,    36,  -110,  -110,  -110,    90,   150,
      38,    38,    38,    38,    38,  -110,  -110,  -110,    33,  -110,
      38,   164,   127,  -110,    36,   129,  -110,  -110,   137,    -8,
     172,   190,   208,   216,   234,    38,    38,   252,    38,    38,
      38,    38,    38,  -110,   139,    38,    14,    15,   141,  -110,
    -110,   157,    38,   151,   152,   142,  -110,   174,   171,   270,
     312,   153,   -10,  -110,   312,   330,   330,   324,   324,    38,
     312,    38,   312,    38,   312,    38,   128,   191,   288,  -110,
    -110,    38,   163,   163,  -110,  -110,    38,  -110,   312,   312,
     312,   312,  -110,   133,  -110,   188,   163,   173,   306,   112,
     135,   312,  -110,  -110,  -110,   104,    84,   179,  -110,   163,
     192,   194,  -110,   212,   184,  -110,   154,  -110,  -110,  -110,
    -110,   195,  -110
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     0,     0,     0,     2,     0,     5,    44,     7,
      51,    52,     0,    10,     0,    47,     1,     0,    22,     4,
       0,     6,     9,    14,     0,    13,     0,     0,    21,     3,
       0,     0,    19,    11,     0,    46,     0,    49,     0,     0,
      26,     0,    28,    29,     0,    18,     0,    12,    45,    48,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    64,    61,    57,    58,    60,    59,    62,    63,
       0,    25,     0,    15,     0,    16,    20,    50,     0,     0,
       0,     0,     0,     0,     0,    75,    74,    82,    83,    84,
       0,     0,     0,    55,     0,     0,    27,    17,    53,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,     0,    43,
      24,    32,     0,     0,     0,     0,    72,     0,     0,     0,
      42,     0,     0,    81,    92,    77,    76,    78,    79,     0,
      80,     0,    86,     0,    87,     0,     0,     0,     0,    67,
      69,     0,     0,     0,    85,    38,     0,    39,    88,    90,
      89,    91,    31,     0,    34,     0,     0,     0,     0,     0,
       0,    41,    30,    33,    37,     0,     0,     0,    73,     0,
       0,     0,    35,     0,     0,    68,     0,    71,    66,    36,
      23,     0,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,  -110,   214,  -110,   193,  -110,   165,
    -110,   223,  -110,   158,   -38,  -110,  -110,   101,  -110,   -77,
    -110,  -110,     2,  -110,  -110,   217,    -6,   187,  -109,   -59,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    12,    13,    24,    25,    44,    45,
      17,    18,    70,    71,    46,   147,   163,   164,   175,    91,
     131,   132,     7,    27,    36,    37,    14,    51,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      20,    93,    72,   100,   101,   102,   103,   104,    19,    81,
      74,    20,    94,   107,    75,    82,    95,    87,    87,    29,
      38,   156,    88,    88,   122,   157,     8,   123,   129,   130,
      38,   134,   135,   136,   137,   138,    89,    89,   140,   142,
     144,    87,    15,   169,   170,   148,    88,    16,    90,    90,
      33,    34,   141,   143,    42,    43,    72,   176,    23,     1,
      89,    31,   158,    32,   159,   105,   160,   106,   161,    26,
     186,     2,    90,    30,   168,     9,    10,    11,     3,   171,
      92,    52,    53,    54,    55,    39,    40,     1,    56,   184,
      52,    53,    54,    55,    41,    57,    58,    56,    50,    59,
      73,    10,    11,    79,    57,    58,     3,    76,    59,    85,
      93,    93,    21,    10,    11,    77,    78,    93,    52,    53,
      54,    55,   179,    80,   180,    56,    83,    93,    35,    10,
      11,    84,    57,    58,   182,   183,    59,    48,    10,    11,
     165,    52,    53,    54,    55,   162,    10,    11,    56,   181,
     172,    10,    11,    86,    96,    57,    58,   165,    99,    59,
      52,    53,    54,    55,   119,   121,   191,    56,    78,    52,
      53,    54,    55,   146,    57,    58,    56,   139,    59,   145,
     151,   149,   150,    57,    58,   152,   153,    59,   155,   108,
     109,   110,   111,   112,   113,   166,   174,   108,   109,   110,
     111,   112,   114,   115,   116,   117,   118,   124,   177,   185,
     114,   115,   116,   117,   118,   108,   109,   110,   111,   112,
     189,   190,   187,   125,   188,   192,    22,    47,   114,   115,
     116,   117,   118,   108,   109,   110,   111,   112,   126,    97,
      28,   108,   109,   110,   111,   112,   114,   115,   116,   117,
     118,   127,   120,    49,   114,   115,   116,   117,   118,   108,
     109,   110,   111,   112,   173,    98,     0,     0,     0,   128,
       0,     0,   114,   115,   116,   117,   118,   108,   109,   110,
     111,   112,     0,     0,     0,     0,     0,   133,     0,     0,
     114,   115,   116,   117,   118,   108,   109,   110,   111,   112,
       0,     0,     0,   154,     0,     0,     0,     0,   114,   115,
     116,   117,   118,   108,   109,   110,   111,   112,     0,     0,
       0,   167,     0,     0,     0,     0,   114,   115,   116,   117,
     118,   108,   109,   110,   111,   112,   178,   108,   109,   110,
     111,   112,     0,     0,   114,   115,   116,   117,   118,   108,
     114,   115,   116,   117,   118,   108,     0,     0,   111,   112,
       0,     0,   114,   115,   116,   117,   118,     0,   114,   115,
     116,   117,   118
};

static const yytype_int16 yycheck[] =
{
       6,    60,    40,    80,    81,    82,    83,    84,     6,    32,
      31,    17,    31,    90,    35,    38,    35,     3,     3,    17,
      26,    31,     8,     8,    32,    35,     5,    35,   105,   106,
      36,   108,   109,   110,   111,   112,    22,    22,   115,   116,
     117,     3,    36,   152,   153,   122,     8,     0,    34,    34,
      30,    31,    38,    38,    18,    19,    94,   166,     8,     4,
      22,    32,   139,    34,   141,    32,   143,    34,   145,    16,
     179,    16,    34,     8,   151,    17,    18,    19,    23,   156,
       5,     6,     7,     8,     9,     4,    34,     4,    13,     5,
       6,     7,     8,     9,     3,    20,    21,    13,     8,    24,
      33,    18,    19,    34,    20,    21,    23,     8,    24,    30,
     169,   170,    17,    18,    19,    30,    31,   176,     6,     7,
       8,     9,    10,    34,    12,    13,    34,   186,    17,    18,
      19,    34,    20,    21,    30,    31,    24,    17,    18,    19,
     146,     6,     7,     8,     9,    17,    18,    19,    13,    14,
      17,    18,    19,    30,     8,    20,    21,   163,     8,    24,
       6,     7,     8,     9,    37,    36,    12,    13,    31,     6,
       7,     8,     9,    16,    20,    21,    13,    38,    24,    38,
      38,    30,    30,    20,    21,    11,    15,    24,    35,    25,
      26,    27,    28,    29,    30,     4,     8,    25,    26,    27,
      28,    29,    38,    39,    40,    41,    42,    35,    35,    30,
      38,    39,    40,    41,    42,    25,    26,    27,    28,    29,
       8,    37,    30,    33,    30,    30,    12,    34,    38,    39,
      40,    41,    42,    25,    26,    27,    28,    29,    30,    74,
      17,    25,    26,    27,    28,    29,    38,    39,    40,    41,
      42,    35,    94,    36,    38,    39,    40,    41,    42,    25,
      26,    27,    28,    29,   163,    78,    -1,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    42,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    25,    26,    27,    28,    29,    30,    25,    26,    27,
      28,    29,    -1,    -1,    38,    39,    40,    41,    42,    25,
      38,    39,    40,    41,    42,    25,    -1,    -1,    28,    29,
      -1,    -1,    38,    39,    40,    41,    42,    -1,    38,    39,
      40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    16,    23,    44,    45,    46,    65,     5,    17,
      18,    19,    47,    48,    69,    36,     0,    53,    54,    65,
      69,    17,    48,     8,    49,    50,    16,    66,    54,    65,
       8,    32,    34,    30,    31,    17,    67,    68,    69,     4,
      34,     3,    18,    19,    51,    52,    57,    50,    17,    68,
       8,    70,     6,     7,     8,     9,    13,    20,    21,    24,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      55,    56,    57,    33,    31,    35,     8,    30,    31,    34,
      34,    32,    38,    34,    34,    30,    30,     3,     8,    22,
      34,    62,     5,    72,    31,    35,     8,    52,    70,     8,
      62,    62,    62,    62,    62,    32,    34,    62,    25,    26,
      27,    28,    29,    30,    38,    39,    40,    41,    42,    37,
      56,    36,    32,    35,    35,    33,    30,    35,    35,    62,
      62,    63,    64,    35,    62,    62,    62,    62,    62,    38,
      62,    38,    62,    38,    62,    38,    16,    58,    62,    30,
      30,    38,    11,    15,    33,    35,    31,    35,    62,    62,
      62,    62,    17,    59,    60,    69,     4,    33,    62,    71,
      71,    62,    17,    60,     8,    61,    71,    35,    30,    10,
      12,    14,    30,    31,     5,    30,    71,    30,    30,     8,
      37,    12,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    46,    47,
      47,    48,    49,    49,    50,    50,    50,    51,    51,    51,
      52,    53,    53,    54,    55,    55,    55,    56,    57,    57,
      58,    58,    58,    59,    59,    60,    61,    61,    62,    62,
      63,    64,    64,    65,    65,    66,    66,    66,    67,    67,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    74,    75,    75,    76,
      77,    77,    78,    78,    79,    80,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     3,     2,     0,     2,
       1,     3,     3,     1,     1,     4,     4,     3,     1,     0,
       2,     2,     1,    11,     3,     1,     0,     2,     1,     1,
       3,     2,     0,     2,     1,     3,     3,     1,     4,     4,
       0,     3,     1,     7,     2,     3,     2,     0,     2,     1,
       3,     1,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     8,     5,     8,     5,
      10,     8,     4,     7,     2,     2,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     4,     3,     3,     4,     4,
       4,     4,     3
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
#line 38 "e1.y"
                                  {	printf("hi final");
					return;
						}
#line 1424 "y.tab.c"
    break;

  case 3: /* Program: GdeclBlock FdefBlock MainBlock  */
#line 41 "e1.y"
                                       {;}
#line 1430 "y.tab.c"
    break;

  case 4: /* Program: GdeclBlock MainBlock  */
#line 42 "e1.y"
                              {;}
#line 1436 "y.tab.c"
    break;

  case 5: /* Program: MainBlock  */
#line 43 "e1.y"
                   {;}
#line 1442 "y.tab.c"
    break;

  case 6: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 46 "e1.y"
                                    {initialize(fp,l);
					}
#line 1449 "y.tab.c"
    break;

  case 7: /* GdeclBlock: DECL ENDDECL  */
#line 48 "e1.y"
                              {;}
#line 1455 "y.tab.c"
    break;

  case 9: /* GdeclList: GdeclList GDecl  */
#line 51 "e1.y"
                            {;}
#line 1461 "y.tab.c"
    break;

  case 10: /* GdeclList: GDecl  */
#line 52 "e1.y"
                 {;}
#line 1467 "y.tab.c"
    break;

  case 11: /* GDecl: Type GidList ';'  */
#line 54 "e1.y"
                         {;}
#line 1473 "y.tab.c"
    break;

  case 12: /* GidList: GidList ',' Gid  */
#line 57 "e1.y"
                          {;}
#line 1479 "y.tab.c"
    break;

  case 13: /* GidList: Gid  */
#line 58 "e1.y"
             {;}
#line 1485 "y.tab.c"
    break;

  case 14: /* Gid: ID  */
#line 61 "e1.y"
                { 		if(Lookitup((yyvsp[0].string))==NULL)
  				GInstall((yyvsp[0].string),gtype, 1,NULL);
  				else{  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};}
#line 1496 "y.tab.c"
    break;

  case 15: /* Gid: ID '[' NUM ']'  */
#line 67 "e1.y"
                     {         if(Lookitup((yyvsp[-3].string))==NULL)
  				GInstall((yyvsp[-3].string),gtype, (yyvsp[-1].integer),NULL);
  				else{  					printf("%s",(yyvsp[-3].string));
  					yyerror("redecleration");
  					exit(1);
  				};
  				}
#line 1508 "y.tab.c"
    break;

  case 16: /* Gid: ID '(' ParamList ')'  */
#line 74 "e1.y"
                               {if(Lookitup((yyvsp[-3].string))==NULL)
  				GInstall((yyvsp[-3].string),gtype, 0,(yyvsp[-1].par));
  				else{  					printf("%s",(yyvsp[-3].string));
  					yyerror("redecleration");
  					exit(1);
  				};
  				}
#line 1520 "y.tab.c"
    break;

  case 17: /* ParamList: ParamList ',' Param  */
#line 82 "e1.y"
                               {(yyval.par)=addParam((yyvsp[-2].par),(yyvsp[0].par));}
#line 1526 "y.tab.c"
    break;

  case 18: /* ParamList: Param  */
#line 83 "e1.y"
                                {printf("not empty\n");(yyval.par)=(yyvsp[0].par);}
#line 1532 "y.tab.c"
    break;

  case 19: /* ParamList: %empty  */
#line 84 "e1.y"
                                {printf("empty\n");(yyval.par)=NULL;}
#line 1538 "y.tab.c"
    break;

  case 20: /* Param: Type2 ID  */
#line 86 "e1.y"
               {(yyval.par)=createParam((yyvsp[0].string),(yyvsp[-1].integer),1);}
#line 1544 "y.tab.c"
    break;

  case 21: /* FdefBlock: FdefBlock Fdef  */
#line 92 "e1.y"
                           {	
				//printree($2);
	  		showTable();
	  		flabell++;
	  		genCode((yyvsp[0].no),args,fp,l,flabell);
	  		//then destroy the Lsymboltable for that fuunction
			params=0;
	  		ClearLsymbol();}
#line 1557 "y.tab.c"
    break;

  case 22: /* FdefBlock: Fdef  */
#line 100 "e1.y"
                {	
			//generate code using Lsymbol table
			showTable();
	  		//printree($1);
	  		flabell++;
	  		genCode((yyvsp[0].no),args,fp,l,flabell);
	  		//then destroy the Lsymboltable for that fuunction
	  		params=0;
	  		ClearLsymbol();
	  			;}
#line 1572 "y.tab.c"
    break;

  case 23: /* Fdef: Type ID '(' ParamList2 ')' '{' LdeclBlock BEGINN Slist END '}'  */
#line 111 "e1.y"
                                                                  {	if(rettype!=(yyvsp[-10].integer)){
									yyerror("rettype error");
  									exit(1);		
										}
									typecheck((yyvsp[-10].integer), Lookitup((yyvsp[-9].string))->type, 'e');
									checkParams((yyvsp[-9].string),(yyvsp[-7].par));
									args=doBinding(params);
									(yyval.no)=(yyvsp[-2].no);}
#line 1585 "y.tab.c"
    break;

  case 24: /* ParamList2: ParamList2 ',' Param2  */
#line 120 "e1.y"
                                   {(yyval.par)=addParam((yyvsp[-2].par),(yyvsp[0].par));}
#line 1591 "y.tab.c"
    break;

  case 25: /* ParamList2: Param2  */
#line 121 "e1.y"
                                {(yyval.par)=(yyvsp[0].par);}
#line 1597 "y.tab.c"
    break;

  case 26: /* ParamList2: %empty  */
#line 122 "e1.y"
                                {(yyval.par)=NULL;}
#line 1603 "y.tab.c"
    break;

  case 27: /* Param2: Type2 ID  */
#line 124 "e1.y"
                {		if(Lookitup2((yyvsp[0].string))==NULL)
  				LInstall((yyvsp[0].string),(yyvsp[-1].integer));
  				else{
  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};
  				params++;
  				(yyval.par)=createParam((yyvsp[0].string),(yyvsp[-1].integer),1);}
#line 1617 "y.tab.c"
    break;

  case 28: /* Type2: INT  */
#line 134 "e1.y"
               {(yyval.integer)=1;}
#line 1623 "y.tab.c"
    break;

  case 29: /* Type2: STR  */
#line 135 "e1.y"
              {(yyval.integer)=3;}
#line 1629 "y.tab.c"
    break;

  case 30: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 143 "e1.y"
                                   {printf("hi3");}
#line 1635 "y.tab.c"
    break;

  case 31: /* LdeclBlock: DECL ENDDECL  */
#line 144 "e1.y"
                         {;}
#line 1641 "y.tab.c"
    break;

  case 33: /* LDecList: LDecList LDecl  */
#line 147 "e1.y"
                          {;}
#line 1647 "y.tab.c"
    break;

  case 34: /* LDecList: LDecl  */
#line 148 "e1.y"
                {;}
#line 1653 "y.tab.c"
    break;

  case 35: /* LDecl: Type IdList ';'  */
#line 150 "e1.y"
                        {;}
#line 1659 "y.tab.c"
    break;

  case 36: /* IdList: IdList ',' ID  */
#line 153 "e1.y"
                       {	if(Lookitup2((yyvsp[0].string))==NULL)
  				LInstall((yyvsp[0].string),gtype);
  				else{	  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};}
#line 1670 "y.tab.c"
    break;

  case 37: /* IdList: ID  */
#line 159 "e1.y"
           {			if(Lookitup2((yyvsp[0].string))==NULL)
  				LInstall((yyvsp[0].string),gtype);
  				else{  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				};;}
#line 1681 "y.tab.c"
    break;

  case 38: /* E: ID '(' Empty ')'  */
#line 168 "e1.y"
                            {printf("hii");(yyval.no)=getFunNode((yyvsp[-3].string),NULL);}
#line 1687 "y.tab.c"
    break;

  case 39: /* E: ID '(' ArgList ')'  */
#line 169 "e1.y"
                         {printf("enter\n");checkArgs((yyvsp[-3].string),(yyvsp[-1].al));(yyval.no)=getFunNode((yyvsp[-3].string),(yyvsp[-1].al));printf("exit\n");}
#line 1693 "y.tab.c"
    break;

  case 40: /* Empty: %empty  */
#line 171 "e1.y"
                        {;}
#line 1699 "y.tab.c"
    break;

  case 41: /* ArgList: ArgList ',' E  */
#line 173 "e1.y"
                        {(yyval.al)=getArgList1((yyvsp[-2].al),(yyvsp[0].no));}
#line 1705 "y.tab.c"
    break;

  case 42: /* ArgList: E  */
#line 174 "e1.y"
            {(yyval.al)=getArgList2((yyvsp[0].no));}
#line 1711 "y.tab.c"
    break;

  case 43: /* MainBlock: MAIN '{' Declarations BEGINN Slist END '}'  */
#line 176 "e1.y"
                                                      {   
			if(rettype!=1){
									yyerror("rettype error");
  									exit(1);		
										}
			args=doBinding(params);
			//printree($5);
	  		//showTable();
	  		//then destroy the Lsymboltable for that fuunction
	  		genCode((yyvsp[-2].no),args,fp,l,0);
	  		ClearLsymbol();
				//codegen($3,fp,l);
				printf("hi4");
				//exitt();
				return;
						}
#line 1732 "y.tab.c"
    break;

  case 44: /* MainBlock: BEGINN END  */
#line 192 "e1.y"
                        {	return;		}
#line 1738 "y.tab.c"
    break;

  case 45: /* Declarations: DECL DeclList ENDDECL  */
#line 194 "e1.y"
                                        {;}
#line 1744 "y.tab.c"
    break;

  case 46: /* Declarations: DECL ENDDECL  */
#line 195 "e1.y"
                                {;}
#line 1750 "y.tab.c"
    break;

  case 48: /* DeclList: DeclList Decl  */
#line 199 "e1.y"
                                {;}
#line 1756 "y.tab.c"
    break;

  case 49: /* DeclList: Decl  */
#line 200 "e1.y"
                                {;}
#line 1762 "y.tab.c"
    break;

  case 50: /* Decl: Type VarList ';'  */
#line 203 "e1.y"
                        {;}
#line 1768 "y.tab.c"
    break;

  case 51: /* Type: INT  */
#line 206 "e1.y"
              {(yyval.integer)=1;gtype=1;}
#line 1774 "y.tab.c"
    break;

  case 52: /* Type: STR  */
#line 207 "e1.y"
              {(yyval.integer)=3;gtype=3;}
#line 1780 "y.tab.c"
    break;

  case 53: /* VarList: VarList ',' VarList  */
#line 210 "e1.y"
                                {;}
#line 1786 "y.tab.c"
    break;

  case 54: /* VarList: ID  */
#line 211 "e1.y"
                  {		if(Lookitup2((yyvsp[0].string))==NULL)
  				LInstall((yyvsp[0].string),gtype);
  				else{  					printf("%s",(yyvsp[0].string));
  					yyerror("redecleration");
  					exit(1);
  				}
  				}
#line 1798 "y.tab.c"
    break;

  case 55: /* Slist: Slist Stmt  */
#line 220 "e1.y"
                          {(yyval.no)=getCNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1804 "y.tab.c"
    break;

  case 56: /* Slist: Stmt  */
#line 221 "e1.y"
                          {(yyval.no)=(yyvsp[0].no);}
#line 1810 "y.tab.c"
    break;

  case 57: /* Stmt: InputStmt  */
#line 223 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 1816 "y.tab.c"
    break;

  case 58: /* Stmt: OutputStmt  */
#line 224 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 1822 "y.tab.c"
    break;

  case 59: /* Stmt: AsgStmt  */
#line 225 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 1828 "y.tab.c"
    break;

  case 60: /* Stmt: IfStmt  */
#line 226 "e1.y"
                           {(yyval.no)=(yyvsp[0].no);}
#line 1834 "y.tab.c"
    break;

  case 61: /* Stmt: WhileStmt  */
#line 227 "e1.y"
                                {(yyval.no)=(yyvsp[0].no);}
#line 1840 "y.tab.c"
    break;

  case 62: /* Stmt: BrkStmt  */
#line 228 "e1.y"
                           {(yyval.no) = (yyvsp[0].no);}
#line 1846 "y.tab.c"
    break;

  case 63: /* Stmt: ContStmt  */
#line 229 "e1.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1852 "y.tab.c"
    break;

  case 64: /* Stmt: RetStmt  */
#line 230 "e1.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1858 "y.tab.c"
    break;

  case 65: /* RetStmt: RETURN E ';'  */
#line 232 "e1.y"
                        {rettype=(yyvsp[-1].no)->type;(yyval.no)=getRetNode((yyvsp[-1].no));}
#line 1864 "y.tab.c"
    break;

  case 66: /* WhileStmt: WHILE '(' E ')' DO Slist ENDWHILE ';'  */
#line 233 "e1.y"
                                                { typecheck((yyvsp[-5].no)->type, 2, 'i');
						  (yyval.no)=CreateTree(7,(yyvsp[-5].no),NULL,(yyvsp[-2].no));}
#line 1871 "y.tab.c"
    break;

  case 67: /* InputStmt: READ '(' ID ')' ';'  */
#line 236 "e1.y"
                                    {(yyval.no)=getrNode(getIdNode((yyvsp[-2].string),NULL));}
#line 1877 "y.tab.c"
    break;

  case 68: /* InputStmt: READ '(' ID '[' E ']' ')' ';'  */
#line 237 "e1.y"
                                                {	arraycheck((yyvsp[-5].string),(yyvsp[-3].no));
							(yyval.no)=getrNode(getIdNode((yyvsp[-5].string),(yyvsp[-3].no)));}
#line 1884 "y.tab.c"
    break;

  case 69: /* OutputStmt: WRITE '(' E ')' ';'  */
#line 240 "e1.y"
                                {//typecheck($3->type, 2, 'y'); 
							(yyval.no)=getwNode((yyvsp[-2].no));}
#line 1891 "y.tab.c"
    break;

  case 70: /* IfStmt: IF '(' E ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 243 "e1.y"
                                                      {typecheck((yyvsp[-7].no)->type, 2, 'i'); 
							(yyval.no)=CreateTree(6,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 1898 "y.tab.c"
    break;

  case 71: /* IfStmt: IF '(' E ')' THEN Slist ENDIF ';'  */
#line 245 "e1.y"
                                          {    typecheck((yyvsp[-5].no)->type, 2, 'i');
	   						printf("yac %d %d\n",(yyvsp[-5].no)->type,(yyvsp[-2].no)->nodetype);
	   					(yyval.no)=CreateTree(6,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 1906 "y.tab.c"
    break;

  case 72: /* AsgStmt: ID '=' E ';'  */
#line 251 "e1.y"
                               {	//printf("type is%d\n",$3->type);
					typecheck(getIdNode((yyvsp[-3].string),NULL)->type, (yyvsp[-1].no)->type, 'e');
					(yyval.no)=getOpNode(4,HI,getIdNode((yyvsp[-3].string),NULL),(yyvsp[-1].no));}
#line 1914 "y.tab.c"
    break;

  case 73: /* AsgStmt: ID '[' E ']' '=' E ';'  */
#line 254 "e1.y"
                                        {arraycheck((yyvsp[-6].string),(yyvsp[-4].no));
					(yyval.no)=getOpNode(4,HI,getIdNode((yyvsp[-6].string),(yyvsp[-4].no)),(yyvsp[-1].no));
		  							}
#line 1922 "y.tab.c"
    break;

  case 74: /* BrkStmt: BREAK ';'  */
#line 258 "e1.y"
                                    {(yyval.no) =CreateTree(8,NULL,NULL,NULL);}
#line 1928 "y.tab.c"
    break;

  case 75: /* ContStmt: CONTINUE ';'  */
#line 260 "e1.y"
                                        {(yyval.no) =CreateTree(9,NULL,NULL,NULL);}
#line 1934 "y.tab.c"
    break;

  case 76: /* E: E '+' E  */
#line 262 "e1.y"
                            {printf("hoho\n");typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(1,PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1941 "y.tab.c"
    break;

  case 77: /* E: E '-' E  */
#line 264 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(1,MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1948 "y.tab.c"
    break;

  case 78: /* E: E '*' E  */
#line 266 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(1,MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1955 "y.tab.c"
    break;

  case 79: /* E: E '/' E  */
#line 268 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(1,DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1962 "y.tab.c"
    break;

  case 80: /* E: E '%' E  */
#line 270 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(1,MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1969 "y.tab.c"
    break;

  case 81: /* E: '(' E ')'  */
#line 272 "e1.y"
                            {(yyval.no)=(yyvsp[-1].no);	}
#line 1975 "y.tab.c"
    break;

  case 82: /* E: NUM  */
#line 273 "e1.y"
                            {(yyval.no)=getNumNode((yyvsp[0].integer));}
#line 1981 "y.tab.c"
    break;

  case 83: /* E: ID  */
#line 274 "e1.y"
                            {(yyval.no)=getIdNode((yyvsp[0].string),NULL);}
#line 1987 "y.tab.c"
    break;

  case 84: /* E: STRING  */
#line 275 "e1.y"
                            {(yyval.no)=getStringNode((yyvsp[0].string)); }
#line 1993 "y.tab.c"
    break;

  case 85: /* E: ID '[' E ']'  */
#line 276 "e1.y"
                                {arraycheck((yyvsp[-3].string),(yyvsp[-1].no));(yyval.no)=getIdNode((yyvsp[-3].string),(yyvsp[-1].no));}
#line 1999 "y.tab.c"
    break;

  case 86: /* E: E '>' E  */
#line 277 "e1.y"
                             {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2006 "y.tab.c"
    break;

  case 87: /* E: E '<' E  */
#line 279 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2013 "y.tab.c"
    break;

  case 88: /* E: E '=' '=' E  */
#line 281 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,EQ,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2020 "y.tab.c"
    break;

  case 89: /* E: E '<' '=' E  */
#line 283 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,LTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2027 "y.tab.c"
    break;

  case 90: /* E: E '>' '=' E  */
#line 285 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,GTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2034 "y.tab.c"
    break;

  case 91: /* E: E '!' '=' E  */
#line 287 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,NE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 2041 "y.tab.c"
    break;

  case 92: /* E: E AND E  */
#line 289 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'b'); //AND HAS b
				(yyval.no)=getOpNode(2,12,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2048 "y.tab.c"
    break;


#line 2052 "y.tab.c"

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

#line 293 "e1.y"


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
    
  yyparse();
  return 1;
}     
