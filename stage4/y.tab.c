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
	#include "e1.h"
	int yylex(void);
	FILE *fp;
	extern FILE *yyin;
	int l[20];
	int gtype;


#line 85 "y.tab.c"

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
    STRING = 277                   /* STRING  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "e1.y"

	char character;
	struct tNode *no;
	int integer;        //1 INT 2 STR
	char *string;
	

#line 190 "y.tab.c"

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
  YYSYMBOL_23_ = 23,                       /* '-'  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '*'  */
  YYSYMBOL_26_ = 26,                       /* '/'  */
  YYSYMBOL_27_ = 27,                       /* ';'  */
  YYSYMBOL_28_ = 28,                       /* ','  */
  YYSYMBOL_29_ = 29,                       /* '['  */
  YYSYMBOL_30_ = 30,                       /* ']'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '='  */
  YYSYMBOL_34_ = 34,                       /* '%'  */
  YYSYMBOL_35_ = 35,                       /* '>'  */
  YYSYMBOL_36_ = 36,                       /* '<'  */
  YYSYMBOL_37_ = 37,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_program = 39,                   /* program  */
  YYSYMBOL_Declarations = 40,              /* Declarations  */
  YYSYMBOL_DeclList = 41,                  /* DeclList  */
  YYSYMBOL_Decl = 42,                      /* Decl  */
  YYSYMBOL_Type = 43,                      /* Type  */
  YYSYMBOL_VarList = 44,                   /* VarList  */
  YYSYMBOL_Slist = 45,                     /* Slist  */
  YYSYMBOL_Stmt = 46,                      /* Stmt  */
  YYSYMBOL_WhileStmt = 47,                 /* WhileStmt  */
  YYSYMBOL_InputStmt = 48,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 49,                /* OutputStmt  */
  YYSYMBOL_IfStmt = 50,                    /* IfStmt  */
  YYSYMBOL_AsgStmt = 51,                   /* AsgStmt  */
  YYSYMBOL_BrkStmt = 52,                   /* BrkStmt  */
  YYSYMBOL_ContStmt = 53,                  /* ContStmt  */
  YYSYMBOL_E = 54                          /* E  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


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
       2,     2,     2,    37,     2,     2,     2,    34,     2,     2,
      31,    32,    25,    24,    28,    23,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    27,
      36,    33,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    29,     2,    30,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    44,    46,    47,    50,    51,    54,    57,
      58,    61,    62,    69,    79,    80,    82,    83,    84,    85,
      86,    87,    88,    91,    94,    95,    98,   101,   103,   108,
     111,   116,   118,   120,   122,   124,   126,   128,   130,   131,
     132,   133,   134,   135,   137,   139,   141,   143,   145
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
  "STRING", "'-'", "'+'", "'*'", "'/'", "';'", "','", "'['", "']'", "'('",
  "')'", "'='", "'%'", "'>'", "'<'", "'!'", "$accept", "program",
  "Declarations", "DeclList", "Decl", "Type", "VarList", "Slist", "Stmt",
  "WhileStmt", "InputStmt", "OutputStmt", "IfStmt", "AsgStmt", "BrkStmt",
  "ContStmt", "E", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,     1,     5,   -58,    70,    97,   -58,   -58,   -58,   -58,
     114,   -58,    13,    -4,     9,    16,    20,    22,    28,    30,
       2,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,    36,    19,    69,    17,    17,    17,    17,    17,   -58,
     -58,   -58,   -58,    79,   -58,    13,    44,   -58,    61,   -58,
      17,    89,   104,   119,   125,   140,    68,    71,    17,    75,
      17,   155,    17,    17,    17,    17,    80,    78,    17,    10,
      11,    83,    86,   -58,   109,   120,   -58,   170,   -58,   185,
     -58,   218,   218,    35,    35,   -58,    17,   205,    17,   205,
      17,   205,    17,    17,    97,    97,   115,   -58,   205,   205,
     205,   205,   200,    54,    72,   141,   -58,    97,   142,   143,
     -58,    88,   -58,   -58,   144,   -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     0,     0,     1,     5,     9,    10,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    20,    16,    17,    19,    18,    21,    22,     4,
       6,    12,     0,     0,     0,     0,     0,     0,     0,    32,
      31,     2,    14,     0,     8,     0,     0,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    13,     0,    24,     0,
      38,    34,    33,    35,    36,    26,     0,    37,     0,    43,
       0,    44,     0,     0,     0,     0,     0,    42,    45,    47,
      46,    48,     0,     0,     0,     0,    30,     0,     0,     0,
      25,     0,    28,    23,     0,    27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,   -58,   -58,   126,   -58,   122,   -57,   -20,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     5,    10,    11,    12,    32,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    52,    53,    54,    55,     6,     3,    41,    13,    14,
      15,    16,     1,    47,    47,    17,    61,     4,    48,    48,
      47,    31,    18,    19,    77,    48,    79,    33,    81,    82,
      83,    84,    49,    49,    87,    89,    91,   103,   104,    49,
      34,    50,    50,    88,    90,    35,    44,    45,    50,    36,
     111,    37,    98,    38,    99,    39,   100,    40,   101,   102,
      13,    14,    15,    16,   107,    43,   108,    17,    67,    68,
      69,    70,    71,    58,    18,    19,    59,    46,    13,    14,
      15,    16,    56,    42,    42,    17,   109,     7,     8,     9,
      60,    42,    18,    19,    13,    14,    15,    16,    76,    45,
     114,    17,    78,    13,    14,    15,    16,    85,    18,    19,
      17,    86,    62,    63,    64,    65,    92,    18,    19,    93,
      94,    66,    67,    68,    69,    70,    71,    62,    63,    64,
      65,    29,     8,     9,    72,    95,    30,    67,    68,    69,
      70,    71,    62,    63,    64,    65,    73,   105,    62,    63,
      64,    65,    67,    68,    69,    70,    71,    74,    67,    68,
      69,    70,    71,    62,    63,    64,    65,    57,   110,   112,
     113,   115,    75,    67,    68,    69,    70,    71,    62,    63,
      64,    65,     0,     0,     0,     0,     0,    80,    67,    68,
      69,    70,    71,    62,    63,    64,    65,     0,     0,     0,
      96,     0,     0,    67,    68,    69,    70,    71,    62,    63,
      64,    65,     0,     0,     0,    97,     0,     0,    67,    68,
      69,    70,    71,    62,    63,    64,    65,   106,    62,    63,
      64,    65,     0,    67,    68,    69,    70,    71,    67,    68,
      69,    70,    71,    64,    65,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71
};

static const yytype_int8 yycheck[] =
{
      20,    35,    36,    37,    38,     0,     5,     5,     6,     7,
       8,     9,     4,     3,     3,    13,    50,    16,     8,     8,
       3,     8,    20,    21,    58,     8,    60,    31,    62,    63,
      64,    65,    22,    22,    68,    69,    70,    94,    95,    22,
      31,    31,    31,    33,    33,    29,    27,    28,    31,    33,
     107,    31,    86,    31,    88,    27,    90,    27,    92,    93,
       6,     7,     8,     9,    10,    29,    12,    13,    33,    34,
      35,    36,    37,    29,    20,    21,    32,     8,     6,     7,
       8,     9,     3,   103,   104,    13,    14,    17,    18,    19,
      29,   111,    20,    21,     6,     7,     8,     9,    30,    28,
      12,    13,    27,     6,     7,     8,     9,    27,    20,    21,
      13,    33,    23,    24,    25,    26,    33,    20,    21,    33,
      11,    32,    33,    34,    35,    36,    37,    23,    24,    25,
      26,    17,    18,    19,    30,    15,    10,    33,    34,    35,
      36,    37,    23,    24,    25,    26,    27,    32,    23,    24,
      25,    26,    33,    34,    35,    36,    37,    32,    33,    34,
      35,    36,    37,    23,    24,    25,    26,    45,    27,    27,
      27,    27,    32,    33,    34,    35,    36,    37,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    37,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,
      35,    36,    37,    23,    24,    25,    26,    27,    23,    24,
      25,    26,    -1,    33,    34,    35,    36,    37,    33,    34,
      35,    36,    37,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    39,     5,    16,    40,     0,    17,    18,    19,
      41,    42,    43,     6,     7,     8,     9,    13,    20,    21,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    17,
      42,     8,    44,    31,    31,    29,    33,    31,    31,    27,
      27,     5,    46,    29,    27,    28,     8,     3,     8,    22,
      31,    54,    54,    54,    54,    54,     3,    44,    29,    32,
      29,    54,    23,    24,    25,    26,    32,    33,    34,    35,
      36,    37,    30,    27,    32,    32,    30,    54,    27,    54,
      32,    54,    54,    54,    54,    27,    33,    54,    33,    54,
      33,    54,    33,    33,    11,    15,    30,    30,    54,    54,
      54,    54,    54,    45,    45,    32,    27,    10,    12,    14,
      27,    45,    27,    27,    12,    27
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    40,    40,    41,    41,    42,    43,
      43,    44,    44,    44,    45,    45,    46,    46,    46,    46,
      46,    46,    46,    47,    48,    48,    49,    50,    50,    51,
      51,    52,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     3,     2,     2,     1,     3,     1,
       1,     3,     1,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     5,     8,     5,    10,     8,     4,
       7,     2,     2,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     4,     3,     3,     4,     4,     4,     4
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
  case 2: /* program: BEGINN Declarations Slist END  */
#line 33 "e1.y"
                                       {   // printf("yo\n");
				
				initialize(fp,l);
				printf("start print\n");
				//printree($3);
				//printf("end print");
				//evaltree($2,l);
				codegen((yyvsp[-1].no),fp,l);
				
				exitt();
				return;		}
#line 1324 "y.tab.c"
    break;

  case 3: /* program: BEGINN END  */
#line 44 "e1.y"
                        {	return;		}
#line 1330 "y.tab.c"
    break;

  case 4: /* Declarations: DECL DeclList ENDDECL  */
#line 46 "e1.y"
                                        {;}
#line 1336 "y.tab.c"
    break;

  case 5: /* Declarations: DECL ENDDECL  */
#line 47 "e1.y"
                                {;}
#line 1342 "y.tab.c"
    break;

  case 6: /* DeclList: DeclList Decl  */
#line 50 "e1.y"
                                {;}
#line 1348 "y.tab.c"
    break;

  case 7: /* DeclList: Decl  */
#line 51 "e1.y"
                                {;}
#line 1354 "y.tab.c"
    break;

  case 8: /* Decl: Type VarList ';'  */
#line 54 "e1.y"
                        {;}
#line 1360 "y.tab.c"
    break;

  case 9: /* Type: INT  */
#line 57 "e1.y"
              {(yyval.integer)=1;gtype=1;}
#line 1366 "y.tab.c"
    break;

  case 10: /* Type: STR  */
#line 58 "e1.y"
              {(yyval.integer)=2;gtype=3;}
#line 1372 "y.tab.c"
    break;

  case 11: /* VarList: VarList ',' VarList  */
#line 61 "e1.y"
                                {;}
#line 1378 "y.tab.c"
    break;

  case 12: /* VarList: ID  */
#line 62 "e1.y"
                  {	;if(Lookitup((yyvsp[0].string))==NULL)
  				Install((yyvsp[0].string),gtype, 1);
  				else{
  					yyerror("redecleration");
  					exit(1);
  				}
  				}
#line 1390 "y.tab.c"
    break;

  case 13: /* VarList: ID '[' NUM ']'  */
#line 69 "e1.y"
                        {if(Lookitup((yyvsp[-3].string))==NULL)
  				Install((yyvsp[-3].string),gtype, (yyvsp[-1].integer));
  				else{
  					yyerror("redecleration");
  					exit(1);
  				}

	  			}
#line 1403 "y.tab.c"
    break;

  case 14: /* Slist: Slist Stmt  */
#line 79 "e1.y"
                          {(yyval.no)=getCNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1409 "y.tab.c"
    break;

  case 15: /* Slist: Stmt  */
#line 80 "e1.y"
                          {(yyval.no)=(yyvsp[0].no);}
#line 1415 "y.tab.c"
    break;

  case 16: /* Stmt: InputStmt  */
#line 82 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 1421 "y.tab.c"
    break;

  case 17: /* Stmt: OutputStmt  */
#line 83 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 1427 "y.tab.c"
    break;

  case 18: /* Stmt: AsgStmt  */
#line 84 "e1.y"
                         {(yyval.no)=(yyvsp[0].no);		}
#line 1433 "y.tab.c"
    break;

  case 19: /* Stmt: IfStmt  */
#line 85 "e1.y"
                           {(yyval.no)=(yyvsp[0].no);}
#line 1439 "y.tab.c"
    break;

  case 20: /* Stmt: WhileStmt  */
#line 86 "e1.y"
                                {(yyval.no)=(yyvsp[0].no);}
#line 1445 "y.tab.c"
    break;

  case 21: /* Stmt: BrkStmt  */
#line 87 "e1.y"
                           {(yyval.no) = (yyvsp[0].no);}
#line 1451 "y.tab.c"
    break;

  case 22: /* Stmt: ContStmt  */
#line 88 "e1.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1457 "y.tab.c"
    break;

  case 23: /* WhileStmt: WHILE '(' E ')' DO Slist ENDWHILE ';'  */
#line 91 "e1.y"
                                                { typecheck((yyvsp[-5].no)->type, 2, 'i');
						  (yyval.no)=CreateTree(7,(yyvsp[-5].no),NULL,(yyvsp[-2].no));}
#line 1464 "y.tab.c"
    break;

  case 24: /* InputStmt: READ '(' ID ')' ';'  */
#line 94 "e1.y"
                                    {(yyval.no)=getrNode(getIdNode((yyvsp[-2].string),NULL));}
#line 1470 "y.tab.c"
    break;

  case 25: /* InputStmt: READ '(' ID '[' E ']' ')' ';'  */
#line 95 "e1.y"
                                                {	arraycheck((yyvsp[-5].string),(yyvsp[-3].no));
							(yyval.no)=getrNode(getIdNode((yyvsp[-5].string),(yyvsp[-3].no)));}
#line 1477 "y.tab.c"
    break;

  case 26: /* OutputStmt: WRITE '(' E ')' ';'  */
#line 98 "e1.y"
                                {typecheck((yyvsp[-2].no)->type, 2, 'y'); 
							(yyval.no)=getwNode((yyvsp[-2].no));}
#line 1484 "y.tab.c"
    break;

  case 27: /* IfStmt: IF '(' E ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 101 "e1.y"
                                                      {typecheck((yyvsp[-7].no)->type, 2, 'i'); 
							(yyval.no)=CreateTree(6,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 1491 "y.tab.c"
    break;

  case 28: /* IfStmt: IF '(' E ')' THEN Slist ENDIF ';'  */
#line 103 "e1.y"
                                          {    typecheck((yyvsp[-5].no)->type, 2, 'i');
	   					(yyval.no)=CreateTree(6,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 1498 "y.tab.c"
    break;

  case 29: /* AsgStmt: ID '=' E ';'  */
#line 108 "e1.y"
                               {	//printf("type is%d\n",$3->type);
					typecheck(getIdNode((yyvsp[-3].string),NULL)->type, (yyvsp[-1].no)->type, 'e');
					(yyval.no)=getOpNode(4,HI,getIdNode((yyvsp[-3].string),NULL),(yyvsp[-1].no));}
#line 1506 "y.tab.c"
    break;

  case 30: /* AsgStmt: ID '[' E ']' '=' E ';'  */
#line 111 "e1.y"
                                        {arraycheck((yyvsp[-6].string),(yyvsp[-4].no));
					 typecheck(getIdNode((yyvsp[-6].string),NULL)->type, (yyvsp[-1].no)->type, 'e');
					(yyval.no)=getOpNode(4,HI,getIdNode((yyvsp[-6].string),(yyvsp[-4].no)),(yyvsp[-1].no));
		  							}
#line 1515 "y.tab.c"
    break;

  case 31: /* BrkStmt: BREAK ';'  */
#line 116 "e1.y"
                                    {(yyval.no) =CreateTree(8,NULL,NULL,NULL);}
#line 1521 "y.tab.c"
    break;

  case 32: /* ContStmt: CONTINUE ';'  */
#line 118 "e1.y"
                                        {(yyval.no) =CreateTree(9,NULL,NULL,NULL);}
#line 1527 "y.tab.c"
    break;

  case 33: /* E: E '+' E  */
#line 120 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(1,PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1534 "y.tab.c"
    break;

  case 34: /* E: E '-' E  */
#line 122 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(1,MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1541 "y.tab.c"
    break;

  case 35: /* E: E '*' E  */
#line 124 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(1,MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1548 "y.tab.c"
    break;

  case 36: /* E: E '/' E  */
#line 126 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');
				(yyval.no)=getOpNode(1,DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1555 "y.tab.c"
    break;

  case 37: /* E: E '%' E  */
#line 128 "e1.y"
                            { typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'a');printf("himod\n");
				(yyval.no)=getOpNode(1,MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1562 "y.tab.c"
    break;

  case 38: /* E: '(' E ')'  */
#line 130 "e1.y"
                            {(yyval.no)=(yyvsp[-1].no);	}
#line 1568 "y.tab.c"
    break;

  case 39: /* E: NUM  */
#line 131 "e1.y"
                            {(yyval.no)=getNumNode((yyvsp[0].integer));}
#line 1574 "y.tab.c"
    break;

  case 40: /* E: ID  */
#line 132 "e1.y"
                            {(yyval.no)=getIdNode((yyvsp[0].string),NULL);}
#line 1580 "y.tab.c"
    break;

  case 41: /* E: STRING  */
#line 133 "e1.y"
                            {(yyval.no)=getStringNode((yyvsp[0].string)); }
#line 1586 "y.tab.c"
    break;

  case 42: /* E: ID '[' E ']'  */
#line 134 "e1.y"
                                {arraycheck((yyvsp[-3].string),(yyvsp[-1].no));(yyval.no)=getIdNode((yyvsp[-3].string),(yyvsp[-1].no));}
#line 1592 "y.tab.c"
    break;

  case 43: /* E: E '>' E  */
#line 135 "e1.y"
                             {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1599 "y.tab.c"
    break;

  case 44: /* E: E '<' E  */
#line 137 "e1.y"
                            {typecheck((yyvsp[-2].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1606 "y.tab.c"
    break;

  case 45: /* E: E '=' '=' E  */
#line 139 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,EQ,(yyvsp[-3].no),(yyvsp[0].no));}
#line 1613 "y.tab.c"
    break;

  case 46: /* E: E '<' '=' E  */
#line 141 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,LTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 1620 "y.tab.c"
    break;

  case 47: /* E: E '>' '=' E  */
#line 143 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,GTE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 1627 "y.tab.c"
    break;

  case 48: /* E: E '!' '=' E  */
#line 145 "e1.y"
                            {typecheck((yyvsp[-3].no)->type, (yyvsp[0].no)->type, 'r');
				(yyval.no)=getOpNode(2,NE,(yyvsp[-3].no),(yyvsp[0].no));}
#line 1634 "y.tab.c"
    break;


#line 1638 "y.tab.c"

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

#line 149 "e1.y"

void exitt(){
	fprintf(fp,"MOV R0,\"Exit\"\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"CALL 0\n");
	
}
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

    // Check if the file is opened successfully
    if (fp == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1;  // Exit the program with an error code
    }

    // Use fprintf to write to the file
    
  yyparse();
  return 1;
}     
