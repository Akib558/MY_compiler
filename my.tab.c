/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "my.y"

    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<math.h>

    int storage[100];
    int s_val = -1;
    int s_def = 0;
    int s_main_val = -1000000;
    float fl_val[10000000];
    int str_val[10000000];
    int chk_type[10000000];
    char get_str[100000][200];
    int set_arr[100][1000];
    int chk_arr[10000000];
    int sz_arr[1000];
    int arr_index = 1;
    int s_cnt = 0;



    int for_loop = 0;
    int while_loop = 0;
    int print = 0;
    int expression = 0;
    int var = 0;



    #define sh if(0)
    #define sh2 if(0)
    #define PI 3.14159265

    int yylex (void);



    int gcd(int n1, int n2) 
    {
        if (n2 != 0)
            return gcd(n2, n1 % n2);
        else
            return n1;
    }


    int lcm(int n1, int n2)
    {
        return (n1*n2)/gcd(n1,n2);
    }




    int get_val(char *name)
    {
        int val,len,i;
        val = 0;
        len = strlen(name);
        int p;
        p = 1;
        for(i = 0; i <len; i++)
        {
            if (name[i] == '1' || name[i] == '2' || name[i] == '3'\
             || name[i] == '4' || name[i] == '5' || name[i] == '6'\
             || name[i] == '7' || name[i] == '8' || name[i] == '9'\
             || name[i] == '0')
             {
                val += (name[i]-'0');
             } 
             else{
                val += (name[i]-'a'+1)*p;
                p *= 26;
             }
            
        }
        return val;
    }




    struct nod {
        int arr[1000];
    } kk;

    

#line 160 "my.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MY_TAB_H_INCLUDED
# define YY_YY_MY_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 91 "my.y"

    struct node {
        int arr[1000];
    } ;

#line 209 "my.tab.c"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ML_COMM = 258,
    ARR_VAL = 259,
    TAKEIN = 260,
    GCD = 261,
    LCM = 262,
    MAX = 263,
    MIN = 264,
    CS = 265,
    COMM = 266,
    SIN = 267,
    COS = 268,
    TAN = 269,
    ELSEIF = 270,
    myst = 271,
    INT = 272,
    CHAR = 273,
    FLOAT = 274,
    VAR = 275,
    WHILE = 276,
    NUM = 277,
    BS = 278,
    BE = 279,
    fr = 280,
    in = 281,
    range = 282,
    IF = 283,
    ELSE = 284,
    SWITCH = 285,
    CASE = 286,
    DEAF = 287,
    BREAK = 288,
    VAR_ch = 289,
    VAR_fl = 290,
    PRINT = 291,
    POWER = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 98 "my.y"

    char *ch;
    int IN;  
    float fl;
    struct node st;

#line 265 "my.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MY_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   822

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

#define YYUNDEFTOK  2
#define YYMAXUTOK   292


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    54,    44,     2,
      48,    49,    40,    38,    51,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    46,
      42,    47,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    45,     2,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   119,   119,   121,   122,   127,   128,   130,   132,   134,
     139,   143,   147,   151,   207,   259,   266,   278,   288,   290,
     292,   294,   309,   323,   337,   339,   341,   345,   358,   403,
     408,   417,   418,   421,   422,   425,   436,   446,   449,   451,
     472,   491,   510,   529,   548,   569,   591,   601,   611,   621,
     631,   642,   651,   667,   687,   699,   711,   712,   713,   715,
     716,   717,   722,   723,   724,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   752,   753,
     784,   805,   810,   828,   829,   832,   833,   836,   837,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,   851,
     852,   853,   854,   855
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ML_COMM", "ARR_VAL", "TAKEIN", "GCD",
  "LCM", "MAX", "MIN", "CS", "COMM", "SIN", "COS", "TAN", "ELSEIF", "myst",
  "INT", "CHAR", "FLOAT", "VAR", "WHILE", "NUM", "BS", "BE", "fr", "in",
  "range", "IF", "ELSE", "SWITCH", "CASE", "DEAF", "BREAK", "VAR_ch",
  "VAR_fl", "PRINT", "POWER", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'",
  "'&'", "'|'", "';'", "'='", "'('", "')'", "':'", "','", "'['", "']'",
  "'%'", "$accept", "main", "myprogram", "statement", "arr2", "arr", "fun",
  "switch1", "block", "caselist", "caseitem", "deaf", "s_id", "LOOP",
  "ifelse", "declaration", "declaration1", "declaration2", "condition1",
  "expression", "expression2", "VAR1", "VARR1", "VARR2", "condition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    43,    45,
      42,    47,    60,    62,    38,   124,    59,    61,    40,    41,
      58,    44,    91,    93,    37
};
# endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -144,     3,   212,  -144,  -144,   -36,    -8,    -1,    25,    31,
    -144,  -144,    32,    47,    49,    52,    79,    81,    97,   155,
      70,  -144,    94,    84,    85,  -144,    91,    93,  -144,   656,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,    99,   101,   105,
      36,    82,   656,   656,   656,   656,   656,   656,   656,  -144,
    -144,   104,  -144,   106,  -144,   112,   118,   119,  -144,   564,
     142,   144,   150,   675,   163,   166,   656,   138,   -16,  -144,
    -144,  -144,   656,   656,   656,   656,  -144,   656,  -144,    83,
      89,   513,   690,    53,   694,   698,   176,   180,   183,   158,
     160,   715,  -144,   720,   161,     0,    16,   164,   675,   -13,
     -34,   428,  -144,   178,   186,   732,   187,  -144,   -12,   -12,
     157,   157,   521,   656,   656,   656,   656,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,   189,   191,   -21,
     -20,   216,   673,   384,   675,   675,   218,   582,   601,   656,
     656,   619,   638,   675,   675,   192,   227,   210,   656,    21,
     738,   750,   756,   762,    48,   221,   230,   258,   233,   261,
     -10,  -144,   107,   107,   212,   656,   521,   656,   521,   521,
     521,   675,   238,   675,   238,   238,   238,   675,   263,  -144,
     768,  -144,  -144,  -144,  -144,  -144,  -144,   521,  -144,   277,
     266,   301,   274,   303,   305,   314,   521,   521,   428,   428,
     428,   307,   320,   327,   263,   321,   256,   345,   300,   347,
     344,    15,    20,   323,  -144,   335,  -144,  -144,  -144,   205,
     362,   388,   207,   364,   432,   249,   365,   348,   381,   363,
     389,   162,   212,   390,  -144,   251,   391,   393,  -144,   293,
     395,   396,  -144,   476,   372,   675,   212,   212,   376,   386,
    -144,   406,  -144,  -144,   423,  -144,  -144,   295,   431,   433,
     333,   434,   426,   430,   441,  -144,  -144,   437,  -144,   520,
     442,  -144,   418,   420,   445,  -144,   337,   452,   212,   424,
    -144,  -144,   475,  -144,   478,  -144,  -144,   471,   480,   212,
     481,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,     8,     0,     0,     0,     0,     0,
       6,     7,     0,     0,     0,     0,     0,     0,     0,    64,
       0,    63,     0,     0,     0,    62,     0,     0,     5,     0,
       4,    26,    25,    24,    20,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      84,    56,    86,    57,    88,    58,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,    10,
      11,    12,     0,     0,     0,     0,    15,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    81,     0,     0,     0,     0,     0,     0,     0,
     103,    61,    38,     0,     0,     0,     0,    78,    65,    66,
      67,    68,    69,     0,     0,     0,     0,    70,    71,    72,
      83,    85,    87,    22,    23,    16,    17,    79,     0,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    59,    60,     0,     0,    99,     0,    97,   101,
     102,     0,    93,     0,    91,    95,    96,     0,     0,    21,
       0,    79,    75,    76,    73,    74,    28,    27,    80,     0,
       0,     0,     0,     0,     0,     0,   100,    98,    94,    92,
      90,     0,     0,    31,    33,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    30,     0,    32,    34,    29,    64,
       0,     0,    64,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    64,     0,     0,    47,    64,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
      39,     0,    48,    40,     0,    49,    45,    64,     0,     0,
       0,     0,     0,     0,     0,    41,    42,     0,    51,     0,
       0,    54,     0,     0,     0,    44,    64,     0,     0,     0,
      36,    37,     0,    50,     0,    35,    43,     0,     0,     0,
       0,    53
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -143,  -144,  -144,  -144,  -144,  -144,   304,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   262,   -29,
    -144,  -144,  -144,  -144,    18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    30,    31,    32,    33,    34,   202,   203,
     204,   216,   103,    35,    36,    37,    38,    39,    99,    40,
      94,    51,    53,    55,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,   156,   158,     3,    72,    73,    74,    75,   137,   138,
     139,   140,    41,    79,    80,    81,    82,    83,    84,    85,
      77,   195,    72,    73,    74,    75,   157,   159,    74,    75,
      93,   134,   135,   107,   100,   229,   136,   105,    77,   193,
      42,   194,    77,   108,   109,   110,   111,    43,   112,   230,
     127,   128,   186,     5,     6,     7,     8,     9,   129,   130,
      12,    13,    14,   220,   227,   223,   228,   226,    67,   132,
      21,   181,   128,    44,    72,    73,    74,    75,   236,    45,
      46,   240,    76,    25,   150,   151,   152,   153,   248,   249,
      77,    72,    73,    74,    75,    47,    29,    48,    49,    50,
     258,    52,   117,   261,   262,   100,   100,    77,   166,   168,
     169,   170,   100,   100,   100,   100,   133,    54,    61,   180,
      62,    72,    73,    74,    75,   187,   277,    72,    73,    74,
      75,    78,    63,    64,   113,   284,   196,    77,   197,    65,
     114,    66,   100,    77,   100,    69,   290,    70,   100,   141,
     142,    71,   162,   163,   145,    86,    89,    87,    90,   172,
     174,   175,   176,    88,    95,     4,    96,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    97,    15,    16,
      17,    18,    19,    20,    21,   102,   104,    22,   106,   198,
      23,   199,    24,    56,    57,   200,   120,    25,    26,    27,
     121,    58,    59,   122,   123,    60,   124,   126,    28,   149,
      29,    77,   131,   155,   247,     4,   100,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   146,    15,    16,
      17,    18,    19,    20,    21,   147,   154,    22,   160,   177,
      23,   164,    24,    56,    57,    56,    57,    25,    26,    27,
     178,   233,    59,   237,    59,    60,   179,    60,    28,     4,
      29,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   188,    15,    16,    17,    18,   219,    20,    21,   189,
     190,    22,   191,   192,    23,   145,    24,    56,    57,    56,
      57,    25,    26,    27,   201,   241,    59,   251,    59,    60,
     206,    60,    28,     4,    29,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   207,    15,    16,    17,    18,
     222,    20,    21,   209,   208,    22,   210,   211,    23,   213,
      24,    56,    57,    56,    57,    25,    26,    27,   212,   254,
      59,   267,    59,    60,   214,    60,    28,     4,    29,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   215,
      15,    16,    17,    18,   225,    20,    21,   218,   221,    22,
     224,   243,    23,   231,    24,    56,    57,   134,   135,    25,
      26,    27,   270,   282,    59,   232,   234,    60,   238,   242,
      28,     4,    29,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   244,    15,    16,    17,    18,   235,    20,
      21,   245,   246,    22,   250,   252,    23,   253,    24,   255,
     256,   259,   263,    25,    26,    27,   141,   142,   143,   144,
     265,   145,   264,   161,    28,     4,    29,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   266,    15,    16,
      17,    18,   239,    20,    21,   268,   269,    22,   271,   272,
      23,   275,    24,   273,   279,   278,   280,    25,    26,    27,
     141,   142,   143,   144,   274,   145,   283,   285,    28,     4,
      29,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   281,    15,    16,    17,    18,   257,    20,    21,   286,
     288,    22,   287,   289,    23,   291,    24,   260,   217,     0,
       0,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     4,    29,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,    15,    16,    17,    18,
     276,    20,    21,     0,     0,    22,     0,     0,    23,     0,
      24,    72,    73,    74,    75,    25,    26,    27,     0,    72,
      73,    74,    75,     0,   115,     0,    28,    77,    29,     5,
       6,     7,     8,     9,     0,    77,    12,    13,    14,     0,
       0,     0,     0,     0,    91,     0,    21,     5,     6,     7,
       8,     9,     0,     0,    12,    13,    14,     0,    92,    25,
       0,     0,    67,     0,    21,     0,     5,     6,     7,     8,
       9,     0,    29,    12,    13,    14,     0,    25,     0,     0,
       0,    67,     0,    21,     5,     6,     7,     8,     9,   165,
      29,    12,    13,    14,     0,     0,    25,     0,     0,    67,
       0,    21,     0,     5,     6,     7,     8,     9,   167,    29,
      12,    13,    14,     0,    25,     0,     0,     0,    67,     0,
      21,     5,     6,     7,     8,     9,   171,    98,    12,    13,
      14,     0,     0,    25,     0,     0,    67,     0,    21,     0,
       5,     6,     7,     8,     9,   173,    98,    12,    13,    14,
       0,    25,     0,     0,     0,    67,     0,    21,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
      25,    72,    73,    74,    75,   137,   138,   139,   140,     0,
       0,     0,   107,    98,     0,     0,     0,    77,    72,    73,
      74,    75,    72,    73,    74,    75,    72,    73,    74,    75,
       0,   116,     0,   118,    77,     0,     0,   119,    77,     0,
       0,     0,    77,   -64,   -64,   -64,   -64,     0,    72,    73,
      74,    75,     0,     0,     0,   106,   125,     0,     0,   -64,
      72,    73,    74,    75,    77,     0,    72,    73,    74,    75,
       0,     0,     0,   148,     0,     0,    77,   182,    72,    73,
      74,    75,    77,     0,    72,    73,    74,    75,     0,   183,
      72,    73,    74,    75,    77,   184,    72,    73,    74,    75,
      77,   185,     0,     0,     0,     0,    77,   205,     0,     0,
       0,     0,    77
};

static const yytype_int16 yycheck[] =
{
      29,    22,    22,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    48,    42,    43,    44,    45,    46,    47,    48,
      54,   164,    38,    39,    40,    41,    47,    47,    40,    41,
      59,    44,    45,    49,    63,    15,    49,    66,    54,    49,
      48,    51,    54,    72,    73,    74,    75,    48,    77,    29,
      50,    51,     4,     5,     6,     7,     8,     9,    42,    43,
      12,    13,    14,   206,    49,   208,    51,   210,    20,    98,
      22,    50,    51,    48,    38,    39,    40,    41,   221,    48,
      48,   224,    46,    35,   113,   114,   115,   116,   231,   232,
      54,    38,    39,    40,    41,    48,    48,    48,    46,    20,
     243,    20,    49,   246,   247,   134,   135,    54,   137,   138,
     139,   140,   141,   142,   143,   144,    98,    20,    48,   148,
      26,    38,    39,    40,    41,   154,   269,    38,    39,    40,
      41,    49,    48,    48,    51,   278,   165,    54,   167,    48,
      51,    48,   171,    54,   173,    46,   289,    46,   177,    42,
      43,    46,   134,   135,    47,    51,    38,    51,    39,   141,
     142,   143,   144,    51,    22,     3,    22,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    27,    16,    17,
      18,    19,    20,    21,    22,    22,    20,    25,    50,   171,
      28,   173,    30,    38,    39,   177,    20,    35,    36,    37,
      20,    46,    47,    20,    46,    50,    46,    46,    46,    22,
      48,    54,    48,    22,    52,     3,   245,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    49,    16,    17,
      18,    19,    20,    21,    22,    49,    47,    25,    22,    47,
      28,    23,    30,    38,    39,    38,    39,    35,    36,    37,
      23,    46,    47,    46,    47,    50,    46,    50,    46,     3,
      48,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    50,    16,    17,    18,    19,    20,    21,    22,    49,
      22,    25,    49,    22,    28,    47,    30,    38,    39,    38,
      39,    35,    36,    37,    31,    46,    47,    46,    47,    50,
      23,    50,    46,     3,    48,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    49,    16,    17,    18,    19,
      20,    21,    22,    49,    23,    25,    23,    22,    28,    22,
      30,    38,    39,    38,    39,    35,    36,    37,    24,    46,
      47,    46,    47,    50,    24,    50,    46,     3,    48,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    32,
      16,    17,    18,    19,    20,    21,    22,    46,    23,    25,
      23,    23,    28,    50,    30,    38,    39,    44,    45,    35,
      36,    37,    49,    46,    47,    50,    24,    50,    24,    24,
      46,     3,    48,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    22,    16,    17,    18,    19,    20,    21,
      22,    48,    23,    25,    24,    24,    28,    24,    30,    24,
      24,    49,    46,    35,    36,    37,    42,    43,    44,    45,
      24,    47,    46,    49,    46,     3,    48,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    24,    16,    17,
      18,    19,    20,    21,    22,    24,    23,    25,    24,    33,
      28,    24,    30,    33,    46,    23,    46,    35,    36,    37,
      42,    43,    44,    45,    33,    47,    24,    53,    46,     3,
      48,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    46,    16,    17,    18,    19,    20,    21,    22,    24,
      29,    25,    24,    23,    28,    24,    30,   245,   204,    -1,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,     3,    48,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,
      30,    38,    39,    40,    41,    35,    36,    37,    -1,    38,
      39,    40,    41,    -1,    51,    -1,    46,    54,    48,     5,
       6,     7,     8,     9,    -1,    54,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    34,    35,
      -1,    -1,    20,    -1,    22,    -1,     5,     6,     7,     8,
       9,    -1,    48,    12,    13,    14,    -1,    35,    -1,    -1,
      -1,    20,    -1,    22,     5,     6,     7,     8,     9,    47,
      48,    12,    13,    14,    -1,    -1,    35,    -1,    -1,    20,
      -1,    22,    -1,     5,     6,     7,     8,     9,    47,    48,
      12,    13,    14,    -1,    35,    -1,    -1,    -1,    20,    -1,
      22,     5,     6,     7,     8,     9,    47,    48,    12,    13,
      14,    -1,    -1,    35,    -1,    -1,    20,    -1,    22,    -1,
       5,     6,     7,     8,     9,    47,    48,    12,    13,    14,
      -1,    35,    -1,    -1,    -1,    20,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      35,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    49,    48,    -1,    -1,    -1,    54,    38,    39,
      40,    41,    38,    39,    40,    41,    38,    39,    40,    41,
      -1,    51,    -1,    49,    54,    -1,    -1,    49,    54,    -1,
      -1,    -1,    54,    38,    39,    40,    41,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    50,    46,    -1,    -1,    54,
      38,    39,    40,    41,    54,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    51,    -1,    -1,    54,    49,    38,    39,
      40,    41,    54,    -1,    38,    39,    40,    41,    -1,    49,
      38,    39,    40,    41,    54,    49,    38,    39,    40,    41,
      54,    49,    -1,    -1,    -1,    -1,    54,    49,    -1,    -1,
      -1,    -1,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,    57,     0,     3,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    16,    17,    18,    19,    20,
      21,    22,    25,    28,    30,    35,    36,    37,    46,    48,
      58,    59,    60,    61,    62,    68,    69,    70,    71,    72,
      74,    48,    48,    48,    48,    48,    48,    48,    48,    46,
      20,    76,    20,    77,    20,    78,    38,    39,    46,    47,
      50,    48,    26,    48,    48,    48,    48,    20,    74,    46,
      46,    46,    38,    39,    40,    41,    46,    54,    49,    74,
      74,    74,    74,    74,    74,    74,    51,    51,    51,    38,
      39,    20,    34,    74,    75,    22,    22,    27,    48,    73,
      74,    79,    22,    67,    20,    74,    50,    49,    74,    74,
      74,    74,    74,    51,    51,    51,    51,    49,    49,    49,
      20,    20,    20,    46,    46,    46,    46,    50,    51,    42,
      43,    48,    74,    79,    44,    45,    49,    42,    43,    44,
      45,    42,    43,    44,    45,    47,    49,    49,    51,    22,
      74,    74,    74,    74,    47,    22,    22,    47,    22,    47,
      22,    49,    79,    79,    23,    47,    74,    47,    74,    74,
      74,    47,    79,    47,    79,    79,    79,    47,    23,    46,
      74,    50,    49,    49,    49,    49,     4,    74,    50,    49,
      22,    49,    22,    49,    51,    58,    74,    74,    79,    79,
      79,    31,    63,    64,    65,    49,    23,    49,    23,    49,
      23,    22,    24,    22,    24,    32,    66,    64,    46,    20,
      58,    23,    20,    58,    23,    20,    58,    49,    51,    15,
      29,    50,    50,    46,    24,    20,    58,    46,    24,    20,
      58,    46,    24,    23,    22,    48,    23,    52,    58,    58,
      24,    46,    24,    24,    46,    24,    24,    20,    58,    49,
      73,    58,    58,    46,    46,    24,    24,    46,    24,    23,
      49,    24,    33,    33,    33,    24,    20,    58,    23,    46,
      46,    46,    46,    24,    58,    53,    24,    24,    29,    23,
      58,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    60,    61,
      62,    63,    63,    64,    64,    65,    65,    66,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    69,    70,    71,    72,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     3,     2,     4,     4,     1,     1,
       1,     5,     4,     4,     1,     1,     1,     6,     6,     7,
       7,     1,     2,     1,     2,     8,     7,     6,     1,    10,
      10,    11,    11,    14,    12,    10,     9,     9,    10,    10,
      13,    11,     9,    18,    11,     7,     2,     2,     2,     3,
       3,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       4,     4,     4,     6,     6,     6,     6,     3,     3,     4,
       6,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       4,     3,     4,     3,     4,     3,     3,     3,     4,     3,
       4,     3,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 119 "my.y"
                { printf("\n\n-------------- Program Completed ------------\n"); }
#line 1729 "my.tab.c"
    break;

  case 6:
#line 128 "my.y"
          { s_val = -1; s_def = 0; s_main_val = -1000000; }
#line 1735 "my.tab.c"
    break;

  case 7:
#line 130 "my.y"
             { printf("\n%s\n",(yyvsp[0].ch)); }
#line 1741 "my.tab.c"
    break;

  case 8:
#line 132 "my.y"
               { printf("\n%s\n",(yyvsp[0].ch));}
#line 1747 "my.tab.c"
    break;

  case 9:
#line 135 "my.y"
        {
            printf("New Line Pinted...executed using \";\" \n");
        }
#line 1755 "my.tab.c"
    break;

  case 10:
#line 139 "my.y"
                         {
            sh printf("\nmain dec in stat\n");
        }
#line 1763 "my.tab.c"
    break;

  case 11:
#line 143 "my.y"
                         {
            sh printf("\nmain dec1 in stat for ch\n");
        }
#line 1771 "my.tab.c"
    break;

  case 12:
#line 147 "my.y"
                        {
            sh printf("\nmain dec1 in stat for fl\n");
        }
#line 1779 "my.tab.c"
    break;

  case 13:
#line 151 "my.y"
               {
            sh2 printf("\nEnterd single variable statement\n"); 

            int kk;
            kk = get_val((yyvsp[-1].ch));
            sh printf("\nget_val is : %d",kk);
            sh printf("\nchk_type is : %d",chk_type[kk]);


            if(chk_type[get_val((yyvsp[-1].ch))] == 2)
            {
                int pp;
                pp = get_val((yyvsp[-1].ch));
                char ppp[200];
                strcpy(ppp,get_str[pp]);
                sh2 printf("\nSingle variable statement Result is = %s\n",ppp);
            }
            else if(chk_type[get_val((yyvsp[-1].ch))] == 1)
            {
                sh printf("\nEnterd only variable\n"); 
                
                int pp;
                pp = get_val((yyvsp[-1].ch));
                if(chk_type[pp] != 1)
                    printf("\nNOT DECLARED VARIABLE\n");
                else
                {
                    (yyval.IN) = str_val[pp];
                    sh2 printf("\nSingle variable statement Result is = %d\n",(yyval.IN));

                }
            }
            else if(chk_type[get_val((yyvsp[-1].ch))] == 3)
            {
                sh printf("\nEnterd only variable for fl\n"); 
                
                int pp;
                pp = get_val((yyvsp[-1].ch));
                if(chk_type[pp] != 3)
                    printf("\nNOT DECLARED VARIABLE\n");
                else
                {
                    (yyval.IN) = (int)fl_val[pp];
                    sh2 printf("\nSingle varible statement Result is = %f\n",fl_val[pp]);

                }
            }
            else
            {
                    printf("\nNOT DECLARED VARIABLE\n");
                
            }


        }
#line 1839 "my.tab.c"
    break;

  case 14:
#line 207 "my.y"
                   {

            int pp1,pp2;
            pp1 = chk_type[get_val((yyvsp[-2].ch))];
            pp2 = chk_type[get_val((yyvsp[0].ch))];
           sh  printf("PP1 : %d || pp2 : %d",pp1,pp2);

            sh2 printf("\nEntered var = var statement\n");
            if(pp1 != pp2)
            {
                if(pp1+pp2 == 4)
                {
                    if(pp1 == 1)
                        str_val[get_val((yyvsp[-2].ch))] = (int)fl_val[get_val((yyvsp[0].ch))];
                    else
                        fl_val[get_val((yyvsp[-2].ch))] = (float)str_val[get_val((yyvsp[0].ch))];
                }
                else if(pp1 == 0)
                {
                    printf("\nAssigning in undeclared variable not allowed\n");
                }
                else
                {
                    printf("\nType mismatched..Can only use *char = *char\n");
                }
            }
            else
            {
                int pp;
                pp = chk_type[get_val((yyvsp[-2].ch))];
                if(pp1 == 1)
                {
                    str_val[get_val((yyvsp[-2].ch))] = str_val[get_val((yyvsp[0].ch))];
                    (yyval.IN) = str_val[get_val((yyvsp[-2].ch))];
                }
                else if(pp1 == 2)
                {
                    strcpy( get_str[get_val((yyvsp[-2].ch))],get_str[get_val((yyvsp[0].ch))] );
                    (yyval.IN) = -1;
                }
                else if(pp1 == 3)
                {
                    fl_val[pp1] = fl_val[pp2];
                    (yyval.IN) = (int)fl_val[pp1];
                }
                else
                {
                    printf("\nUndeclared variable");
                }
            }
        }
#line 1895 "my.tab.c"
    break;

  case 15:
#line 259 "my.y"
                       {

            printf("\nExpression statement Result is = %f\n",(yyvsp[-1].fl));
            (yyval.IN) = (int)(yyvsp[-1].fl);
        }
#line 1905 "my.tab.c"
    break;

  case 16:
#line 266 "my.y"
                              {
            sh2 printf("\nEnterd var = expression statement");
            int pp;
            pp = get_val((yyvsp[-3].ch));
            if(chk_type[pp] == 0)
                printf("\nNOT DECLARED VARIABLE\n");
            else if(chk_type[pp] == 1)
                str_val[pp]=(int)(yyvsp[-1].fl);
            else if(chk_type[pp] == 3)
                fl_val[pp] = (float)(yyvsp[-1].fl);
        }
#line 1921 "my.tab.c"
    break;

  case 17:
#line 278 "my.y"
                               {
            sh2 printf("\nEnterd var = expression2 statement\n");
            int pp;
            pp = get_val((yyvsp[-3].ch));
            if(chk_type[pp] != 2)
                printf("\nVariable not declared (char)\n");
            else
                strcpy(get_str[pp],(yyvsp[-1].ch));
        }
#line 1935 "my.tab.c"
    break;

  case 21:
#line 294 "my.y"
                             {
            sh2 printf("\nEnter print statemnet\n");
            int pp;
            pp = get_val((yyvsp[-2].ch));
            if(chk_type[pp] == 0)
                printf("\nVariable not declared\n");
            else if(chk_type[pp] == 1)
                printf("\nInt variable .. Value is : %d\n",str_val[pp]),(yyval.IN) = str_val[pp];
            else if(chk_type[pp] == 2)
                printf("\nStrig variable .. Value is : %s\n",get_str[pp]);
            else
                printf("\nFloat variable .. Value is : %f\n",fl_val[pp]),(yyval.IN) = (int)fl_val[pp];    
            
        }
#line 1954 "my.tab.c"
    break;

  case 22:
#line 309 "my.y"
                    {
            sh2 printf("\nEnter Var increment statemnet\n");
            int pp;
            pp = get_val((yyvsp[-3].ch));
            if(chk_type[pp] == 0)
                printf("\nVariable not declared\n");
            else if(chk_type[pp] == 1)
                str_val[pp]++;
            else if(chk_type[pp] == 2)
                printf("\nString value... cannot be incremented\n");
            else
                fl_val[pp]++;
        }
#line 1972 "my.tab.c"
    break;

  case 23:
#line 323 "my.y"
                    {
            sh2 printf("\nEnter Var decrement statemnet\n");
            int pp;
            pp = get_val((yyvsp[-3].ch));
            if(chk_type[pp] == 0)
                printf("\nVariable not declared\n");
            else if(chk_type[pp] == 1)
                str_val[pp]--;
            else if(chk_type[pp] == 2)
                printf("\nString value... cannot be decremented\n");
            else
                fl_val[pp]--;
        }
#line 1990 "my.tab.c"
    break;

  case 27:
#line 345 "my.y"
                                     {
        if(chk_arr[get_val((yyvsp[-5].ch))] == 0)
        {
            printf("\nArray Not Declared\n");
        }
        else
        {
            set_arr[chk_arr[get_val((yyvsp[-5].ch))]][(yyvsp[-3].IN)] = (yyvsp[0].fl);
            sh2 printf("\nArray assign value is : %d\n",(int)(yyvsp[0].fl));
        }
}
#line 2006 "my.tab.c"
    break;

  case 28:
#line 358 "my.y"
                                  {
    // printf("arr here : %s\n",$6);


    chk_arr[get_val((yyvsp[-5].ch))] = arr_index;
    char s[100];
    strcpy(s,(yyvsp[0].ch));
    int cnt_arr = 0;
	int st = 1;
	char p[5],g[5];
	int index = 0;
	for(int i = 1; i < strlen(s); i++)
	{
		if(s[i] != ',' || s[i] == '}')
		{
			if(s[i] == '}')
			{
				set_arr[arr_index][cnt_arr] = atoi(p);
                cnt_arr++;
            	break;
			}
			p[index] = s[i];
			index++;
		}
		else
		{
			int kk = atoi(p);
			set_arr[arr_index][cnt_arr] = kk;
			cnt_arr++;
			index =0;
			for(int j = 0; j < 5; j++)
				p[j] = g[j];
		}
	}

    if(cnt_arr != (yyvsp[-3].IN))
    {
        printf("\nArray didnt defined correctly\n");
    }
    sz_arr[arr_index] = (yyvsp[-3].IN);
    arr_index++;

}
#line 2054 "my.tab.c"
    break;

  case 29:
#line 403 "my.y"
                                                     {
            (yyval.fl) = (int)pow((yyvsp[-4].fl),(yyvsp[-2].fl));
            sh2 printf("\nPower statement Result is : %f",(yyval.fl));
        }
#line 2063 "my.tab.c"
    break;

  case 30:
#line 408 "my.y"
                                          {
            //if(s_val == 0)
            s_val = (yyvsp[-4].IN);
            s_cnt++;
            sh printf("S_cnt in switch dec : %d\n",s_cnt);
            sh printf("SWITCH value is : %d",s_main_val);
        }
#line 2075 "my.tab.c"
    break;

  case 31:
#line 417 "my.y"
                   {(yyval.IN) = (yyvsp[0].IN);}
#line 2081 "my.tab.c"
    break;

  case 32:
#line 418 "my.y"
                        { (yyval.IN) = (yyvsp[0].IN);}
#line 2087 "my.tab.c"
    break;

  case 33:
#line 421 "my.y"
                    { (yyval.IN) = (yyvsp[0].IN); }
#line 2093 "my.tab.c"
    break;

  case 34:
#line 422 "my.y"
                             {(yyval.IN) = (yyvsp[-1].IN);}
#line 2099 "my.tab.c"
    break;

  case 35:
#line 425 "my.y"
                                                     {
                 if((yyvsp[-6].IN) == s_val) {
                    s_cnt = 2;
                        sh printf("S_cnt in case dec : %d\n",s_cnt);

                        if((s_main_val == -1000000) && (s_cnt%2 == 0)){
                        s_main_val = (yyvsp[-3].IN); }
                        sh printf("value setted----NUM is %d\n\n\n",(yyvsp[-6].IN)); 
                        s_def = 1;
                    } 
         }
#line 2115 "my.tab.c"
    break;

  case 36:
#line 436 "my.y"
                                                {
                if((yyvsp[-5].IN) == s_val) {
                    s_cnt = 2;
                    if((s_main_val == -1000000) && (s_cnt%2 == 0)){
                    s_main_val = (yyvsp[-3].IN); }
                    sh printf("value setted----NUM is %d\n\n\n",(yyvsp[-5].IN));
                     s_def = 1;} 
        }
#line 2128 "my.tab.c"
    break;

  case 37:
#line 446 "my.y"
                                        { if(!s_def) s_main_val = (yyvsp[-3].IN);}
#line 2134 "my.tab.c"
    break;

  case 38:
#line 449 "my.y"
           { (yyval.IN) = (yyvsp[0].IN); s_val = (yyvsp[0].IN); sh printf("s_id setted : %d",s_val);}
#line 2140 "my.tab.c"
    break;

  case 39:
#line 451 "my.y"
                                                {
            printf("\nWhile Entered\n");
            int i;
            int pp;
            pp = get_val((yyvsp[-2].ch));

            for(i = (yyvsp[-7].IN); i < (yyvsp[-5].IN); i++)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),(yyval.IN) = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),(yyval.IN) = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),(yyval.IN) = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),(yyval.IN) = (int)fl_val[pp];

            }
            //$$ = (int)$8;
            printf("\nWhile Executed\n");
        }
#line 2166 "my.tab.c"
    break;

  case 40:
#line 472 "my.y"
                                                 {
            printf("\nWhile Entered\n");
            int i;
            int pp;
            pp = get_val((yyvsp[-2].ch));
            for(i = (yyvsp[-7].IN); i > (yyvsp[-5].IN); i--)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),(yyval.IN) = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),(yyval.IN) = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),(yyval.IN) = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),(yyval.IN) = (int)fl_val[pp];
            }
            //$$ = (int)$8;
            printf("\nWhile Executed\n");
        }
#line 2190 "my.tab.c"
    break;

  case 41:
#line 491 "my.y"
                                                    {
            printf("\nWhile Entered\n");
            int i;
            int pp;
            pp = get_val((yyvsp[-2].ch));
            for(i = (yyvsp[-8].IN); i <= (yyvsp[-5].IN); i++)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),(yyval.IN) = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),(yyval.IN) = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),(yyval.IN) = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),(yyval.IN) = (int)fl_val[pp];
            }
            //$$ = (int)$9;
            printf("\nWhile Executed\n");
        }
#line 2214 "my.tab.c"
    break;

  case 42:
#line 510 "my.y"
                                                    {
            printf("\nWhile Entered\n");
            int i;
            int pp;
            pp = get_val((yyvsp[-2].ch));
            for(i = (yyvsp[-8].IN); i >= (yyvsp[-5].IN); i--)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),(yyval.IN) = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),(yyval.IN) = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),(yyval.IN) = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),(yyval.IN) = (int)fl_val[pp];
            }
            //$$ = (int)$9;
            printf("\nWhile Executed\n");
        }
#line 2238 "my.tab.c"
    break;

  case 43:
#line 529 "my.y"
                                                               {
            printf("\nfor Entered\n");
            int i;
            int pp;
            pp = get_val((yyvsp[-2].ch));
            for(int i = (yyvsp[-9].IN); i < (yyvsp[-7].IN); i += (yyvsp[-5].IN))
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),(yyval.IN) = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),(yyval.IN) = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),(yyval.IN) = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),(yyval.IN) = (int)fl_val[pp];
            }
            //$$ = $12;
            printf("\nfor Executed\n");
        }
#line 2262 "my.tab.c"
    break;

  case 44:
#line 548 "my.y"
                                                       {
            printf("\nfor Entered\n");
            int i;
            int pp;
            pp = get_val((yyvsp[-2].ch));
            for(i = (yyvsp[-7].IN); i < (yyvsp[-5].IN); i++)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),(yyval.IN) = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),(yyval.IN) = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),(yyval.IN) = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),(yyval.IN) = (int)fl_val[pp];

            }
            //$$ = $10;
            printf("\nfor Executed\n");

        }
#line 2288 "my.tab.c"
    break;

  case 45:
#line 569 "my.y"
                                             {
            printf("\nfor Entered\n");
            int i;
            int pp;
            pp = get_val((yyvsp[-2].ch));
            for(i = 0; i < (yyvsp[-5].IN); i++)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),(yyval.IN) = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),(yyval.IN) = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),(yyval.IN) = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),(yyval.IN) = (int)fl_val[pp];
            }
            //$$ = $8;
            printf("\nfor Executed\n");

        }
#line 2313 "my.tab.c"
    break;

  case 46:
#line 591 "my.y"
                                                 {
            printf("\nWhile Entered\n");
            int i;
            for(i = (yyvsp[-6].IN); i < (yyvsp[-4].IN); i++)
            {
                printf("Printing  : %d\n",(yyvsp[-1].IN));
            }
            (yyval.IN) = (yyvsp[-1].IN);
            printf("\nWhile Executed\n");
        }
#line 2328 "my.tab.c"
    break;

  case 47:
#line 601 "my.y"
                                                   {
            printf("\nWhile Entered\n");
            int i;
            for(i = (yyvsp[-6].IN); i > (yyvsp[-4].IN); i--)
            {
                printf("Printing  : %d\n",(yyvsp[-1].IN));
            }
            (yyval.IN) = (yyvsp[-1].IN);
            printf("\nWhile Executed\n");
        }
#line 2343 "my.tab.c"
    break;

  case 48:
#line 611 "my.y"
                                                      {
            printf("\nWhile Entered\n");
            int i;
            for(i = (yyvsp[-7].IN); i <= (yyvsp[-4].IN); i++)
            {
                printf("Printing  : %d\n",(yyvsp[-1].IN));
            }
            (yyval.IN) = (yyvsp[-1].IN);
            printf("\nWhile Executed\n");
        }
#line 2358 "my.tab.c"
    break;

  case 49:
#line 621 "my.y"
                                                      {
            printf("\nWhile Entered\n");
            int i;
            for(i = (yyvsp[-7].IN); i >= (yyvsp[-4].IN); i--)
            {
                printf("Printing  : %d\n",(yyvsp[-1].IN));
            }
            (yyval.IN) = (yyvsp[-1].IN);
            printf("\nWhile Executed\n");
        }
#line 2373 "my.tab.c"
    break;

  case 50:
#line 631 "my.y"
                                                                 {
            printf("\nfor Entered\n");
            int i;
            for(int i = (yyvsp[-8].IN); i < (yyvsp[-6].IN); i += (yyvsp[-4].IN))
            {
                printf("For statement : %d\n", (yyvsp[-1].IN));
            }
            (yyval.IN) = (yyvsp[-1].IN);
            printf("\nfor Executed\n");

        }
#line 2389 "my.tab.c"
    break;

  case 51:
#line 642 "my.y"
                                                         {
            printf("\nfor Entered\n");
            int i;
            for(i = (yyvsp[-6].IN); i < (yyvsp[-4].IN); i++)
            {
                printf("For statement : %d\n", (yyvsp[-1].IN));
            }
            (yyval.IN) = (yyvsp[-1].IN);
        }
#line 2403 "my.tab.c"
    break;

  case 52:
#line 651 "my.y"
                                               {
            printf("\nfor Entered\n");
            int i;
            for(i = 0; i < (yyvsp[-4].IN); i++)
            {
                printf("For single statemnet : %d\n",(yyvsp[-1].IN));
            }
            (yyval.IN) = (yyvsp[-1].IN);
            printf("\nfor Executed\n");

        }
#line 2419 "my.tab.c"
    break;

  case 53:
#line 667 "my.y"
                                                                                                              {

            if((yyvsp[-15].IN))
            {
                printf("IF ELSE EXECUTED : IF :==>> %d\n",(yyvsp[-15].IN));
                (yyval.IN) = (yyvsp[-12].IN);
            }
            else if((yyvsp[-8].IN))
            {
                printf("IF ELSE EXECUTED : ELSE IF :==>> %d",(yyvsp[-8].IN));
                (yyval.IN) = (yyvsp[-5].IN);
            }
            else
            {
                printf("IF ELSE EXECUTED : ELSE :==>> %d",(yyvsp[-1].IN));
                (yyval.IN) = (yyvsp[-1].IN);
            }


        }
#line 2444 "my.tab.c"
    break;

  case 54:
#line 687 "my.y"
                                                                    {
            if((yyvsp[-8].IN))
            {
                printf("IF ELSE EXECUTED : IF :==>> %d\n",(yyvsp[-8].IN));
                (yyval.IN) = (yyvsp[-5].IN);
            }
            else
            {
                printf("IF ELSE EXECUTED : ELSE :==>> %d",(yyvsp[-1].IN));
                (yyval.IN) = (yyvsp[-1].IN);
            }
        }
#line 2461 "my.tab.c"
    break;

  case 55:
#line 699 "my.y"
                                               {
            if((yyvsp[-4].IN)){
                printf("IF EXECUTED WITH VALUE : %d and statement value is : %d\n",(yyvsp[-4].IN),(yyvsp[-1].IN));
            }
            else{
                printf("if not executed\n");
            }
        }
#line 2474 "my.tab.c"
    break;

  case 56:
#line 711 "my.y"
                        {sh printf("\nStatement of INT\n"); }
#line 2480 "my.tab.c"
    break;

  case 57:
#line 712 "my.y"
                         {sh printf("\nStatement of CHAR"); }
#line 2486 "my.tab.c"
    break;

  case 58:
#line 713 "my.y"
                          {sh printf("\nStatement of float"); }
#line 2492 "my.tab.c"
    break;

  case 59:
#line 715 "my.y"
                                      { (yyval.IN) = (yyvsp[-2].IN) && (yyvsp[0].IN); }
#line 2498 "my.tab.c"
    break;

  case 60:
#line 716 "my.y"
                                      { (yyval.IN) = (yyvsp[-2].IN) && (yyvsp[0].IN); }
#line 2504 "my.tab.c"
    break;

  case 62:
#line 722 "my.y"
                   {sh printf("\nNumber fl:  %f\n",(yyvsp[0].fl) ); (yyval.fl) = (yyvsp[0].fl);sh printf("\nNumber fl:  %f\n",(yyval.fl));}
#line 2510 "my.tab.c"
    break;

  case 63:
#line 723 "my.y"
                 {sh printf("\nNumber in:  %d\n",(yyvsp[0].IN) ); (yyval.fl) = (float)(yyvsp[0].IN);  }
#line 2516 "my.tab.c"
    break;

  case 64:
#line 724 "my.y"
                  { 
                sh printf("\nEnterd only variable\n"); 
                int pp;
                pp = get_val((yyvsp[0].ch));
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n");
                else if(chk_type[pp] == 1)
                    (yyval.fl) = (float)str_val[pp];
                else if(chk_type[pp] == 3)
                    (yyval.fl) = fl_val[pp];
           }
#line 2532 "my.tab.c"
    break;

  case 65:
#line 735 "my.y"
                                      {sh printf("\nenterd exp + exp \n"); (yyval.fl) = (float)((yyvsp[-2].fl) + (yyvsp[0].fl)); }
#line 2538 "my.tab.c"
    break;

  case 66:
#line 736 "my.y"
                                      {sh printf("\nenterd exp - exp \n"); (yyval.fl) = (float)((yyvsp[-2].fl) - (yyvsp[0].fl)); }
#line 2544 "my.tab.c"
    break;

  case 67:
#line 737 "my.y"
                                      {sh printf("\nenterd exp * exp \n"); (yyval.fl) = (float)((yyvsp[-2].fl) * (yyvsp[0].fl)); }
#line 2550 "my.tab.c"
    break;

  case 68:
#line 738 "my.y"
                                      {sh printf("\nenterd exp / exp \n"); ((yyvsp[0].fl) == 0) ?  ((yyval.fl) = 0) :((yyval.fl) = (float)((yyvsp[-2].fl) / (yyvsp[0].fl))); }
#line 2556 "my.tab.c"
    break;

  case 69:
#line 739 "my.y"
                                      {sh printf("\nenterd exp %% exp\n"); (yyval.fl) = (int)(yyvsp[-2].fl)%(int)(yyvsp[0].fl);}
#line 2562 "my.tab.c"
    break;

  case 70:
#line 740 "my.y"
                                    {sh printf("enterd sin\n"); (yyval.fl) = sin((yyvsp[-1].fl)*(PI/180));}
#line 2568 "my.tab.c"
    break;

  case 71:
#line 741 "my.y"
                                    {sh printf("enterd cos\n"); (yyval.fl) = cos((yyvsp[-1].fl)*(PI/180));}
#line 2574 "my.tab.c"
    break;

  case 72:
#line 742 "my.y"
                                    {sh printf("enterd tan\n"); (yyval.fl) = tan((yyvsp[-1].fl)*(PI/180));}
#line 2580 "my.tab.c"
    break;

  case 73:
#line 743 "my.y"
                                                   { sh printf("enterd max\n"); (yyval.fl) = (yyvsp[-3].fl) >= (yyvsp[-1].fl) ? (yyvsp[-3].fl) : (yyvsp[-1].fl); }
#line 2586 "my.tab.c"
    break;

  case 74:
#line 744 "my.y"
                                                   { sh printf("enterd min\n"); (yyval.fl) = (yyvsp[-3].fl) <= (yyvsp[-1].fl) ? (yyvsp[-3].fl) : (yyvsp[-1].fl); }
#line 2592 "my.tab.c"
    break;

  case 75:
#line 745 "my.y"
                                                   { sh printf("enterd min\n"); (yyval.fl) = gcd((yyvsp[-3].fl),(yyvsp[-1].fl)); }
#line 2598 "my.tab.c"
    break;

  case 76:
#line 746 "my.y"
                                                   { sh printf("enterd min\n"); (yyval.fl) = lcm((yyvsp[-3].fl),(yyvsp[-1].fl)); }
#line 2604 "my.tab.c"
    break;

  case 77:
#line 747 "my.y"
                           { 
                    int mmmmm;
                    scanf("%d",&mmmmm);
                    (yyval.fl) = mmmmm;
            }
#line 2614 "my.tab.c"
    break;

  case 78:
#line 752 "my.y"
                                { (yyval.fl) = (yyvsp[-1].fl); }
#line 2620 "my.tab.c"
    break;

  case 79:
#line 753 "my.y"
                           {
               if(chk_arr[get_val((yyvsp[-3].ch))] == 0)
               {
                   printf("\nArray Not Declared\n");
                   (yyval.fl) = -2;
               }
               else
               {
                   if((yyvsp[-1].IN) < 0)
                   {
                        int l = chk_arr[get_val((yyvsp[-3].ch))];
                        printf("arr size is : %d\n",sz_arr[l]);
                        printf("Arr : ");

                       for(int i = 0; i < sz_arr[l]; i++)
                       {
                           printf("%d ",set_arr[l][i]);
                       }
                       printf("\n");
                       (yyval.fl) = -1;
                   }
                   else
                   {
                       int p = set_arr[chk_arr[get_val((yyvsp[-3].ch))]][(yyvsp[-1].IN)];
                        (yyval.fl) = p;
                        printf("\nArray value is : %d\n",p);

                   }
                 
               }
           }
#line 2656 "my.tab.c"
    break;

  case 80:
#line 784 "my.y"
                                    {
               if(chk_arr[get_val((yyvsp[-5].ch))] == 0)
               {
                   printf("\nArray Not Declared\n");
                   (yyval.fl) = -2;
               }
               else
               {
                    int l = chk_arr[get_val((yyvsp[-5].ch))];
                    printf("Arr : ");
                    for(int i = (yyvsp[-3].IN); i < (yyvsp[-1].IN); i++)
                    {
                        printf("%d ",set_arr[l][i]);
                    }
                    printf("\n");
               }
               (yyval.fl) = -3;
           }
#line 2679 "my.tab.c"
    break;

  case 81:
#line 805 "my.y"
                    {
                 sh printf("\nENterde variable_ch\n");
                 (yyval.ch) = (yyvsp[0].ch);
            }
#line 2688 "my.tab.c"
    break;

  case 82:
#line 810 "my.y"
                {
                printf("\nENtered variable statement ch_var\n");
                int pp;
                pp = get_val((yyvsp[0].ch));
                printf("\nVariable_ch is : %s\n",(yyvsp[0].ch));
                if(chk_type[pp] != 2)
                    printf("\nNOT DECLARED VARIABLE2\n");
                else
                {
                    char *ppp;
                    sh printf("\nstrcpy() entering\n");
                    strcpy(ppp,get_str[pp]);
                    sh printf("\nstrcpy() success\n");
                    (yyval.ch) = ppp;
                }
            }
#line 2709 "my.tab.c"
    break;

  case 83:
#line 828 "my.y"
                     { sh printf("\nvar : 1\n"); chk_type[get_val((yyvsp[0].ch))] = 1;}
#line 2715 "my.tab.c"
    break;

  case 84:
#line 829 "my.y"
            { sh printf("\nvar : 2\n");  chk_type[get_val((yyvsp[0].ch))] = 1; }
#line 2721 "my.tab.c"
    break;

  case 85:
#line 832 "my.y"
                      { sh printf("\ncharvar : 1\n"); chk_type[get_val((yyvsp[0].ch))] = 2; sh printf("chk_type value is: %d",chk_type[get_val((yyvsp[-2].ch))]);}
#line 2727 "my.tab.c"
    break;

  case 86:
#line 833 "my.y"
            { sh printf("\ncharvar : 2\n");  chk_type[get_val((yyvsp[0].ch))] = 2; sh printf("chk_type value is: %d",chk_type[get_val((yyvsp[0].ch))]);}
#line 2733 "my.tab.c"
    break;

  case 87:
#line 836 "my.y"
                      { sh printf("\nfloatvar : 1\n"); chk_type[get_val((yyvsp[0].ch))] = 3; sh printf("chk_type value is: %d",chk_type[get_val((yyvsp[-2].ch))]); }
#line 2739 "my.tab.c"
    break;

  case 88:
#line 837 "my.y"
            { sh printf("\nfloatvar : 2\n");  chk_type[get_val((yyvsp[0].ch))] = 3; sh printf("chk_type value is: %d",chk_type[get_val((yyvsp[0].ch))]);}
#line 2745 "my.tab.c"
    break;

  case 89:
#line 841 "my.y"
                             { (yyval.IN) = (int)(yyvsp[-1].IN); }
#line 2751 "my.tab.c"
    break;

  case 90:
#line 842 "my.y"
                                       {if((int)(yyvsp[-3].IN) == (int)(yyvsp[0].IN)){(yyval.IN) = 1;}else{(yyval.IN)=0;}}
#line 2757 "my.tab.c"
    break;

  case 91:
#line 843 "my.y"
                                    { (yyval.IN) = (int)(yyvsp[-2].IN) > (int)(yyvsp[0].IN); }
#line 2763 "my.tab.c"
    break;

  case 92:
#line 844 "my.y"
                                       { (yyval.IN) = (int)(yyvsp[-3].IN) >= (int)(yyvsp[0].IN); }
#line 2769 "my.tab.c"
    break;

  case 93:
#line 845 "my.y"
                                    { (yyval.IN) = (int)(yyvsp[-2].IN) < (int)(yyvsp[0].IN); }
#line 2775 "my.tab.c"
    break;

  case 94:
#line 846 "my.y"
                                       { (yyval.IN) = (int)(yyvsp[-3].IN) <= (int)(yyvsp[0].IN); }
#line 2781 "my.tab.c"
    break;

  case 95:
#line 847 "my.y"
                                    { (yyval.IN) = (int)(yyvsp[-2].IN) && (int)(yyvsp[0].IN); }
#line 2787 "my.tab.c"
    break;

  case 96:
#line 848 "my.y"
                                    { (yyval.IN) = (int)(yyvsp[-2].IN) || (int)(yyvsp[0].IN); }
#line 2793 "my.tab.c"
    break;

  case 97:
#line 849 "my.y"
                                      { (yyval.IN) = (int)(yyvsp[-2].fl) > (int)(yyvsp[0].fl); }
#line 2799 "my.tab.c"
    break;

  case 98:
#line 850 "my.y"
                                         { (yyval.IN) = (int)(yyvsp[-3].fl) >= (int)(yyvsp[0].fl); }
#line 2805 "my.tab.c"
    break;

  case 99:
#line 851 "my.y"
                                      { (yyval.IN) = (int)(yyvsp[-2].fl) < (int)(yyvsp[0].fl); }
#line 2811 "my.tab.c"
    break;

  case 100:
#line 852 "my.y"
                                         { (yyval.IN) = (int)(yyvsp[-3].fl) <= (int)(yyvsp[0].fl); }
#line 2817 "my.tab.c"
    break;

  case 101:
#line 853 "my.y"
                                      { (yyval.IN) = (int)(yyvsp[-2].fl) && (int)(yyvsp[0].fl); }
#line 2823 "my.tab.c"
    break;

  case 102:
#line 854 "my.y"
                                      { (yyval.IN) = (int)(yyvsp[-2].fl) || (int)(yyvsp[0].fl); }
#line 2829 "my.tab.c"
    break;

  case 103:
#line 855 "my.y"
                       { (yyval.IN) = (int)(yyvsp[0].fl); }
#line 2835 "my.tab.c"
    break;


#line 2839 "my.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 857 "my.y"


int yywrap() {return 1;}
int yyerror(char const *s) { fprintf(stderr, "%s\n", s);
    return 0;
}

int main(void)
{
    printf("Started : \n");
    freopen("text","r",stdin);
    freopen("out","w",stdout);
    yyparse();

    fclose(stdout);
    fclose(stdin);
    printf("HELLLLLLLLLLLLLLLLLLLLLLLLL s_val is : %d\n",s_val);

    return 0;
}
