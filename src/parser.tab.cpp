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
#line 36 "/cygdrive/d/Projects/Compiler/src/parser.y"

#include "ast.hpp"
#include "error.hpp"
#include "geneey.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// These are intricacies when putting lex and yacc together.
// Just neglect these minor points, or nasty here.
extern FILE *yyin, *yyout;

int yylex(void);

void yyerror(ASTptr *, const char *);


#line 88 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"

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

#include "parser.tab.hpp"

/* Symbol kind.  */
enum yysymbol_kind_t {
    YYSYMBOL_YYEMPTY = -2,
    YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
    YYSYMBOL_YYerror = 1,                    /* error  */
    YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
    YYSYMBOL_IDENT = 3,                      /* "identifier"  */
    YYSYMBOL_INT_CONST = 4,                  /* "constant"  */
    YYSYMBOL_CONST = 5,                      /* "const"  */
    YYSYMBOL_INT = 6,                        /* "int"  */
    YYSYMBOL_VOID = 7,                       /* "void"  */
    YYSYMBOL_IF = 8,                         /* "if"  */
    YYSYMBOL_ELSE = 9,                       /* "else"  */
    YYSYMBOL_WHILE = 10,                     /* "while"  */
    YYSYMBOL_BREAK = 11,                     /* "break"  */
    YYSYMBOL_CONTINUE = 12,                  /* "continue"  */
    YYSYMBOL_RETURN = 13,                    /* "return"  */
    YYSYMBOL_LE = 14,                        /* "<="  */
    YYSYMBOL_GE = 15,                        /* ">="  */
    YYSYMBOL_EQ = 16,                        /* "=="  */
    YYSYMBOL_NE = 17,                        /* "!="  */
    YYSYMBOL_AND = 18,                       /* "&&"  */
    YYSYMBOL_OR = 19,                        /* "||"  */
    YYSYMBOL_20_ = 20,                       /* '+'  */
    YYSYMBOL_21_ = 21,                       /* '-'  */
    YYSYMBOL_22_ = 22,                       /* '!'  */
    YYSYMBOL_23_ = 23,                       /* '*'  */
    YYSYMBOL_24_ = 24,                       /* '/'  */
    YYSYMBOL_25_ = 25,                       /* '%'  */
    YYSYMBOL_26_ = 26,                       /* '<'  */
    YYSYMBOL_27_ = 27,                       /* '>'  */
    YYSYMBOL_28_ = 28,                       /* ','  */
    YYSYMBOL_29_ = 29,                       /* ';'  */
    YYSYMBOL_30_ = 30,                       /* '['  */
    YYSYMBOL_31_ = 31,                       /* ']'  */
    YYSYMBOL_32_ = 32,                       /* '='  */
    YYSYMBOL_33_ = 33,                       /* '{'  */
    YYSYMBOL_34_ = 34,                       /* '}'  */
    YYSYMBOL_35_ = 35,                       /* '('  */
    YYSYMBOL_36_ = 36,                       /* ')'  */
    YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
    YYSYMBOL_CompUnit = 38,                  /* CompUnit  */
    YYSYMBOL_CompHead = 39,                  /* CompHead  */
    YYSYMBOL_Decl = 40,                      /* Decl  */
    YYSYMBOL_ConstDefArr = 41,               /* ConstDefArr  */
    YYSYMBOL_ConstDecl = 42,                 /* ConstDecl  */
    YYSYMBOL_ConstArr = 43,                  /* ConstArr  */
    YYSYMBOL_ConstDef = 44,                  /* ConstDef  */
    YYSYMBOL_ConstInitValArr = 45,           /* ConstInitValArr  */
    YYSYMBOL_ConstInitVal = 46,              /* ConstInitVal  */
    YYSYMBOL_VarDefArr = 47,                 /* VarDefArr  */
    YYSYMBOL_VarDecl = 48,                   /* VarDecl  */
    YYSYMBOL_VarDef = 49,                    /* VarDef  */
    YYSYMBOL_InitValArr = 50,                /* InitValArr  */
    YYSYMBOL_InitVal = 51,                   /* InitVal  */
    YYSYMBOL_FuncFParams = 52,               /* FuncFParams  */
    YYSYMBOL_FuncFParam = 53,                /* FuncFParam  */
    YYSYMBOL_FuncDef = 54,                   /* FuncDef  */
    YYSYMBOL_FuncDefproto = 55,              /* FuncDefproto  */
    YYSYMBOL_FuncDefHead = 56,               /* FuncDefHead  */
    YYSYMBOL_BlockItemArr = 57,              /* BlockItemArr  */
    YYSYMBOL_Block = 58,                     /* Block  */
    YYSYMBOL_BlockStart = 59,                /* BlockStart  */
    YYSYMBOL_Stmt = 60,                      /* Stmt  */
    YYSYMBOL_WhileHead = 61,                 /* WhileHead  */
    YYSYMBOL_Exp = 62,                       /* Exp  */
    YYSYMBOL_Cond = 63,                      /* Cond  */
    YYSYMBOL_ExpArr = 64,                    /* ExpArr  */
    YYSYMBOL_LVal = 65,                      /* LVal  */
    YYSYMBOL_PrimaryExp = 66,                /* PrimaryExp  */
    YYSYMBOL_FuncRParams = 67,               /* FuncRParams  */
    YYSYMBOL_UnaryExp = 68,                  /* UnaryExp  */
    YYSYMBOL_UnaryOp = 69,                   /* UnaryOp  */
    YYSYMBOL_MulExp = 70,                    /* MulExp  */
    YYSYMBOL_AddExp = 71,                    /* AddExp  */
    YYSYMBOL_RelExp = 72,                    /* RelExp  */
    YYSYMBOL_EqExp = 73,                     /* EqExp  */
    YYSYMBOL_LAndExp = 74,                   /* LAndExp  */
    YYSYMBOL_LOrExp = 75,                    /* LOrExp  */
    YYSYMBOL_ConstExp = 76                   /* ConstExp  */
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
#if !defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && !defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
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

#if defined __cplusplus && defined __GNUC__ && !defined __ICC && 6 <= __GNUC__
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

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
#  if (defined __cplusplus && !defined EXIT_SUCCESS \
       && !((defined YYMALLOC || defined malloc) \
 && (defined YYFREE || defined free)))
                                                                                                                        #   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if !defined malloc && !defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if !defined free && !defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif /* 1 */

#if (!defined yyoverflow \
     && (!defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc {
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
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


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
                0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 22, 2, 2, 2, 25, 2, 2,
                35, 36, 23, 20, 28, 21, 2, 24, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 29,
                26, 32, 27, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 30, 2, 31, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 33, 2, 34, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
                5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
                15, 16, 17, 18, 19
        };

#if YYDEBUG
                                                                                                                        /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    83,    90,    96,   107,   117,   128,   223,
     224,   226,   236,   245,   255,   270,   275,   316,   326,   335,
     340,   348,   358,   368,   379,   389,   417,   456,   465,   474,
     480,   487,   497,   506,   515,   538,   570,   603,   611,   627,
     655,   685,   698,   712,   717,   730,   736,   741,   772,   781,
     786,   802,   820,   838,   857,   878,   904,   928,   942,   949,
     957,   971,   976,   987,   996,   997,  1004,  1012,  1021,  1022,
    1038,  1056,  1072,  1073,  1074,  1076,  1077,  1083,  1089,  1096,
    1097,  1103,  1110,  1111,  1117,  1123,  1129,  1136,  1137,  1143,
    1150,  1151,  1158,  1159,  1166
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1

/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name(yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
        {
                "\"end of file\"", "error", "\"invalid token\"", "\"identifier\"",
                "\"constant\"", "\"const\"", "\"int\"", "\"void\"", "\"if\"", "\"else\"",
                "\"while\"", "\"break\"", "\"continue\"", "\"return\"", "\"<=\"",
                "\">=\"", "\"==\"", "\"!=\"", "\"&&\"", "\"||\"", "'+'", "'-'", "'!'",
                "'*'", "'/'", "'%'", "'<'", "'>'", "','", "';'", "'['", "']'", "'='",
                "'{'", "'}'", "'('", "')'", "$accept", "CompUnit", "CompHead", "Decl",
                "ConstDefArr", "ConstDecl", "ConstArr", "ConstDef", "ConstInitValArr",
                "ConstInitVal", "VarDefArr", "VarDecl", "VarDef", "InitValArr",
                "InitVal", "FuncFParams", "FuncFParam", "FuncDef", "FuncDefproto",
                "FuncDefHead", "BlockItemArr", "Block", "BlockStart", "Stmt",
                "WhileHead", "Exp", "Cond", "ExpArr", "LVal", "PrimaryExp",
                "FuncRParams", "UnaryExp", "UnaryOp", "MulExp", "AddExp", "RelExp",
                "EqExp", "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
        };

static const char *
yysymbol_name(yysymbol_kind_t yysymbol) {
    return yytname[yysymbol];
}

#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
        {
                -97, 54, 177, -97, -2, 3, 6, -97, -97, -97,
                -97, -97, -11, 1, -97, -97, -97, 27, 4, 37,
                -97, 16, -97, 52, -97, -15, -97, -97, 100, -97,
                -97, -7, 59, -97, -97, 113, 28, 73, -97, 67,
                27, -97, 60, 68, -97, -97, 57, -97, 59, 61,
                -97, 93, 107, 141, -97, -97, -97, -97, -97, -97,
                60, -97, -97, -97, 103, 114, 121, -97, -97, 60,
                169, 111, 129, -97, 168, -97, -97, 111, 138, 11,
                -97, -97, 7, 157, 60, -97, -97, -97, 162, -97,
                163, 60, -97, 60, -97, 60, 60, 60, 60, 60,
                -97, 14, -97, -97, -97, -97, -8, -97, -97, -97,
                -12, 60, 164, 111, 159, 148, 184, 185, -97, 146,
                -97, 171, 179, -97, -97, -97, 169, 169, 175, -97,
                86, -97, 68, -97, 60, -97, 178, 65, 60, 60,
                60, 60, 60, 60, 60, 60, -97, 65, -97, 168,
                -97, -97, -97, -97, 201, 111, 111, 111, 111, 159,
                159, 148, 184, -97, -97, 65, -97
        };

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
        {
                8, 0, 0, 1, 0, 0, 0, 4, 2, 9,
                10, 3, 0, 0, 7, 5, 6, 0, 15, 0,
                23, 0, 43, 0, 37, 0, 33, 15, 0, 12,
                39, 25, 0, 24, 40, 0, 34, 0, 38, 0,
                0, 13, 0, 0, 15, 22, 61, 65, 0, 0,
                57, 0, 0, 0, 72, 73, 74, 46, 45, 36,
                0, 41, 49, 42, 0, 0, 64, 68, 75, 0,
                79, 58, 0, 32, 0, 11, 64, 94, 0, 0,
                26, 29, 0, 62, 0, 53, 54, 55, 0, 43,
                0, 0, 48, 0, 71, 0, 0, 0, 0, 0,
                15, 0, 16, 19, 14, 30, 0, 28, 69, 67,
                0, 0, 0, 82, 87, 90, 92, 59, 56, 0,
                63, 0, 0, 76, 77, 78, 80, 81, 35, 20,
                0, 18, 0, 31, 0, 70, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 44, 0, 47, 0,
                21, 27, 66, 60, 50, 85, 86, 83, 84, 88,
                89, 91, 93, 52, 17, 0, 51
        };

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
        {
                -97, -97, -97, 176, -97, -97, -26, 172, -97, -96,
                -97, -97, 181, -97, -76, -97, 174, 212, -97, -97,
                126, -97, -97, -10, -97, -41, 125, -97, -35, -97,
                -97, 44, -97, 97, -34, 55, 74, 72, -97, 180
        };

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
        {
                0, 1, 2, 61, 28, 9, 31, 29, 130, 102,
                19, 10, 20, 106, 80, 25, 26, 11, 12, 13,
                35, 62, 89, 63, 64, 65, 112, 83, 76, 67,
                110, 68, 69, 70, 71, 114, 115, 116, 117, 103
        };

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
        {
                66, 39, 81, 107, 17, 131, 18, 23, 77, 21,
                46, 47, 88, 37, 46, 47, 134, 46, 47, 90,
                132, 38, 22, 42, 135, 43, 133, 54, 55, 56,
                27, 54, 55, 56, 54, 55, 56, 24, 81, 30,
                77, 109, 60, 108, 79, 105, 60, 101, 129, 60,
                113, 34, 122, 164, 3, 36, 151, 113, 72, 4,
                5, 6, 44, 46, 47, 32, 33, 77, 46, 47,
                136, 46, 47, 49, 128, 50, 51, 52, 53, 23,
                54, 55, 56, 7, 66, 54, 55, 56, 54, 55,
                56, 81, 82, 152, 57, 60, 84, 42, 58, 74,
                60, 79, 66, 60, 155, 156, 157, 158, 113, 113,
                113, 113, 66, 94, 149, 77, 46, 47, 4, 48,
                150, 49, 85, 50, 51, 52, 53, 154, 40, 41,
                66, 98, 99, 54, 55, 56, 86, 163, 91, 123,
                124, 125, 57, 92, 46, 47, 58, 59, 60, 46,
                47, 4, 48, 93, 49, 166, 50, 51, 52, 53,
                100, 54, 55, 56, 142, 143, 54, 55, 56, 104,
                87, 46, 47, 138, 139, 57, 60, 8, 15, 58,
                146, 60, 4, 5, 6, 140, 141, 111, 54, 55,
                56, 118, 95, 96, 97, 126, 127, 159, 160, 120,
                137, 101, 144, 60, 145, 42, 14, 147, 148, 153,
                165, 73, 75, 45, 16, 119, 121, 162, 161, 0,
                0, 0, 78
        };

static const yytype_int16 yycheck[] =
        {
                35, 27, 43, 79, 6, 101, 3, 6, 42, 3,
                3, 4, 53, 28, 3, 4, 28, 3, 4, 60,
                28, 36, 33, 30, 36, 32, 34, 20, 21, 22,
                3, 20, 21, 22, 20, 21, 22, 36, 79, 35,
                74, 82, 35, 36, 33, 34, 35, 33, 34, 35,
                84, 35, 93, 149, 0, 3, 132, 91, 30, 5,
                6, 7, 3, 3, 4, 28, 29, 101, 3, 4,
                111, 3, 4, 8, 100, 10, 11, 12, 13, 6,
                20, 21, 22, 29, 119, 20, 21, 22, 20, 21,
                22, 132, 35, 134, 29, 35, 35, 30, 33, 32,
                35, 33, 137, 35, 138, 139, 140, 141, 142, 143,
                144, 145, 147, 69, 28, 149, 3, 4, 5, 6,
                34, 8, 29, 10, 11, 12, 13, 137, 28, 29,
                165, 20, 21, 20, 21, 22, 29, 147, 35, 95,
                96, 97, 29, 29, 3, 4, 33, 34, 35, 3,
                4, 5, 6, 32, 8, 165, 10, 11, 12, 13,
                31, 20, 21, 22, 16, 17, 20, 21, 22, 31,
                29, 3, 4, 14, 15, 29, 35, 1, 2, 33,
                34, 35, 5, 6, 7, 26, 27, 30, 20, 21,
                22, 29, 23, 24, 25, 98, 99, 142, 143, 36,
                36, 33, 18, 35, 19, 30, 29, 36, 29, 31,
                9, 37, 40, 32, 2, 89, 91, 145, 144, -1,
                -1, -1, 42
        };

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
        {
                0, 38, 39, 0, 5, 6, 7, 29, 40, 42,
                48, 54, 55, 56, 29, 40, 54, 6, 3, 47,
                49, 3, 33, 6, 36, 52, 53, 3, 41, 44,
                35, 43, 28, 29, 35, 57, 3, 28, 36, 43,
                28, 29, 30, 32, 3, 49, 3, 4, 6, 8,
                10, 11, 12, 13, 20, 21, 22, 29, 33, 34,
                35, 40, 58, 60, 61, 62, 65, 66, 68, 69,
                70, 71, 30, 53, 32, 44, 65, 71, 76, 33,
                51, 62, 35, 64, 35, 29, 29, 29, 62, 59,
                62, 35, 29, 32, 68, 23, 24, 25, 20, 21,
                31, 33, 46, 76, 31, 34, 50, 51, 36, 62,
                67, 30, 63, 71, 72, 73, 74, 75, 29, 57,
                36, 63, 62, 68, 68, 68, 70, 70, 43, 34,
                45, 46, 28, 34, 28, 36, 62, 36, 14, 15,
                26, 27, 16, 17, 18, 19, 34, 36, 29, 28,
                34, 51, 62, 31, 60, 71, 71, 71, 71, 72,
                72, 73, 74, 60, 46, 9, 60
        };

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
        {
                0, 37, 38, 38, 38, 38, 38, 38, 39, 40,
                40, 41, 41, 42, 43, 43, 44, 45, 45, 46,
                46, 46, 47, 47, 48, 49, 49, 50, 50, 51,
                51, 51, 52, 52, 53, 53, 54, 55, 55, 56,
                56, 57, 57, 57, 58, 59, 60, 60, 60, 60,
                60, 60, 60, 60, 60, 60, 60, 61, 62, 63,
                64, 64, 65, 66, 66, 66, 67, 67, 68, 68,
                68, 68, 69, 69, 69, 70, 70, 70, 70, 71,
                71, 71, 72, 72, 72, 72, 72, 73, 73, 73,
                74, 74, 75, 75, 76
        };

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
        {
                0, 2, 2, 2, 2, 2, 2, 2, 0, 1,
                1, 3, 1, 4, 4, 0, 4, 3, 1, 1,
                2, 3, 3, 1, 3, 2, 4, 3, 1, 1,
                2, 3, 3, 1, 2, 5, 4, 2, 3, 3,
                3, 2, 2, 0, 4, 0, 1, 4, 2, 1,
                5, 7, 5, 2, 2, 2, 3, 1, 1, 1,
                4, 0, 2, 3, 1, 1, 3, 1, 1, 3,
                4, 2, 1, 1, 1, 1, 3, 3, 3, 1,
                3, 3, 1, 3, 3, 3, 3, 1, 3, 3,
                1, 3, 1, 3, 1
        };


enum {
    YYENOMEM = -2
};

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
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (root, YY_("syntax error: cannot back up")); \
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
                  Kind, Value, root); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ASTptr *root)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (root);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ASTptr *root)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, root);
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
                 int yyrule, ASTptr *root)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], root);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, root); \
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


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc(YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                                                                                                                                char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                     yy_state_t **yybottom,
                     yy_state_t *yybottom_no_free,
                     yy_state_t **yytop, yy_state_t *yytop_empty) {
    YYPTRDIFF_T yysize_old =
            *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
    YYPTRDIFF_T yysize_new = yysize_old + yyadd;
    if (*yycapacity < yysize_new) {
        YYPTRDIFF_T yyalloc = 2 * yysize_new;
        yy_state_t *yybottom_new;
        /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
        if (YYMAXDEPTH < yysize_new) {
            YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                    yydebug_suffix));
            return YYENOMEM;
        }
        if (YYMAXDEPTH < yyalloc)
            yyalloc = YYMAXDEPTH;
        yybottom_new =
                YY_CAST (yy_state_t *,
                         YYSTACK_ALLOC(YY_CAST(YYSIZE_T,
                                               yyalloc * YYSIZEOF(*yybottom_new))));
        if (!yybottom_new) {
            YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                    yydebug_suffix));
            return YYENOMEM;
        }
        if (*yytop != yytop_empty) {
            YYCOPY (yybottom_new, *yybottom, yysize_old);
            *yytop = yybottom_new + (yysize_old - 1);
        }
        if (*yybottom != yybottom_no_free)
            YYSTACK_FREE(*yybottom);
        *yybottom = yybottom_new;
        *yycapacity = yyalloc;
    }
    return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
                                                                                                                        # define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac(yy_state_t *yyesa, yy_state_t **yyes,
       YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken) {
    yy_state_t *yyes_prev = yyssp;
    yy_state_t *yyesp = yyes_prev;
    /* Reduce until we encounter a shift and thereby accept the token.  */
    YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name(yytoken)));
    if (yytoken == YYSYMBOL_YYUNDEF) {
        YYDPRINTF ((stderr, " Always Err\n"));
        return 1;
    }
    while (1) {
        int yyrule = yypact[+*yyesp];
        if (yypact_value_is_default (yyrule)
            || (yyrule += yytoken) < 0 || YYLAST < yyrule
            || yycheck[yyrule] != yytoken) {
            /* Use the default action.  */
            yyrule = yydefact[+*yyesp];
            if (yyrule == 0) {
                YYDPRINTF ((stderr, " Err\n"));
                return 1;
            }
        } else {
            /* Use the action from yytable.  */
            yyrule = yytable[yyrule];
            if (yytable_value_is_error (yyrule)) {
                YYDPRINTF ((stderr, " Err\n"));
                return 1;
            }
            if (0 < yyrule) {
                YYDPRINTF ((stderr, " S%d\n", yyrule));
                return 0;
            }
            yyrule = -yyrule;
        }
        /* By now we know we have to simulate a reduce.  */
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        {
            /* Pop the corresponding number of values from the stack.  */
            YYPTRDIFF_T yylen = yyr2[yyrule];
            /* First pop from the LAC stack as many tokens as possible.  */
            if (yyesp != yyes_prev) {
                YYPTRDIFF_T yysize = yyesp - *yyes + 1;
                if (yylen < yysize) {
                    yyesp -= yylen;
                    yylen = 0;
                } else {
                    yyesp = yyes_prev;
                    yylen -= yysize;
                }
            }
            /* Only afterwards look at the main stack.  */
            if (yylen)
                yyesp = yyes_prev -= yylen;
        }
        /* Push the resulting state of the reduction.  */
        {
            yy_state_fast_t yystate;
            {
                const int yylhs = yyr1[yyrule] - YYNTOKENS;
                const int yyi = yypgoto[yylhs] + *yyesp;
                yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                           ? yytable[yyi]
                           : yydefgoto[yylhs]);
            }
            if (yyesp == yyes_prev) {
                yyesp = *yyes;
                YY_IGNORE_USELESS_CAST_BEGIN
                *yyesp = YY_CAST (yy_state_t, yystate);
                YY_IGNORE_USELESS_CAST_END
            } else {
                if (yy_lac_stack_realloc(yyes_capacity, 1,
#if YYDEBUG
                        " (", ")",
#endif
                                         yyes, yyesa, &yyesp, yyes_prev)) {
                    YYDPRINTF ((stderr, "\n"));
                    return YYENOMEM;
                }YY_IGNORE_USELESS_CAST_BEGIN
                *++yyesp = YY_CAST (yy_state_t, yystate);
                YY_IGNORE_USELESS_CAST_END
            }
            YYDPRINTF ((stderr, " G%d", yystate));
        }
    }
}

/* Context of a parse error.  */
typedef struct {
    yy_state_t *yyssp;
    yy_state_t *yyesa;
    yy_state_t **yyes;
    YYPTRDIFF_T *yyes_capacity;
    yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens(const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn) {
    /* Actual size of YYARG. */
    int yycount = 0;

    int yyx;
    for (yyx = 0; yyx < YYNTOKENS; ++yyx) {
        yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
        if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
            switch (yy_lac(yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym)) {
                case YYENOMEM:
                    return YYENOMEM;
                case 1:
                    continue;
                default:
                    if (!yyarg)
                        ++yycount;
                    else if (yycount == yyargn)
                        return 0;
                    else
                        yyarg[yycount++] = yysym;
            }
    }
    if (yyarg && yycount == 0 && 0 < yyargn)
        yyarg[0] = YYSYMBOL_YYEMPTY;
    return yycount;
}


#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else

/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen(const char *yystr) {
    YYPTRDIFF_T yylen;
    for (yylen = 0; yystr[yylen]; yylen++)
        continue;
    return yylen;
}

# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else

/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy(char *yydest, const char *yysrc) {
    char *yyd = yydest;
    const char *yys = yysrc;

    while ((*yyd++ = *yys++) != '\0')
        continue;

    return yyd - 1;
}

# endif
#endif

#ifndef yytnamerr

/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr(char *yyres, const char *yystr) {
    if (*yystr == '"') {
        YYPTRDIFF_T yyn = 0;
        char const *yyp = yystr;
        for (;;)
            switch (*++yyp) {
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
        do_not_strip_quotes:;
    }

    if (yyres)
        return yystpcpy(yyres, yystr) - yyres;
    else
        return yystrlen(yystr);
}

#endif


static int
yy_syntax_error_arguments(const yypcontext_t *yyctx,
                          yysymbol_kind_t yyarg[], int yyargn) {
    /* Actual size of YYARG. */
    int yycount = 0;
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
    if (yyctx->yytoken != YYSYMBOL_YYEMPTY) {
        int yyn;
        YYDPRINTF ((stderr, "Constructing syntax error message\n"));
        if (yyarg)
            yyarg[yycount] = yyctx->yytoken;
        ++yycount;
        yyn = yypcontext_expected_tokens(yyctx,
                                         yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        if (yyn == YYENOMEM)
            return YYENOMEM;
        else if (yyn == 0)
            YYDPRINTF ((stderr, "No expected tokens.\n"));
        else
            yycount += yyn;
    }
    return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
static int
yysyntax_error(YYPTRDIFF_T *yymsg_alloc, char **yymsg,
               const yypcontext_t *yyctx) {
    enum {
        YYARGS_MAX = 5
    };
    /* Internationalized format string. */
    const char *yyformat = YY_NULLPTR;
    /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
    yysymbol_kind_t yyarg[YYARGS_MAX];
    /* Cumulated lengths of YYARG.  */
    YYPTRDIFF_T yysize = 0;

    /* Actual size of YYARG. */
    int yycount = yy_syntax_error_arguments(yyctx, yyarg, YYARGS_MAX);
    if (yycount == YYENOMEM)
        return YYENOMEM;

    switch (yycount) {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

    /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
    yysize = yystrlen(yyformat) - 2 * yycount + 1;
    {
        int yyi;
        for (yyi = 0; yyi < yycount; ++yyi) {
            YYPTRDIFF_T yysize1
                    = yysize + yytnamerr(YY_NULLPTR, yytname[yyarg[yyi]]);
            if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                yysize = yysize1;
            else
                return YYENOMEM;
        }
    }

    if (*yymsg_alloc < yysize) {
        *yymsg_alloc = 2 * yysize;
        if (!(yysize <= *yymsg_alloc
              && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
            *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
        return -1;
    }

    /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
    {
        char *yyp = *yymsg;
        int yyi = 0;
        while ((*yyp = *yyformat) != '\0')
            if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount) {
                yyp += yytnamerr(yyp, yytname[yyarg[yyi++]]);
                yyformat += 2;
            } else {
                ++yyp;
                ++yyformat;
            }
    }
    return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct(const char *yymsg,
           yysymbol_kind_t yykind, YYSTYPE *yyvaluep, ASTptr *root) {
    YY_USE (yyvaluep);
    YY_USE (root);
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
yyparse(ASTptr *root) {
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

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

    /* Whether LAC context is established.  A Boolean.  */
    int yy_lac_established = 0;
    int yyn;
    /* The return value of yyparse.  */
    int yyresult;
    /* Lookahead symbol kind.  */
    yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
    /* The variables used to return semantic value and location from the
     action routines.  */
    YYSTYPE yyval;

    /* Buffer for error messages, and its allocated size.  */
    char yymsgbuf[128];
    char *yymsg = yymsgbuf;
    YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
                             YYSTACK_ALLOC(YY_CAST(YYSIZE_T, YYSTACK_BYTES(yystacksize))));
            if (!yyptr)
                YYNOMEM;
            YYSTACK_RELOCATE (yyss_alloc, yyss);
            YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
            if (yyss1 != yyssa)
                YYSTACK_FREE(yyss1);
        }
# endif

        yyssp = yyss + yysize - 1;
        yyvsp = yyvs + yysize - 1;

        YY_IGNORE_USELESS_CAST_BEGIN
        YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                YY_CAST(long, yystacksize)));
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
    if (yychar == YYEMPTY) {
        YYDPRINTF ((stderr, "Reading a token\n"));
        yychar = yylex();
    }

    if (yychar <= YYEOF) {
        yychar = YYEOF;
        yytoken = YYSYMBOL_YYEOF;
        YYDPRINTF ((stderr, "Now at end of input.\n"));
    } else if (yychar == YYerror) {
        /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
        yychar = YYUNDEF;
        yytoken = YYSYMBOL_YYerror;
        goto yyerrlab1;
    } else {
        yytoken = YYTRANSLATE (yychar);
        YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken) {
        YY_LAC_ESTABLISH;
        goto yydefault;
    }
    yyn = yytable[yyn];
    if (yyn <= 0) {
        if (yytable_value_is_error (yyn))
            goto yyerrlab;
        yyn = -yyn;
        YY_LAC_ESTABLISH;
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
    YY_LAC_DISCARD ("shift");
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
    yyval = yyvsp[1 - yylen];


    YY_REDUCE_PRINT (yyn);
    {
        int yychar_backup = yychar;
        switch (yyn) {
            case 2: /* CompUnit: CompUnit Decl  */
#line 74 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* CompUnit: BlockAST */
                BlockAST *p = dynamic_cast<BlockAST *>((yyvsp[-1].astptr));
                p->Insertclauses(std::move(dynamic_cast<Vecptr>((yyvsp[0].astptr))->astlist));
                p->Setrange((yyvsp[-1].astptr), (yyvsp[0].astptr));
                (yyval.astptr) = p;

                delete (yyvsp[0].astptr);
            }
#line 1792 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 3: /* CompUnit: CompUnit FuncDef  */
#line 84 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* CompUnit: BlockAST */
                dynamic_cast<BlockAST *>((yyvsp[-1].astptr))->Insertclause((yyvsp[0].astptr));
                (yyvsp[-1].astptr)->Setrange((yyvsp[-1].astptr), (yyvsp[0].astptr));
                (yyval.astptr) = (yyvsp[-1].astptr);
            }
#line 1803 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 4: /* CompUnit: CompUnit ';'  */
#line 91 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* CompUnit: BlockAST */
                (yyval.astptr) = (yyvsp[-1].astptr);
                delete (yyvsp[0].tkptr);
            }
#line 1813 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 5: /* CompUnit: CompHead Decl  */
#line 97 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* CompUnit: BlockAST */
                BlockAST *p = new BlockAST;
                p->Insertclauses(std::move(dynamic_cast<Vecptr>((yyvsp[0].astptr))->astlist));
                p->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                *root = p;
                (yyval.astptr) = p;

                delete (yyvsp[0].astptr);
            }
#line 1828 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 6: /* CompUnit: CompHead FuncDef  */
#line 108 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* CompUnit: BlockAST */
                BlockAST *p = new BlockAST;
                p->Insertclause((yyvsp[0].astptr));
                p->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                *root = p;

                (yyval.astptr) = p;
            }
#line 1842 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 7: /* CompUnit: CompHead ';'  */
#line 118 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* CompUnit: BlockAST */
                (yyval.astptr) = new BlockAST;
                (yyval.astptr)->Setrange((yyvsp[0].tkptr), (yyvsp[0].tkptr));
                *root = (yyval.astptr);

                delete (yyvsp[0].tkptr);
            }
#line 1855 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 8: /* CompHead: %empty  */
#line 128 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Add lib functions */
                // getint
                TKptr p = new Token("getint", IDENT);
                SYMptr q = Newfunsymentry(false, p, nullptr);
                Insertsymentry(q);
                delete p;

                // getch
                p = new Token("getch", IDENT);
                q = Newfunsymentry(false, p, nullptr);
                Insertsymentry(q);
                delete p;

                // getarray
                p = new Token("getarray", IDENT);
                q = Newfunsymentry(false, p, nullptr);
                Insertsymentry(q);

                Pushsymtab();
                TKptr r = new Token("a", IDENT);
                SYMptr s = Newvarsymentry(false, r, nullptr);
                Insertsymentry(s);
                dynamic_cast<VarSYM *>(s)->dim_pro.push_back(1);
                dynamic_cast<VarSYM *>(s)->dim_pro.push_back(0);
                dynamic_cast<FunSYM *>(q)->Insertfparams(s);
                Popsymtab();
                delete r;
                delete p;

                // putint
                p = new Token("putint", IDENT);
                q = Newfunsymentry(true, p, nullptr);
                Insertsymentry(q);

                Pushsymtab();
                r = new Token("a", IDENT);
                s = Newvarsymentry(false, r, nullptr);
                Insertsymentry(s);
                dynamic_cast<VarSYM *>(s)->dim_pro.push_back(1);
                dynamic_cast<FunSYM *>(q)->Insertfparams(s);
                Popsymtab();
                delete r;
                delete p;

                // putch
                p = new Token("putch", IDENT);
                q = Newfunsymentry(true, p, nullptr);
                Insertsymentry(q);

                Pushsymtab();
                r = new Token("a", IDENT);
                s = Newvarsymentry(false, r, nullptr);
                Insertsymentry(s);
                dynamic_cast<VarSYM *>(s)->dim_pro.push_back(1);
                dynamic_cast<FunSYM *>(q)->Insertfparams(s);
                Popsymtab();
                delete r;
                delete p;

                // putarray
                p = new Token("putarray", IDENT);
                q = Newfunsymentry(true, p, nullptr);
                Insertsymentry(q);

                Pushsymtab();
                r = new Token("a", IDENT);
                s = Newvarsymentry(false, r, nullptr);
                Insertsymentry(s);
                dynamic_cast<VarSYM *>(s)->dim_pro.push_back(1);
                dynamic_cast<FunSYM *>(q)->Insertfparams(s);
                delete r;
                r = new Token("b", IDENT);
                s = Newvarsymentry(false, r, nullptr);
                Insertsymentry(s);
                dynamic_cast<VarSYM *>(s)->dim_pro.push_back(1);
                dynamic_cast<VarSYM *>(s)->dim_pro.push_back(0);
                dynamic_cast<FunSYM *>(q)->Insertfparams(s);
                delete r;
                Popsymtab();
                delete p;

                // starttime
                p = new Token("starttime", IDENT);
                q = Newfunsymentry(true, p, nullptr);
                Insertsymentry(q);
                delete p;

                // stoptime
                p = new Token("stoptime", IDENT);
                q = Newfunsymentry(true, p, nullptr);
                Insertsymentry(q);
                delete p;
            }
#line 1954 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 11: /* ConstDefArr: ConstDefArr ',' ConstDef  */
#line 227 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstDefArr: VecAST */
                Vecptr p = dynamic_cast<Vecptr>((yyvsp[-2].astptr));
                p->Insertastlist((yyvsp[0].astptr));
                p->Setrange((yyvsp[-2].astptr), (yyvsp[0].astptr));
                (yyval.astptr) = p;

                delete (yyvsp[-1].tkptr);
            }
#line 1968 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 12: /* ConstDefArr: ConstDef  */
#line 237 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstDefArr: VecAST */
                Vecptr p = new VecAST;
                p->Insertastlist((yyvsp[0].astptr));
                p->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                (yyval.astptr) = p;
            }
#line 1980 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 13: /* ConstDecl: "const" "int" ConstDefArr ';'  */
#line 246 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConDecl: VecAST */
                (yyvsp[-1].astptr)->Setrange((yyvsp[-3].tkptr), (yyvsp[0].tkptr));
                (yyval.astptr) = (yyvsp[-1].astptr);
                delete (yyvsp[-3].tkptr);
                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 1993 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 14: /* ConstArr: ConstArr '[' ConstExp ']'  */
#line 256 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstArr: VecAST */

                /* Maintain positioning info */
                if (!(yyvsp[-3].astptr)->bgnlno)
                    (yyvsp[-3].astptr)->Setrange((yyvsp[-2].tkptr), (yyvsp[0].tkptr));
                dynamic_cast<Vecptr>((yyvsp[-3].astptr))->Insertastlist((yyvsp[-1].astptr));
                (yyvsp[-3].astptr)->Setrange((yyvsp[-3].astptr), (yyvsp[0].tkptr));
                (yyval.astptr) = (yyvsp[-3].astptr);

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2011 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 15: /* ConstArr: %empty  */
#line 270 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstArr: VecAST */
                (yyval.astptr) = new VecAST();
            }
#line 2020 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 16: /* ConstDef: "identifier" ConstArr '=' ConstInitVal  */
#line 276 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstDef: DeclAST */
                /* Type check */
                std::vector<int> tmp = dynamic_cast<Vecptr>((yyvsp[-2].astptr))->Getrawarraytype();
                tmp = Arraydimprocess(tmp);

                // dynamic_cast<LTptr>($4)->Debug(0);

                if (!dynamic_cast<LTptr>((yyvsp[0].astptr))->Checkform(tmp)) {
                    // Side effect of Checkform(...)
                    Reporterror(Error::Arrayinitmismatch, Encodemessage(tmp));
                    errptr = nullptr;
                }
                LTTable t = dynamic_cast<LTptr>((yyvsp[0].astptr))->Flatten(tmp); // Move constructor

                /* new DeclAST */
                DeclAST *p = new DeclAST;
                if (tmp.size() == 1) p->Setrange((yyvsp[-3].tkptr), (yyvsp[-3].tkptr));
                else p->Setrange((yyvsp[-3].tkptr), (yyvsp[-2].astptr));

                /* new SYM */
                SYMptr newsym = Newvarsymentry(true, (yyvsp[-3].tkptr), p);
                Insertsymentry(newsym);
                dynamic_cast<VarSYM *>(newsym)->Setarraytype(std::move(tmp));

                /* Update DeclSYM */
                p->sym = newsym;
                p->init = std::move(t);
                (yyval.astptr) = p;

                /* eeyore: endono */
                p->Setaddr(Setendoaddr());
                Increaseendono();

                delete (yyvsp[-3].tkptr);
                delete (yyvsp[-2].astptr);
                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].astptr);
            }
#line 2064 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 17: /* ConstInitValArr: ConstInitValArr ',' ConstInitVal  */
#line 317 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstInitValArr: ListTree */
                dynamic_cast<LTptr>((yyvsp[-2].astptr))->Insertsublist((yyvsp[0].astptr));
                /* Maintain positioning info */
                (yyvsp[-2].astptr)->Setrange((yyvsp[-2].astptr), (yyvsp[0].astptr));

                (yyval.astptr) = (yyvsp[-2].astptr);
                delete (yyvsp[-1].tkptr);
            }
#line 2078 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 18: /* ConstInitValArr: ConstInitVal  */
#line 327 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstInitValArr: ListTree */
                LTptr tmp = new ListTree;
                tmp->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                tmp->Insertsublist((yyvsp[0].astptr));
                (yyval.astptr) = tmp;
            }
#line 2090 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 19: /* ConstInitVal: ConstExp  */
#line 336 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstInitVal: ListTree */
                (yyval.astptr) = new ListTree((yyvsp[0].astptr));
            }
#line 2099 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 20: /* ConstInitVal: '{' '}'  */
#line 341 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstInitVal: ListTree */
                (yyval.astptr) = new ListTree((yyvsp[-1].tkptr), (yyvsp[0].tkptr));

                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2111 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 21: /* ConstInitVal: '{' ConstInitValArr '}'  */
#line 349 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstInitVal: ListTree */
                (yyval.astptr) = (yyvsp[-1].astptr);
                (yyval.astptr)->Setrange((yyvsp[-2].tkptr), (yyvsp[0].tkptr));

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2124 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 22: /* VarDefArr: VarDefArr ',' VarDef  */
#line 359 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* VarDefArr: VecAST */
                Vecptr p = dynamic_cast<Vecptr>((yyvsp[-2].astptr));
                p->Insertastlist((yyvsp[0].astptr));
                p->Setrange((yyvsp[-2].astptr), (yyvsp[0].astptr));
                (yyval.astptr) = p;

                delete (yyvsp[-1].tkptr);
            }
#line 2138 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 23: /* VarDefArr: VarDef  */
#line 369 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {

                /* VarDefArr: VecAST */
                Vecptr p = new VecAST;
                p->Insertastlist((yyvsp[0].astptr));
                p->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                (yyval.astptr) = p;

            }
#line 2152 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 24: /* VarDecl: "int" VarDefArr ';'  */
#line 380 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* VarDecl: VecAST */
                (yyvsp[-1].astptr)->Setrange((yyvsp[-2].tkptr), (yyvsp[0].tkptr));
                (yyval.astptr) = (yyvsp[-1].astptr);

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2165 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 25: /* VarDef: "identifier" ConstArr  */
#line 390 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* VarDef: DeclAST */
                /* new DeclAST */
                DeclAST *p = new DeclAST;
                p->Setrange((yyvsp[-1].tkptr), (yyvsp[0].astptr));

                /* array type */
                std::vector<int> arrtype = dynamic_cast<Vecptr>((yyvsp[0].astptr))->Getrawarraytype();
                if (arrtype.empty())
                    p->Setrange((yyvsp[-1].tkptr), (yyvsp[-1].tkptr)); // If ConstArr is empty, update positioning info
                arrtype = Arraydimprocess(arrtype);

                /* new SYM */
                SYMptr newsym = Newvarsymentry(false, (yyvsp[-1].tkptr), p);
                Insertsymentry(newsym);
                dynamic_cast<VarSYM *>(newsym)->Setarraytype(std::move(arrtype));

                /* Update info */
                p->sym = newsym;
                (yyval.astptr) = p;

                /* eeyore: endono */
                p->Setaddr(Setendoaddr());
                Increaseendono();

                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].astptr);
            }
#line 2197 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 26: /* VarDef: "identifier" ConstArr '=' InitVal  */
#line 418 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* VarDef: DeclAST */
                /* type check */
                std::vector<int> arrtype = dynamic_cast<Vecptr>((yyvsp[-2].astptr))->Getrawarraytype();
                arrtype = Arraydimprocess(arrtype);

                if (!dynamic_cast<LTptr>((yyvsp[0].astptr))->Checkform(arrtype)) {
                    // Side effect of Checkform(...)
                    Reporterror(Error::Arrayinitmismatch, Encodemessage(arrtype));
                    errptr = nullptr;
                }
                LTTable t = dynamic_cast<LTptr>((yyvsp[0].astptr))->Flatten(arrtype);

                /* new DeclAST */
                DeclAST *p = new DeclAST;
                if (arrtype.size() == 1) p->Setrange((yyvsp[-3].tkptr), (yyvsp[-3].tkptr));
                else p->Setrange((yyvsp[-3].tkptr), (yyvsp[-2].astptr));

                /* new SYM */
                SYMptr newsym = Newvarsymentry(false, (yyvsp[-3].tkptr), p);
                Insertsymentry(newsym);
                dynamic_cast<VarSYM *>(newsym)->Setarraytype(std::move(arrtype));

                /* Update DeclAST */
                p->sym = newsym;
                p->init = std::move(t);
                (yyval.astptr) = p;

                /* eeyore: endono */
                p->Setaddr(Setendoaddr());
                Increaseendono();

                delete (yyvsp[-3].tkptr);
                delete (yyvsp[-2].astptr);
                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].astptr);
            }
#line 2239 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 27: /* InitValArr: InitValArr ',' InitVal  */
#line 457 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* InitValArr: ListTree */
                dynamic_cast<LTptr>((yyvsp[-2].astptr))->Insertsublist((yyvsp[0].astptr));
                (yyvsp[-2].astptr)->Setrange((yyvsp[-2].astptr), (yyvsp[0].astptr));
                (yyval.astptr) = (yyvsp[-2].astptr);

                delete (yyvsp[-1].tkptr);
            }
#line 2252 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 28: /* InitValArr: InitVal  */
#line 466 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* InitValArr: ListTree */
                LTptr p = new ListTree;
                p->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                p->Insertsublist((yyvsp[0].astptr));
                (yyval.astptr) = p;
            }
#line 2264 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 29: /* InitVal: Exp  */
#line 475 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* InitVal: ListTree */
                (yyval.astptr) = new ListTree((yyvsp[0].astptr));
                Verifyanumber((yyvsp[0].astptr));
            }
#line 2274 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 30: /* InitVal: '{' '}'  */
#line 481 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* InitVal: ListTree */
                (yyval.astptr) = new ListTree((yyvsp[-1].tkptr), (yyvsp[0].tkptr));
                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2285 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 31: /* InitVal: '{' InitValArr '}'  */
#line 488 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* InitVal: ListTree */
                (yyval.astptr) = (yyvsp[-1].astptr);
                (yyval.astptr)->Setrange((yyvsp[-2].tkptr), (yyvsp[0].tkptr));
                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2297 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 32: /* FuncFParams: FuncFParams ',' FuncFParam  */
#line 498 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncFParams: VecAST */
                dynamic_cast<Vecptr>((yyvsp[-2].astptr))->Insertastlist((yyvsp[0].astptr));
                (yyvsp[-2].astptr)->Setrange((yyvsp[-2].astptr), (yyvsp[0].astptr));
                (yyval.astptr) = (yyvsp[-2].astptr);

                delete (yyvsp[-1].tkptr);
            }
#line 2310 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 33: /* FuncFParams: FuncFParam  */
#line 507 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncFParams: VecAST */
                Vecptr p = new VecAST;
                p->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                p->Insertastlist((yyvsp[0].astptr));
                (yyval.astptr) = p;
            }
#line 2322 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 34: /* FuncFParam: "int" "identifier"  */
#line 516 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncFParam: DeclAST */
                /* new DeclAST */
                DeclAST *p = new DeclAST;
                p->Setrange((yyvsp[-1].tkptr), (yyvsp[0].tkptr));

                /* new SYM */
                SYMptr newsym = Newvarsymentry(false, (yyvsp[0].tkptr), p);
                Insertsymentry(newsym);
                dynamic_cast<VarSYM *>(newsym)->Setarraytype(std::vector<int>(1, 1));

                /* Update DeclAST */
                p->sym = newsym;
                (yyval.astptr) = p;

                /* eeyore: paramno */
                p->Setaddr(Setparamaddr());
                Increaseparamno();

                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2349 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 35: /* FuncFParam: "int" "identifier" '[' ']' ConstArr  */
#line 539 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncFParam: DeclAST */
                /* new DeclAST */
                DeclAST *p = new DeclAST;
                p->Setrange((yyvsp[-4].tkptr), (yyvsp[0].astptr));

                /* new SYM */
                SYMptr newsym = Newvarsymentry(false, (yyvsp[-3].tkptr), p);
                Insertsymentry(newsym);

                std::vector<int> arrtype = dynamic_cast<Vecptr>((yyvsp[0].astptr))->Getrawarraytype();
                if (arrtype.empty()) p->Setrange((yyvsp[-4].tkptr), (yyvsp[-1].tkptr));
                /* If ConstArr is empty, update positioning info */
                arrtype = Arraydimprocess(arrtype);
                arrtype.push_back(0); // pointer
                dynamic_cast<VarSYM *>(newsym)->Setarraytype(std::move(arrtype));

                p->sym = newsym;
                (yyval.astptr) = p;

                /* eeyore: paramno */
                p->Setaddr(Setparamaddr());
                Increaseparamno();

                delete (yyvsp[-4].tkptr);
                delete (yyvsp[-3].tkptr);
                delete (yyvsp[-2].tkptr);
                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].astptr);
            }
#line 2384 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 36: /* FuncDef: FuncDefproto '{' BlockItemArr '}'  */
#line 571 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncDef: FunDefAST */
                FunDefAST *p = dynamic_cast<FunDefAST *>((yyvsp[-3].astptr));
                p->body = (yyvsp[-1].astptr);
                //$1->Setrange($1, $4);
                (yyval.astptr) = (yyvsp[-3].astptr);

                /* Check main */
                if (*(p->sym->strptr) == "main") {
                    if (dynamic_cast<FunSYM *>(p->sym)->isvoid) {
                        errptr = (yyvsp[-3].astptr);
                        Reporterror(Error::Voidmain);
                        errptr = nullptr;
                    }
                    if (dynamic_cast<FunSYM *>(p->sym)->fparams.size()) {
                        errptr = (yyvsp[-3].astptr);
                        Reporterror(Error::Parammain);
                        errptr = nullptr;
                    }
                    mainptr = p;
                }

                /* End of the scope */
                Popsymtab();

                /* eeyore: reset paramno */
                Resetparamno();

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2420 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 37: /* FuncDefproto: FuncDefHead ')'  */
#line 604 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncDefproto: FunDefAST */
                //$1->Setrange($1, $2);
                (yyval.astptr) = (yyvsp[-1].astptr);

                delete (yyvsp[0].tkptr);
            }
#line 2432 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 38: /* FuncDefproto: FuncDefHead FuncFParams ')'  */
#line 612 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncDefproto: FunDefAST */
                //$1->Setrange($1, $3);
                FunDefAST *p = dynamic_cast<FunDefAST *>((yyvsp[-2].astptr));
                p->fparams = dynamic_cast<Vecptr>((yyvsp[-1].astptr))->Getfparams(); // Move assignment

                /* bind SYMs of fparams to FunDefAST */
                for (auto i: p->fparams)
                    dynamic_cast<FunSYM *>(p->sym)->fparams.push_back(dynamic_cast<DeclAST *>(i)->sym);
                (yyval.astptr) = (yyvsp[-2].astptr);

                delete (yyvsp[-1].astptr);
                delete (yyvsp[0].tkptr);
            }
#line 2451 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 39: /* FuncDefHead: "int" "identifier" '('  */
#line 628 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncDefHead: FunDefAST */
                /* new FunDefAST */
                FunDefAST *p = new FunDefAST;
                p->Setrange((yyvsp[-1].tkptr), (yyvsp[-1].tkptr));

                /* new SYM */
                SYMptr newsym = Newfunsymentry(false, (yyvsp[-1].tkptr), p);
                Insertsymentry(newsym);

                /* Update FunDefAST */
                p->sym = newsym;
                (yyval.astptr) = p;

                /* New scope for its formal parameters */
                Pushsymtab();
                curfundef = p;

                /* eeyore: reset paramno */
                Resetparamno();
                /* eeyore: set funcaddr */
                p->Setaddr(Setfuncaddr(*(p->sym->strptr)));

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2483 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 40: /* FuncDefHead: "void" "identifier" '('  */
#line 656 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncDefHead: FunDefAST */
                /* new FunDefAST */
                FunDefAST *p = new FunDefAST;
                p->Setrange((yyvsp[-1].tkptr), (yyvsp[-1].tkptr));

                /* new SYM */
                SYMptr newsym = Newfunsymentry(true, (yyvsp[-1].tkptr), p);
                Insertsymentry(newsym);

                /* Update FunDefAST */
                p->sym = newsym;
                (yyval.astptr) = p;

                /* New scope for its formal parameters */
                Pushsymtab();
                curfundef = p;

                /* eeyore: reset paramno */
                Resetparamno();
                /* eeyore: set func addr */
                p->Setaddr(Setfuncaddr(*(p->sym->strptr)));

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2515 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 41: /* BlockItemArr: BlockItemArr Decl  */
#line 686 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* BlockItemArr: BlockAST */
                if (!(yyvsp[-1].astptr)->bgnlno)
                    (yyvsp[-1].astptr)->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                else
                    (yyvsp[-1].astptr)->Setrange((yyvsp[-1].astptr), (yyvsp[0].astptr));
                BlockAST *p = dynamic_cast<BlockAST *>((yyvsp[-1].astptr));
                p->Insertclauses(std::move(dynamic_cast<Vecptr>((yyvsp[0].astptr))->astlist));
                (yyval.astptr) = (yyvsp[-1].astptr);

                delete (yyvsp[0].astptr);
            }
#line 2532 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 42: /* BlockItemArr: BlockItemArr Stmt  */
#line 699 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* BlockItemArr: BlockAST */
                if ((yyvsp[0].astptr)) {
                    if (!(yyvsp[-1].astptr)->bgnlno)
                        (yyvsp[-1].astptr)->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                    else
                        (yyvsp[-1].astptr)->Setrange((yyvsp[-1].astptr), (yyvsp[0].astptr));
                }
                BlockAST *p = dynamic_cast<BlockAST *>((yyvsp[-1].astptr));
                p->Insertclause((yyvsp[0].astptr));
                (yyval.astptr) = (yyvsp[-1].astptr);
            }
#line 2549 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 43: /* BlockItemArr: %empty  */
#line 712 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* BlockItemArr: BlockAST */
                (yyval.astptr) = new BlockAST;
            }
#line 2558 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 44: /* Block: '{' BlockStart BlockItemArr '}'  */
#line 718 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* BlockItemArr: BlockAST */
                Popsymtab();

                (yyvsp[-1].astptr)->Setrange((yyvsp[-3].tkptr), (yyvsp[0].tkptr));
                (yyval.astptr) = (yyvsp[-1].astptr);

                delete (yyvsp[-3].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2573 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 45: /* BlockStart: %empty  */
#line 730 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* BlockStart: null */
                Pushsymtab();
                (yyval.astptr) = nullptr;
            }
#line 2583 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 46: /* Stmt: ';'  */
#line 737 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: polymorphism */
                (yyval.astptr) = nullptr;
            }
#line 2592 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 47: /* Stmt: LVal '=' Exp ';'  */
#line 742 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: AssignAST */
                AssignAST *p = new AssignAST;
                p->Setrange((yyvsp[-3].astptr), (yyvsp[-1].astptr));

                /* Check that constant cannot be assigned */
                LvalAST *q = dynamic_cast<LvalAST *>((yyvsp[-3].astptr));
                if (dynamic_cast<VarSYM *>(q->sym)->isconst) {
                    errptr = (yyvsp[-3].astptr);
                    Reporterror(Error::Assignconstant, *(q->sym->strptr), q->sym->astptr);
                    errptr = nullptr;
                }

                /* Check that Lval is a single element */
                if (!q->Isanumber()) {
                    // Side Effect: Isanumber() will modify errptr
                    Reporterror(Error::Assignarray, std::string(), q->sym->astptr);
                    errptr = nullptr;
                }

                /* Check that exp is a single element */
                Verifyanumber((yyvsp[-1].astptr));

                p->lval = (yyvsp[-3].astptr);
                p->exp = (yyvsp[-1].astptr);
                (yyval.astptr) = p;

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2627 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 48: /* Stmt: Exp ';'  */
#line 773 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: polymorphism */
                if ((yyvsp[-1].astptr)->type != ASTType::Funcall)
                    Verifyanumber((yyvsp[-1].astptr));
                (yyval.astptr) = (yyvsp[-1].astptr);

                delete (yyvsp[0].tkptr);
            }
#line 2640 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 49: /* Stmt: Block  */
#line 782 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: BlockAST */
                (yyval.astptr) = (yyvsp[0].astptr);
            }
#line 2649 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 50: /* Stmt: "if" '(' Cond ')' Stmt  */
#line 787 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: IfAST */
                IfAST *p = new IfAST;
                if ((yyvsp[0].astptr))
                    p->Setrange((yyvsp[-4].tkptr), (yyvsp[0].astptr));
                else
                    p->Setrange((yyvsp[-4].tkptr), (yyvsp[-1].tkptr));
                p->cond = (yyvsp[-2].astptr);
                p->then = (yyvsp[0].astptr);
                (yyval.astptr) = p;

                delete (yyvsp[-4].tkptr);
                delete (yyvsp[-3].tkptr);
                delete (yyvsp[-1].tkptr);
            }
#line 2669 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 51: /* Stmt: "if" '(' Cond ')' Stmt "else" Stmt  */
#line 803 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: IfAST */
                IfAST *p = new IfAST;
                if ((yyvsp[0].astptr))
                    p->Setrange((yyvsp[-6].tkptr), (yyvsp[0].astptr));
                else
                    p->Setrange((yyvsp[-6].tkptr), (yyvsp[-1].tkptr));
                p->cond = (yyvsp[-4].astptr);
                p->then = (yyvsp[-2].astptr);
                p->els = (yyvsp[0].astptr);
                (yyval.astptr) = p;

                delete (yyvsp[-6].tkptr);
                delete (yyvsp[-5].tkptr);
                delete (yyvsp[-3].tkptr);
                delete (yyvsp[-1].tkptr);
            }
#line 2691 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 52: /* Stmt: WhileHead '(' Cond ')' Stmt  */
#line 821 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: WhileAST */
                WhileAST *p = dynamic_cast<WhileAST *>((yyvsp[-4].astptr));
                p->cond = (yyvsp[-2].astptr);
                p->body = (yyvsp[0].astptr);
                if ((yyvsp[0].astptr))
                    p->Setrange((yyvsp[-4].astptr), (yyvsp[0].astptr));
                else
                    p->Setrange((yyvsp[-4].astptr), (yyvsp[-1].tkptr));
                (yyval.astptr) = p;

                /* Pop whilestk */
                Popwhilestk();

                delete (yyvsp[-3].tkptr);
                delete (yyvsp[-1].tkptr);
            }
#line 2713 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 53: /* Stmt: "break" ';'  */
#line 839 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: BreakAST */
                if (Isemptywhilestk()) {
                    errptr = new BaseAST((yyvsp[-1].tkptr)->lno, (yyvsp[-1].tkptr)->bgn, (yyvsp[-1].tkptr)->lno,
                                         (yyvsp[-1].tkptr)->end);
                    Reporterror(Error::Nowhiletoescape, "break");
                    delete errptr;
                    errptr = nullptr;
                    (yyval.astptr) = nullptr;
                } else {
                    BreakAST *p = new BreakAST;
                    p->Setrange((yyvsp[-1].tkptr), (yyvsp[-1].tkptr));
                    (yyval.astptr) = p;
                }

                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2736 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 54: /* Stmt: "continue" ';'  */
#line 858 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: ContAST */

                /* No while to continue */
                if (Isemptywhilestk()) {
                    errptr = new BaseAST((yyvsp[-1].tkptr)->lno, (yyvsp[-1].tkptr)->bgn, (yyvsp[-1].tkptr)->lno,
                                         (yyvsp[-1].tkptr)->end);
                    Reporterror(Error::Nowhiletoescape, "continue");
                    delete errptr;
                    errptr = nullptr;
                    (yyval.astptr) = nullptr;
                } else {
                    ContAST *p = new ContAST;
                    p->Setrange((yyvsp[-1].tkptr), (yyvsp[-1].tkptr));
                    (yyval.astptr) = p;
                }

                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2761 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 55: /* Stmt: "return" ';'  */
#line 879 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: RetAST */
                RetAST *p = new RetAST;
                p->Setrange((yyvsp[-1].tkptr), (yyvsp[0].tkptr));

                /* Check ret value */
                FunSYM *q = dynamic_cast<FunSYM *>(dynamic_cast<FunDefAST *>(p->back)->sym);
                if (!q->isvoid) {
                    errptr = p;
                    ASTptr t = new BaseAST(q->lno, q->bgn, q->lno, q->end);
                    Reporterror(Error::Noreturnvalue, *(q->strptr), t);
                    delete t;
                    errptr = nullptr;
                    /* return 0 by default */
                    TKptr r = new Token(0, INT_CONST);
                    BinaryAST *s = new BinaryAST(r);
                    delete r;
                    p->exp = s;
                }

                (yyval.astptr) = p;

                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2791 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 56: /* Stmt: "return" Exp ';'  */
#line 905 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Stmt: RetAST */
                RetAST *p = new RetAST;
                p->Setrange((yyvsp[-2].tkptr), (yyvsp[0].tkptr));

                /* Check ret value */
                FunSYM *q = dynamic_cast<FunSYM *>(dynamic_cast<FunDefAST *>(p->back)->sym);
                if (q->isvoid) {
                    errptr = p;
                    ASTptr t = new BaseAST(q->lno, q->bgn, q->lno, q->end);
                    Reporterror(Error::Returnavalue, *(q->strptr), t);
                    delete t;
                    errptr = nullptr;
                    /* Neglect Exp, since compilation will terminate eventually */
                    delete (yyvsp[-1].astptr);
                } else p->exp = (yyvsp[-1].astptr);
                (yyval.astptr) = p;

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2818 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 57: /* WhileHead: "while"  */
#line 929 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* WhileHead: WhileAST */
                WhileAST *p = new WhileAST;
                p->Setrange((yyvsp[0].tkptr), (yyvsp[0].tkptr));
                (yyval.astptr) = p;

                /* Update whilestk */
                Pushwhilestk(p);

                delete (yyvsp[0].tkptr);
            }
#line 2834 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 58: /* Exp: AddExp  */
#line 943 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Exp: polymorphism (BinaryAST, UnaryAST, FunCallAST, LvalAST) */
                (yyvsp[0].astptr)->Eval();
                (yyval.astptr) = (yyvsp[0].astptr);
            }
#line 2844 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 59: /* Cond: LOrExp  */
#line 950 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* Cond: polymorphism */
                (yyvsp[0].astptr)->Eval();
                (yyval.astptr) = (yyvsp[0].astptr);
                Verifyanumber((yyvsp[0].astptr));
            }
#line 2855 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 60: /* ExpArr: ExpArr '[' Exp ']'  */
#line 958 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ExpArr: VecAST */
                if (!(yyvsp[-3].astptr)->bgnlno)
                    (yyvsp[-3].astptr)->Setrange((yyvsp[-2].tkptr), (yyvsp[0].tkptr));
                else (yyvsp[-3].astptr)->Setrange((yyvsp[-3].astptr), (yyvsp[0].tkptr));

                dynamic_cast<Vecptr>((yyvsp[-3].astptr))->Insertastlist((yyvsp[-1].astptr));
                (yyval.astptr) = (yyvsp[-3].astptr);

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2872 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 61: /* ExpArr: %empty  */
#line 971 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ExpArr: VecAST */
                (yyval.astptr) = new VecAST;
            }
#line 2881 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 62: /* LVal: "identifier" ExpArr  */
#line 977 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* LVal: LvalAST */
                (yyval.astptr) = new LvalAST((yyvsp[-1].tkptr), (yyvsp[0].astptr));
                if (!(yyvsp[0].astptr)->bgnlno)
                    (yyval.astptr)->Setrange((yyvsp[-1].tkptr), (yyvsp[-1].tkptr));

                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].astptr);
            }
#line 2895 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 63: /* PrimaryExp: '(' Exp ')'  */
#line 988 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* PrimaryExp: polymorphism */
                (yyval.astptr) = (yyvsp[-1].astptr);
                (yyval.astptr)->Setrange((yyvsp[-2].tkptr), (yyvsp[0].tkptr));

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2908 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 65: /* PrimaryExp: "constant"  */
#line 998 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* PrimaryExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[0].tkptr));
                delete (yyvsp[0].tkptr);
            }
#line 2918 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 66: /* FuncRParams: FuncRParams ',' Exp  */
#line 1005 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncRParams: VecAST */
                dynamic_cast<VecAST *>((yyvsp[-2].astptr))->Insertastlist((yyvsp[0].astptr));
                (yyvsp[-2].astptr)->Setrange((yyvsp[-2].astptr), (yyvsp[0].astptr));

                delete (yyvsp[-1].tkptr);
            }
#line 2930 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 67: /* FuncRParams: Exp  */
#line 1013 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* FuncRParams: VecAST */
                VecAST *p = new VecAST;
                p->Setrange((yyvsp[0].astptr), (yyvsp[0].astptr));
                p->Insertastlist((yyvsp[0].astptr));
                (yyval.astptr) = p;
            }
#line 2942 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 69: /* UnaryExp: "identifier" '(' ')'  */
#line 1023 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* UnaryExp: polymorphism */

                FunCallAST *ptr = new FunCallAST((yyvsp[-2].tkptr));

                ptr->Setrange((yyvsp[-2].tkptr), (yyvsp[0].tkptr));
                (yyval.astptr) = ptr;

                /* Do the params match? */
                ptr->Verifyfuncall();

                delete (yyvsp[-2].tkptr);
                delete (yyvsp[-1].tkptr);
                delete (yyvsp[0].tkptr);
            }
#line 2962 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 70: /* UnaryExp: "identifier" '(' FuncRParams ')'  */
#line 1039 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* UnaryExp: polymorphism */

                FunCallAST *ptr = new FunCallAST((yyvsp[-3].tkptr));

                ptr->rparams = dynamic_cast<Vecptr>((yyvsp[-1].astptr))->Getrparams(); // Move Constructor
                ptr->Setrange((yyvsp[-3].tkptr), (yyvsp[0].tkptr));
                (yyval.astptr) = ptr;

                /* Check the params list */
                ptr->Verifyfuncall();

                delete (yyvsp[-3].tkptr);
                delete (yyvsp[-2].tkptr);
                delete (yyvsp[-1].astptr);
                delete (yyvsp[0].tkptr);
            }
#line 2984 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 71: /* UnaryExp: UnaryOp UnaryExp  */
#line 1057 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* UnaryExp: polymorphism */

                /* Only when UnaryExp is a unaryexp should coalesce be called */
                if ((yyvsp[0].astptr)->type == ASTType::Unary) {
                    dynamic_cast<UnaryAST *>((yyvsp[0].astptr))->Coalesce((yyvsp[-1].tkptr));
                    (yyvsp[0].astptr)->Setrange((yyvsp[-1].tkptr), (yyvsp[0].astptr));
                    (yyval.astptr) = (yyvsp[0].astptr);
                }
                    /* Only when UnaryExp is not a unaryexp should constructor be called */
                else (yyval.astptr) = new UnaryAST((yyvsp[0].astptr), (yyvsp[-1].tkptr));

                delete (yyvsp[-1].tkptr);
            }
#line 3003 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 76: /* MulExp: MulExp '*' UnaryExp  */
#line 1078 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* MulExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3013 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 77: /* MulExp: MulExp '/' UnaryExp  */
#line 1084 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* MulExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3023 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 78: /* MulExp: MulExp '%' UnaryExp  */
#line 1090 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* MulExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3033 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 80: /* AddExp: AddExp '+' MulExp  */
#line 1098 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* AddExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3043 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 81: /* AddExp: AddExp '-' MulExp  */
#line 1104 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* AddExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3053 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 83: /* RelExp: RelExp '<' AddExp  */
#line 1112 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* RelExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3063 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 84: /* RelExp: RelExp '>' AddExp  */
#line 1118 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* RelExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3073 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 85: /* RelExp: RelExp "<=" AddExp  */
#line 1124 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* RelExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3083 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 86: /* RelExp: RelExp ">=" AddExp  */
#line 1130 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* RelExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3093 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 88: /* EqExp: EqExp "==" RelExp  */
#line 1138 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* EqExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3103 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 89: /* EqExp: EqExp "!=" RelExp  */
#line 1144 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* EqExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3113 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 91: /* LAndExp: LAndExp "&&" EqExp  */
#line 1152 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* LAndExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3123 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 93: /* LOrExp: LOrExp "||" LAndExp  */
#line 1160 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* LOrExp: polymorphism */
                (yyval.astptr) = new BinaryAST((yyvsp[-2].astptr), (yyvsp[0].astptr), (yyvsp[-1].tkptr));
                delete (yyvsp[-1].tkptr);
            }
#line 3133 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;

            case 94: /* ConstExp: AddExp  */
#line 1167 "/cygdrive/d/Projects/Compiler/src/parser.y"
            {
                /* ConstExp: polymorphism */

                (yyvsp[0].astptr)->Eval();
                if (!(yyvsp[0].astptr)->Isconst()) {
                    errptr = (yyvsp[0].astptr);
                    Reporterror(Error::Notconstexp);
                    errptr = nullptr;
                }
                (yyval.astptr) = (yyvsp[0].astptr);
            }
#line 3149 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"
                break;


#line 3153 "/cygdrive/d/Projects/Compiler/src/parser.tab.cpp"

            default:
                break;
        }
        if (yychar_backup != yychar)
            YY_LAC_DISCARD ("yychar change");
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
    YY_SYMBOL_PRINT ("-> $$ =", YY_CAST(yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

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
    if (!yyerrstatus) {
        ++yynerrs;
        {
            yypcontext_t yyctx
                    = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
            char const *yymsgp = YY_("syntax error");
            int yysyntax_error_status;
            if (yychar != YYEMPTY)
                YY_LAC_ESTABLISH;
            yysyntax_error_status = yysyntax_error(&yymsg_alloc, &yymsg, &yyctx);
            if (yysyntax_error_status == 0)
                yymsgp = yymsg;
            else if (yysyntax_error_status == -1) {
                if (yymsg != yymsgbuf)
                    YYSTACK_FREE(yymsg);
                yymsg = YY_CAST (char *,
                                 YYSTACK_ALLOC(YY_CAST(YYSIZE_T, yymsg_alloc)));
                if (yymsg) {
                    yysyntax_error_status
                            = yysyntax_error(&yymsg_alloc, &yymsg, &yyctx);
                    yymsgp = yymsg;
                } else {
                    yymsg = yymsgbuf;
                    yymsg_alloc = sizeof yymsgbuf;
                    yysyntax_error_status = YYENOMEM;
                }
            }
            yyerror(root, yymsgp);
            if (yysyntax_error_status == YYENOMEM)
                YYNOMEM;
        }
    }

    if (yyerrstatus == 3) {
        /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

        if (yychar <= YYEOF) {
            /* Return failure if at end of input.  */
            if (yychar == YYEOF)
                YYABORT;
        } else {
            yydestruct("Error: discarding",
                       yytoken, &yylval, root);
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
    for (;;) {
        yyn = yypact[yystate];
        if (!yypact_value_is_default (yyn)) {
            yyn += YYSYMBOL_YYerror;
            if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror) {
                yyn = yytable[yyn];
                if (0 < yyn)
                    break;
            }
        }

        /* Pop the current state because it cannot handle the error token.  */
        if (yyssp == yyss)
            YYABORT;


        yydestruct("Error: popping",
                   YY_ACCESSING_SYMBOL (yystate), yyvsp, root);
        YYPOPSTACK (1);
        yystate = *yyssp;
        YY_STACK_PRINT (yyss, yyssp);
    }

    /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
    YY_LAC_DISCARD ("error recovery");

    YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
    *++yyvsp = yylval;
    YY_IGNORE_MAYBE_UNINITIALIZED_END


    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL(yyn), yyvsp, yylsp);

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
    yyerror(root, YY_("memory exhausted"));
    yyresult = 2;
    goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
    yyreturnlab:
    if (yychar != YYEMPTY) {
        /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
        yytoken = YYTRANSLATE (yychar);
        yydestruct("Cleanup: discarding lookahead",
                   yytoken, &yylval, root);
    }
    /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
    YYPOPSTACK (yylen);
    YY_STACK_PRINT (yyss, yyssp);
    while (yyssp != yyss) {
        yydestruct("Cleanup: popping",
                   YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, root);
        YYPOPSTACK (1);
    }
#ifndef yyoverflow
    if (yyss != yyssa)
        YYSTACK_FREE(yyss);
#endif
    if (yyes != yyesa)
        YYSTACK_FREE(yyes);
    if (yymsg != yymsgbuf)
        YYSTACK_FREE(yymsg);
    return yyresult;
}

#line 1180 "/cygdrive/d/Projects/Compiler/src/parser.y"


/*** Supporting Routines ***/
void yyerror(ASTptr *root, const char *str) {
    std::string tmp = str;
    //std::transform(tmp.begin(), tmp.end(), tmp.begin(), tolower);
    errptr = new BaseAST(lineno, tokenpos - tokenwidth, lineno, tokenpos);
    Reporterror(Error::Invalidsyntax, tmp);
    if (errptr) {
        delete errptr;
        errptr = nullptr;
    }
}
