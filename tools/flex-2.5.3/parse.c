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
#line 9 "./parse.y"

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /home/daffy/u0/vern/flex/RCS/parse.y,v 2.28 95/04/21 11:51:51 vern Exp $ */


/* Some versions of bison are broken in that they use alloca() but don't
 * declare it properly.  The following is the patented (just kidding!)
 * #ifdef chud to fix the problem, courtesy of Francois Pinard.
 */
#ifdef YYBISON
/* AIX requires this to be the first thing in the file.  What a piece.  */
# ifdef _AIX
 #pragma alloca
# endif
#endif

#include "flexdef.h"

/* The remainder of the alloca() cruft has to come after including flexdef.h,
 * so HAVE_ALLOCA_H is (possibly) defined.
 */
#ifdef YYBISON
# ifdef __GNUC__
#  ifndef alloca
#   define alloca __builtin_alloca
#  endif
# else
#  if HAVE_ALLOCA_H
#   include <alloca.h>
#  else
#   ifdef __hpux
void *alloca ();
#   else
#    ifdef __TURBOC__
#     include <malloc.h>
#    else
char *alloca ();
#    endif
#   endif
#  endif
# endif
#endif

/* Bletch, ^^^^ that was ugly! */


int pat, scnum, eps, headcnt, trailcnt, anyccl, lastchar, i, rulelen;
int trlcontxt, xcluflg, currccl, cclsorted, varlength, variable_trail_rule;

int *scon_stk;
int scon_stk_ptr;

static int madeany = false;  /* whether we've made the '.' character class */
int previous_continued_action;	/* whether the previous rule's action was '|' */

/* Expand a POSIX character class expression. */
#define CCL_EXPR(func) \
	{ \
	int c; \
	for ( c = 0; c < csize; ++c ) \
		if ( isascii(c) && func(c) ) \
			ccladd( currccl, c ); \
	}

/* While POSIX defines isblank(), it's not ANSI C. */
#define IS_BLANK(c) ((c) == ' ' || (c) == '\t')

/* On some over-ambitious machines, such as DEC Alpha's, the default
 * token type is "long" instead of "int"; this leads to problems with
 * declaring yylval in flexdef.h.  But so far, all the yacc's I've seen
 * wrap their definitions of YYSTYPE with "#ifndef YYSTYPE"'s, so the
 * following should ensure that the default token type is "int".
 */
#define YYSTYPE int


#line 173 "y.tab.c"

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
    CHAR = 258,                    /* CHAR  */
    NUMBER = 259,                  /* NUMBER  */
    SECTEND = 260,                 /* SECTEND  */
    SCDECL = 261,                  /* SCDECL  */
    XSCDECL = 262,                 /* XSCDECL  */
    NAME = 263,                    /* NAME  */
    PREVCCL = 264,                 /* PREVCCL  */
    EOF_OP = 265,                  /* EOF_OP  */
    OPTION_OP = 266,               /* OPTION_OP  */
    OPT_OUTFILE = 267,             /* OPT_OUTFILE  */
    OPT_PREFIX = 268,              /* OPT_PREFIX  */
    OPT_YYCLASS = 269,             /* OPT_YYCLASS  */
    CCE_ALNUM = 270,               /* CCE_ALNUM  */
    CCE_ALPHA = 271,               /* CCE_ALPHA  */
    CCE_BLANK = 272,               /* CCE_BLANK  */
    CCE_CNTRL = 273,               /* CCE_CNTRL  */
    CCE_DIGIT = 274,               /* CCE_DIGIT  */
    CCE_GRAPH = 275,               /* CCE_GRAPH  */
    CCE_LOWER = 276,               /* CCE_LOWER  */
    CCE_PRINT = 277,               /* CCE_PRINT  */
    CCE_PUNCT = 278,               /* CCE_PUNCT  */
    CCE_SPACE = 279,               /* CCE_SPACE  */
    CCE_UPPER = 280,               /* CCE_UPPER  */
    CCE_XDIGIT = 281               /* CCE_XDIGIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CHAR 258
#define NUMBER 259
#define SECTEND 260
#define SCDECL 261
#define XSCDECL 262
#define NAME 263
#define PREVCCL 264
#define EOF_OP 265
#define OPTION_OP 266
#define OPT_OUTFILE 267
#define OPT_PREFIX 268
#define OPT_YYCLASS 269
#define CCE_ALNUM 270
#define CCE_ALPHA 271
#define CCE_BLANK 272
#define CCE_CNTRL 273
#define CCE_DIGIT 274
#define CCE_GRAPH 275
#define CCE_LOWER 276
#define CCE_PRINT 277
#define CCE_PUNCT 278
#define CCE_SPACE 279
#define CCE_UPPER 280
#define CCE_XDIGIT 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_CHAR = 3,                       /* CHAR  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_SECTEND = 5,                    /* SECTEND  */
  YYSYMBOL_SCDECL = 6,                     /* SCDECL  */
  YYSYMBOL_XSCDECL = 7,                    /* XSCDECL  */
  YYSYMBOL_NAME = 8,                       /* NAME  */
  YYSYMBOL_PREVCCL = 9,                    /* PREVCCL  */
  YYSYMBOL_EOF_OP = 10,                    /* EOF_OP  */
  YYSYMBOL_OPTION_OP = 11,                 /* OPTION_OP  */
  YYSYMBOL_OPT_OUTFILE = 12,               /* OPT_OUTFILE  */
  YYSYMBOL_OPT_PREFIX = 13,                /* OPT_PREFIX  */
  YYSYMBOL_OPT_YYCLASS = 14,               /* OPT_YYCLASS  */
  YYSYMBOL_CCE_ALNUM = 15,                 /* CCE_ALNUM  */
  YYSYMBOL_CCE_ALPHA = 16,                 /* CCE_ALPHA  */
  YYSYMBOL_CCE_BLANK = 17,                 /* CCE_BLANK  */
  YYSYMBOL_CCE_CNTRL = 18,                 /* CCE_CNTRL  */
  YYSYMBOL_CCE_DIGIT = 19,                 /* CCE_DIGIT  */
  YYSYMBOL_CCE_GRAPH = 20,                 /* CCE_GRAPH  */
  YYSYMBOL_CCE_LOWER = 21,                 /* CCE_LOWER  */
  YYSYMBOL_CCE_PRINT = 22,                 /* CCE_PRINT  */
  YYSYMBOL_CCE_PUNCT = 23,                 /* CCE_PUNCT  */
  YYSYMBOL_CCE_SPACE = 24,                 /* CCE_SPACE  */
  YYSYMBOL_CCE_UPPER = 25,                 /* CCE_UPPER  */
  YYSYMBOL_CCE_XDIGIT = 26,                /* CCE_XDIGIT  */
  YYSYMBOL_27_ = 27,                       /* '='  */
  YYSYMBOL_28_n_ = 28,                     /* '\n'  */
  YYSYMBOL_29_ = 29,                       /* '{'  */
  YYSYMBOL_30_ = 30,                       /* '}'  */
  YYSYMBOL_31_ = 31,                       /* '^'  */
  YYSYMBOL_32_ = 32,                       /* '<'  */
  YYSYMBOL_33_ = 33,                       /* '>'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_36_ = 36,                       /* '$'  */
  YYSYMBOL_37_ = 37,                       /* '|'  */
  YYSYMBOL_38_ = 38,                       /* '/'  */
  YYSYMBOL_39_ = 39,                       /* '+'  */
  YYSYMBOL_40_ = 40,                       /* '?'  */
  YYSYMBOL_41_ = 41,                       /* '.'  */
  YYSYMBOL_42_ = 42,                       /* '"'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '['  */
  YYSYMBOL_46_ = 46,                       /* ']'  */
  YYSYMBOL_47_ = 47,                       /* '-'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_goal = 49,                      /* goal  */
  YYSYMBOL_initlex = 50,                   /* initlex  */
  YYSYMBOL_sect1 = 51,                     /* sect1  */
  YYSYMBOL_sect1end = 52,                  /* sect1end  */
  YYSYMBOL_startconddecl = 53,             /* startconddecl  */
  YYSYMBOL_namelist1 = 54,                 /* namelist1  */
  YYSYMBOL_options = 55,                   /* options  */
  YYSYMBOL_optionlist = 56,                /* optionlist  */
  YYSYMBOL_option = 57,                    /* option  */
  YYSYMBOL_sect2 = 58,                     /* sect2  */
  YYSYMBOL_initforrule = 59,               /* initforrule  */
  YYSYMBOL_flexrule = 60,                  /* flexrule  */
  YYSYMBOL_scon_stk_ptr = 61,              /* scon_stk_ptr  */
  YYSYMBOL_scon = 62,                      /* scon  */
  YYSYMBOL_namelist2 = 63,                 /* namelist2  */
  YYSYMBOL_sconname = 64,                  /* sconname  */
  YYSYMBOL_rule = 65,                      /* rule  */
  YYSYMBOL_re = 66,                        /* re  */
  YYSYMBOL_re2 = 67,                       /* re2  */
  YYSYMBOL_series = 68,                    /* series  */
  YYSYMBOL_singleton = 69,                 /* singleton  */
  YYSYMBOL_fullccl = 70,                   /* fullccl  */
  YYSYMBOL_ccl = 71,                       /* ccl  */
  YYSYMBOL_ccl_expr = 72,                  /* ccl_expr  */
  YYSYMBOL_string = 73                     /* string  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   110

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  107

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


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
      28,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    42,     2,    36,     2,     2,     2,
      43,    44,    34,    39,    35,    47,    41,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      32,    27,    33,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,    31,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,    37,    30,     2,     2,     2,     2,
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
      25,    26
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   112,   112,   142,   149,   150,   151,   152,   156,   164,
     167,   171,   174,   177,   181,   184,   185,   188,   193,   195,
     199,   201,   203,   207,   219,   255,   279,   302,   307,   310,
     313,   331,   334,   336,   338,   342,   365,   420,   423,   466,
     484,   490,   495,   522,   530,   534,   541,   547,   553,   581,
     595,   614,   636,   654,   661,   664,   667,   678,   681,   688,
     716,   727,   735,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   758,   761,   772
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
  "\"end of file\"", "error", "\"invalid token\"", "CHAR", "NUMBER",
  "SECTEND", "SCDECL", "XSCDECL", "NAME", "PREVCCL", "EOF_OP", "OPTION_OP",
  "OPT_OUTFILE", "OPT_PREFIX", "OPT_YYCLASS", "CCE_ALNUM", "CCE_ALPHA",
  "CCE_BLANK", "CCE_CNTRL", "CCE_DIGIT", "CCE_GRAPH", "CCE_LOWER",
  "CCE_PRINT", "CCE_PUNCT", "CCE_SPACE", "CCE_UPPER", "CCE_XDIGIT", "'='",
  "'\\n'", "'{'", "'}'", "'^'", "'<'", "'>'", "'*'", "','", "'$'", "'|'",
  "'/'", "'+'", "'?'", "'.'", "'\"'", "'('", "')'", "'['", "']'", "'-'",
  "$accept", "goal", "initlex", "sect1", "sect1end", "startconddecl",
  "namelist1", "options", "optionlist", "option", "sect2", "initforrule",
  "flexrule", "scon_stk_ptr", "scon", "namelist2", "sconname", "rule",
  "re", "re2", "series", "singleton", "fullccl", "ccl", "ccl_expr",
  "string", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-52)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -52,     1,    78,   -52,   -52,    81,   -52,   -52,   -52,   -52,
     -52,     6,   -52,    -2,     5,   -52,   -52,    20,   -14,     9,
      16,   -52,    39,   -52,    31,   -52,    51,    74,    82,    61,
      30,   -52,    -1,   -52,   -52,   -52,   -52,   -52,   -52,    58,
     -52,    44,   -52,   -52,   -52,   -52,    24,   -52,   -52,    24,
      66,    70,   -52,    25,    24,    24,    41,   -52,   -52,    91,
     -52,   -52,    26,    27,   -52,     0,   -52,   -52,    24,   -52,
      59,    41,    96,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
      32,    54,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,    24,   -52,     4,   -52,
      99,   -52,     2,   -52,    73,   -52,   -52
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     7,     0,     8,     9,    10,    16,
      22,     0,     5,    14,    31,    13,    12,     4,     0,     0,
       0,    15,    28,     2,    23,    11,     0,     0,     0,     0,
       0,    22,     0,    17,    18,    19,    30,    34,    35,     0,
      33,    31,    27,    56,    53,    26,     0,    51,    76,     0,
      62,     0,    25,    39,     0,    41,    44,    52,    29,     0,
      21,    24,     0,     0,    62,     0,    20,    38,     0,    42,
      36,    43,     0,    45,    46,    47,    32,    75,    54,    55,
       0,    60,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    57,    61,    40,    37,     0,    58,
       0,    50,     0,    59,     0,    49,    48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
      75,    80,   -52,   -52,   -52,   -52,    46,    62,    23,   -52,
      42,   -51,   -52,    43,   -52,   -52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     5,    10,    11,    17,    12,    13,    21,
      14,    23,    51,    30,    24,    39,    40,    52,    53,    54,
      55,    56,    57,    65,    95,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,     3,    43,    81,    71,   -23,   104,    15,    44,    45,
      18,    19,    20,    26,    16,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    43,    25,    77,
      46,    37,   105,    44,   101,    81,    27,    22,    38,   102,
      47,    48,    49,    28,    50,    71,    94,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    33,
      31,    67,    68,    69,    68,    47,    48,    49,    78,    50,
      72,    79,    63,    29,    60,    73,    22,    70,    99,     4,
      74,    75,    34,    -6,    -6,    -6,     6,     7,     8,    -6,
      35,    58,     9,    59,    36,    97,    68,    64,    66,    38,
      98,   100,   103,   106,    32,    76,    41,    80,    61,     0,
      96
};

static const yytype_int8 yycheck[] =
{
       1,     0,     3,     3,    55,     0,     4,     1,     9,    10,
      12,    13,    14,    27,     8,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     3,     8,     3,
      31,     1,    30,     9,    30,     3,    27,    32,     8,    35,
      41,    42,    43,    27,    45,    96,    46,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     8,
      29,    36,    37,    38,    37,    41,    42,    43,    42,    45,
      29,    44,    49,    34,    30,    34,    32,    54,    46,     1,
      39,    40,     8,     5,     6,     7,     5,     6,     7,    11,
       8,    33,    11,    35,    33,    36,    37,    31,    28,     8,
       4,    47,     3,    30,    24,    59,    31,    64,    46,    -1,
      68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     1,    51,     5,     6,     7,    11,
      52,    53,    55,    56,    58,     1,     8,    54,    12,    13,
      14,    57,    32,    59,    62,     8,    27,    27,    27,    34,
      61,    29,    59,     8,     8,     8,    33,     1,     8,    63,
      64,    58,     1,     3,     9,    10,    31,    41,    42,    43,
      45,    60,    65,    66,    67,    68,    69,    70,    33,    35,
      30,    65,    73,    66,    31,    71,    28,    36,    37,    38,
      66,    69,    29,    34,    39,    40,    64,     3,    42,    44,
      71,     3,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    46,    72,    68,    36,     4,    46,
      47,    30,    35,     3,     4,    30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    51,    51,    51,    51,    52,    53,
      53,    54,    54,    54,    55,    56,    56,    57,    57,    57,
      58,    58,    58,    59,    60,    60,    60,    60,    61,    62,
      62,    62,    63,    63,    63,    64,    65,    65,    65,    65,
      66,    66,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     0,     3,     2,     0,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     0,     3,     3,     3,
       5,     5,     0,     0,     2,     1,     1,     1,     0,     4,
       3,     0,     3,     1,     1,     1,     2,     3,     2,     1,
       3,     1,     2,     2,     1,     2,     2,     2,     6,     5,
       4,     1,     1,     1,     3,     3,     1,     3,     4,     4,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0
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
  case 2: /* goal: initlex sect1 sect1end sect2 initforrule  */
#line 113 "./parse.y"
                        { /* add default rule */
			int def_rule;

			pat = cclinit();
			cclnegate( pat );

			def_rule = mkstate( -pat );

			/* Remember the number of the default rule so we
			 * don't generate "can't match" warnings for it.
			 */
			default_rule = num_rules;

			finish_rule( def_rule, false, 0, 0 );

			for ( i = 1; i <= lastsc; ++i )
				scset[i] = mkbranch( scset[i], def_rule );

			if ( spprdflt )
				add_action(
				"YY_FATAL_ERROR( \"flex scanner jammed\" )" );
			else
				add_action( "ECHO" );

			add_action( ";\n\tYY_BREAK\n" );
			}
#line 1426 "y.tab.c"
    break;

  case 3: /* initlex: %empty  */
#line 142 "./parse.y"
                        { /* initialize for processing rules */

			/* Create default DFA start condition. */
			scinstal( "INITIAL", false );
			}
#line 1436 "y.tab.c"
    break;

  case 7: /* sect1: error  */
#line 153 "./parse.y"
                        { synerr( "unknown error processing section 1" ); }
#line 1442 "y.tab.c"
    break;

  case 8: /* sect1end: SECTEND  */
#line 157 "./parse.y"
                        {
			check_options();
			scon_stk = allocate_integer_array( lastsc + 1 );
			scon_stk_ptr = 0;
			}
#line 1452 "y.tab.c"
    break;

  case 9: /* startconddecl: SCDECL  */
#line 165 "./parse.y"
                        { xcluflg = false; }
#line 1458 "y.tab.c"
    break;

  case 10: /* startconddecl: XSCDECL  */
#line 168 "./parse.y"
                        { xcluflg = true; }
#line 1464 "y.tab.c"
    break;

  case 11: /* namelist1: namelist1 NAME  */
#line 172 "./parse.y"
                        { scinstal( nmstr, xcluflg ); }
#line 1470 "y.tab.c"
    break;

  case 12: /* namelist1: NAME  */
#line 175 "./parse.y"
                        { scinstal( nmstr, xcluflg ); }
#line 1476 "y.tab.c"
    break;

  case 13: /* namelist1: error  */
#line 178 "./parse.y"
                        { synerr( "bad start condition list" ); }
#line 1482 "y.tab.c"
    break;

  case 17: /* option: OPT_OUTFILE '=' NAME  */
#line 189 "./parse.y"
                        {
			outfilename = copy_string( nmstr );
			did_outfilename = 1;
			}
#line 1491 "y.tab.c"
    break;

  case 18: /* option: OPT_PREFIX '=' NAME  */
#line 194 "./parse.y"
                        { prefix = copy_string( nmstr ); }
#line 1497 "y.tab.c"
    break;

  case 19: /* option: OPT_YYCLASS '=' NAME  */
#line 196 "./parse.y"
                        { yyclass = copy_string( nmstr ); }
#line 1503 "y.tab.c"
    break;

  case 20: /* sect2: sect2 scon initforrule flexrule '\n'  */
#line 200 "./parse.y"
                        { scon_stk_ptr = yyvsp[-3]; }
#line 1509 "y.tab.c"
    break;

  case 21: /* sect2: sect2 scon '{' sect2 '}'  */
#line 202 "./parse.y"
                        { scon_stk_ptr = yyvsp[-3]; }
#line 1515 "y.tab.c"
    break;

  case 23: /* initforrule: %empty  */
#line 207 "./parse.y"
                        {
			/* Initialize for a parse of one rule. */
			trlcontxt = variable_trail_rule = varlength = false;
			trailcnt = headcnt = rulelen = 0;
			current_state_type = STATE_NORMAL;
			previous_continued_action = continued_action;
			in_rule = true;

			new_rule();
			}
#line 1530 "y.tab.c"
    break;

  case 24: /* flexrule: '^' rule  */
#line 220 "./parse.y"
                        {
			pat = yyvsp[0];
			finish_rule( pat, variable_trail_rule,
				headcnt, trailcnt );

			if ( scon_stk_ptr > 0 )
				{
				for ( i = 1; i <= scon_stk_ptr; ++i )
					scbol[scon_stk[i]] =
						mkbranch( scbol[scon_stk[i]],
								pat );
				}

			else
				{
				/* Add to all non-exclusive start conditions,
				 * including the default (0) start condition.
				 */

				for ( i = 1; i <= lastsc; ++i )
					if ( ! scxclu[i] )
						scbol[i] = mkbranch( scbol[i],
									pat );
				}

			if ( ! bol_needed )
				{
				bol_needed = true;

				if ( performance_report > 1 )
					pinpoint_message(
			"'^' operator results in sub-optimal performance" );
				}
			}
#line 1569 "y.tab.c"
    break;

  case 25: /* flexrule: rule  */
#line 256 "./parse.y"
                        {
			pat = yyvsp[0];
			finish_rule( pat, variable_trail_rule,
				headcnt, trailcnt );

			if ( scon_stk_ptr > 0 )
				{
				for ( i = 1; i <= scon_stk_ptr; ++i )
					scset[scon_stk[i]] =
						mkbranch( scset[scon_stk[i]],
								pat );
				}

			else
				{
				for ( i = 1; i <= lastsc; ++i )
					if ( ! scxclu[i] )
						scset[i] =
							mkbranch( scset[i],
								pat );
				}
			}
#line 1596 "y.tab.c"
    break;

  case 26: /* flexrule: EOF_OP  */
#line 280 "./parse.y"
                        {
			if ( scon_stk_ptr > 0 )
				build_eof_action();
	
			else
				{
				/* This EOF applies to all start conditions
				 * which don't already have EOF actions.
				 */
				for ( i = 1; i <= lastsc; ++i )
					if ( ! sceof[i] )
						scon_stk[++scon_stk_ptr] = i;

				if ( scon_stk_ptr == 0 )
					warn(
			"all start conditions already have <<EOF>> rules" );

				else
					build_eof_action();
				}
			}
#line 1622 "y.tab.c"
    break;

  case 27: /* flexrule: error  */
#line 303 "./parse.y"
                        { synerr( "unrecognized rule" ); }
#line 1628 "y.tab.c"
    break;

  case 28: /* scon_stk_ptr: %empty  */
#line 307 "./parse.y"
                        { yyval = scon_stk_ptr; }
#line 1634 "y.tab.c"
    break;

  case 29: /* scon: '<' scon_stk_ptr namelist2 '>'  */
#line 311 "./parse.y"
                        { yyval = yyvsp[-2]; }
#line 1640 "y.tab.c"
    break;

  case 30: /* scon: '<' '*' '>'  */
#line 314 "./parse.y"
                        {
			yyval = scon_stk_ptr;

			for ( i = 1; i <= lastsc; ++i )
				{
				int j;

				for ( j = 1; j <= scon_stk_ptr; ++j )
					if ( scon_stk[j] == i )
						break;

				if ( j > scon_stk_ptr )
					scon_stk[++scon_stk_ptr] = i;
				}
			}
#line 1660 "y.tab.c"
    break;

  case 31: /* scon: %empty  */
#line 331 "./parse.y"
                        { yyval = scon_stk_ptr; }
#line 1666 "y.tab.c"
    break;

  case 34: /* namelist2: error  */
#line 339 "./parse.y"
                        { synerr( "bad start condition list" ); }
#line 1672 "y.tab.c"
    break;

  case 35: /* sconname: NAME  */
#line 343 "./parse.y"
                        {
			if ( (scnum = sclookup( nmstr )) == 0 )
				format_pinpoint_message(
					"undeclared start condition %s",
					nmstr );
			else
				{
				for ( i = 1; i <= scon_stk_ptr; ++i )
					if ( scon_stk[i] == scnum )
						{
						format_warn(
							"<%s> specified twice",
							scname[scnum] );
						break;
						}

				if ( i > scon_stk_ptr )
					scon_stk[++scon_stk_ptr] = scnum;
				}
			}
#line 1697 "y.tab.c"
    break;

  case 36: /* rule: re2 re  */
#line 366 "./parse.y"
                        {
			if ( transchar[lastst[yyvsp[0]]] != SYM_EPSILON )
				/* Provide final transition \now/ so it
				 * will be marked as a trailing context
				 * state.
				 */
				yyvsp[0] = link_machines( yyvsp[0],
						mkstate( SYM_EPSILON ) );

			mark_beginning_as_normal( yyvsp[0] );
			current_state_type = STATE_NORMAL;

			if ( previous_continued_action )
				{
				/* We need to treat this as variable trailing
				 * context so that the backup does not happen
				 * in the action but before the action switch
				 * statement.  If the backup happens in the
				 * action, then the rules "falling into" this
				 * one's action will *also* do the backup,
				 * erroneously.
				 */
				if ( ! varlength || headcnt != 0 )
					warn(
		"trailing context made variable due to preceding '|' action" );

				/* Mark as variable. */
				varlength = true;
				headcnt = 0;
				}

			if ( lex_compat || (varlength && headcnt == 0) )
				{ /* variable trailing context rule */
				/* Mark the first part of the rule as the
				 * accepting "head" part of a trailing
				 * context rule.
				 *
				 * By the way, we didn't do this at the
				 * beginning of this production because back
				 * then current_state_type was set up for a
				 * trail rule, and add_accept() can create
				 * a new state ...
				 */
				add_accept( yyvsp[-1],
					num_rules | YY_TRAILING_HEAD_MASK );
				variable_trail_rule = true;
				}
			
			else
				trailcnt = rulelen;

			yyval = link_machines( yyvsp[-1], yyvsp[0] );
			}
#line 1755 "y.tab.c"
    break;

  case 37: /* rule: re2 re '$'  */
#line 421 "./parse.y"
                        { synerr( "trailing context used twice" ); }
#line 1761 "y.tab.c"
    break;

  case 38: /* rule: re '$'  */
#line 424 "./parse.y"
                        {
			headcnt = 0;
			trailcnt = 1;
			rulelen = 1;
			varlength = false;

			current_state_type = STATE_TRAILING_CONTEXT;

			if ( trlcontxt )
				{
				synerr( "trailing context used twice" );
				yyval = mkstate( SYM_EPSILON );
				}

			else if ( previous_continued_action )
				{
				/* See the comment in the rule for "re2 re"
				 * above.
				 */
				warn(
		"trailing context made variable due to preceding '|' action" );

				varlength = true;
				}

			if ( lex_compat || varlength )
				{
				/* Again, see the comment in the rule for
				 * "re2 re" above.
				 */
				add_accept( yyvsp[-1],
					num_rules | YY_TRAILING_HEAD_MASK );
				variable_trail_rule = true;
				}

			trlcontxt = true;

			eps = mkstate( SYM_EPSILON );
			yyval = link_machines( yyvsp[-1],
				link_machines( eps, mkstate( '\n' ) ) );
			}
#line 1807 "y.tab.c"
    break;

  case 39: /* rule: re  */
#line 467 "./parse.y"
                        {
			yyval = yyvsp[0];

			if ( trlcontxt )
				{
				if ( lex_compat || (varlength && headcnt == 0) )
					/* Both head and trail are
					 * variable-length.
					 */
					variable_trail_rule = true;
				else
					trailcnt = rulelen;
				}
			}
#line 1826 "y.tab.c"
    break;

  case 40: /* re: re '|' series  */
#line 485 "./parse.y"
                        {
			varlength = true;
			yyval = mkor( yyvsp[-2], yyvsp[0] );
			}
#line 1835 "y.tab.c"
    break;

  case 41: /* re: series  */
#line 491 "./parse.y"
                        { yyval = yyvsp[0]; }
#line 1841 "y.tab.c"
    break;

  case 42: /* re2: re '/'  */
#line 496 "./parse.y"
                        {
			/* This rule is written separately so the
			 * reduction will occur before the trailing
			 * series is parsed.
			 */

			if ( trlcontxt )
				synerr( "trailing context used twice" );
			else
				trlcontxt = true;

			if ( varlength )
				/* We hope the trailing context is
				 * fixed-length.
				 */
				varlength = false;
			else
				headcnt = rulelen;

			rulelen = 0;

			current_state_type = STATE_TRAILING_CONTEXT;
			yyval = yyvsp[-1];
			}
#line 1870 "y.tab.c"
    break;

  case 43: /* series: series singleton  */
#line 523 "./parse.y"
                        {
			/* This is where concatenation of adjacent patterns
			 * gets done.
			 */
			yyval = link_machines( yyvsp[-1], yyvsp[0] );
			}
#line 1881 "y.tab.c"
    break;

  case 44: /* series: singleton  */
#line 531 "./parse.y"
                        { yyval = yyvsp[0]; }
#line 1887 "y.tab.c"
    break;

  case 45: /* singleton: singleton '*'  */
#line 535 "./parse.y"
                        {
			varlength = true;

			yyval = mkclos( yyvsp[-1] );
			}
#line 1897 "y.tab.c"
    break;

  case 46: /* singleton: singleton '+'  */
#line 542 "./parse.y"
                        {
			varlength = true;
			yyval = mkposcl( yyvsp[-1] );
			}
#line 1906 "y.tab.c"
    break;

  case 47: /* singleton: singleton '?'  */
#line 548 "./parse.y"
                        {
			varlength = true;
			yyval = mkopt( yyvsp[-1] );
			}
#line 1915 "y.tab.c"
    break;

  case 48: /* singleton: singleton '{' NUMBER ',' NUMBER '}'  */
#line 554 "./parse.y"
                        {
			varlength = true;

			if ( yyvsp[-3] > yyvsp[-1] || yyvsp[-3] < 0 )
				{
				synerr( "bad iteration values" );
				yyval = yyvsp[-5];
				}
			else
				{
				if ( yyvsp[-3] == 0 )
					{
					if ( yyvsp[-1] <= 0 )
						{
						synerr(
						"bad iteration values" );
						yyval = yyvsp[-5];
						}
					else
						yyval = mkopt(
							mkrep( yyvsp[-5], 1, yyvsp[-1] ) );
					}
				else
					yyval = mkrep( yyvsp[-5], yyvsp[-3], yyvsp[-1] );
				}
			}
#line 1946 "y.tab.c"
    break;

  case 49: /* singleton: singleton '{' NUMBER ',' '}'  */
#line 582 "./parse.y"
                        {
			varlength = true;

			if ( yyvsp[-2] <= 0 )
				{
				synerr( "iteration value must be positive" );
				yyval = yyvsp[-4];
				}

			else
				yyval = mkrep( yyvsp[-4], yyvsp[-2], INFINITY );
			}
#line 1963 "y.tab.c"
    break;

  case 50: /* singleton: singleton '{' NUMBER '}'  */
#line 596 "./parse.y"
                        {
			/* The singleton could be something like "(foo)",
			 * in which case we have no idea what its length
			 * is, so we punt here.
			 */
			varlength = true;

			if ( yyvsp[-1] <= 0 )
				{
				synerr( "iteration value must be positive" );
				yyval = yyvsp[-3];
				}

			else
				yyval = link_machines( yyvsp[-3],
						copysingl( yyvsp[-3], yyvsp[-1] - 1 ) );
			}
#line 1985 "y.tab.c"
    break;

  case 51: /* singleton: '.'  */
#line 615 "./parse.y"
                        {
			if ( ! madeany )
				{
				/* Create the '.' character class. */
				anyccl = cclinit();
				ccladd( anyccl, '\n' );
				cclnegate( anyccl );

				if ( useecs )
					mkeccl( ccltbl + cclmap[anyccl],
						ccllen[anyccl], nextecm,
						ecgroup, csize, csize );

				madeany = true;
				}

			++rulelen;

			yyval = mkstate( -anyccl );
			}
#line 2010 "y.tab.c"
    break;

  case 52: /* singleton: fullccl  */
#line 637 "./parse.y"
                        {
			if ( ! cclsorted )
				/* Sort characters for fast searching.  We
				 * use a shell sort since this list could
				 * be large.
				 */
				cshell( ccltbl + cclmap[yyvsp[0]], ccllen[yyvsp[0]], true );

			if ( useecs )
				mkeccl( ccltbl + cclmap[yyvsp[0]], ccllen[yyvsp[0]],
					nextecm, ecgroup, csize, csize );

			++rulelen;

			yyval = mkstate( -yyvsp[0] );
			}
#line 2031 "y.tab.c"
    break;

  case 53: /* singleton: PREVCCL  */
#line 655 "./parse.y"
                        {
			++rulelen;

			yyval = mkstate( -yyvsp[0] );
			}
#line 2041 "y.tab.c"
    break;

  case 54: /* singleton: '"' string '"'  */
#line 662 "./parse.y"
                        { yyval = yyvsp[-1]; }
#line 2047 "y.tab.c"
    break;

  case 55: /* singleton: '(' re ')'  */
#line 665 "./parse.y"
                        { yyval = yyvsp[-1]; }
#line 2053 "y.tab.c"
    break;

  case 56: /* singleton: CHAR  */
#line 668 "./parse.y"
                        {
			++rulelen;

			if ( caseins && yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
				yyvsp[0] = clower( yyvsp[0] );

			yyval = mkstate( yyvsp[0] );
			}
#line 2066 "y.tab.c"
    break;

  case 57: /* fullccl: '[' ccl ']'  */
#line 679 "./parse.y"
                        { yyval = yyvsp[-1]; }
#line 2072 "y.tab.c"
    break;

  case 58: /* fullccl: '[' '^' ccl ']'  */
#line 682 "./parse.y"
                        {
			cclnegate( yyvsp[-1] );
			yyval = yyvsp[-1];
			}
#line 2081 "y.tab.c"
    break;

  case 59: /* ccl: ccl CHAR '-' CHAR  */
#line 689 "./parse.y"
                        {
			if ( caseins )
				{
				if ( yyvsp[-2] >= 'A' && yyvsp[-2] <= 'Z' )
					yyvsp[-2] = clower( yyvsp[-2] );
				if ( yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
					yyvsp[0] = clower( yyvsp[0] );
				}

			if ( yyvsp[-2] > yyvsp[0] )
				synerr( "negative range in character class" );

			else
				{
				for ( i = yyvsp[-2]; i <= yyvsp[0]; ++i )
					ccladd( yyvsp[-3], i );

				/* Keep track if this ccl is staying in
				 * alphabetical order.
				 */
				cclsorted = cclsorted && (yyvsp[-2] > lastchar);
				lastchar = yyvsp[0];
				}

			yyval = yyvsp[-3];
			}
#line 2112 "y.tab.c"
    break;

  case 60: /* ccl: ccl CHAR  */
#line 717 "./parse.y"
                        {
			if ( caseins && yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
				yyvsp[0] = clower( yyvsp[0] );

			ccladd( yyvsp[-1], yyvsp[0] );
			cclsorted = cclsorted && (yyvsp[0] > lastchar);
			lastchar = yyvsp[0];
			yyval = yyvsp[-1];
			}
#line 2126 "y.tab.c"
    break;

  case 61: /* ccl: ccl ccl_expr  */
#line 728 "./parse.y"
                        {
			/* Too hard to properly maintain cclsorted. */
			cclsorted = false;
			yyval = yyvsp[-1];
			}
#line 2136 "y.tab.c"
    break;

  case 62: /* ccl: %empty  */
#line 735 "./parse.y"
                        {
			cclsorted = true;
			lastchar = 0;
			currccl = yyval = cclinit();
			}
#line 2146 "y.tab.c"
    break;

  case 63: /* ccl_expr: CCE_ALNUM  */
#line 742 "./parse.y"
                                { CCL_EXPR(isalnum) }
#line 2152 "y.tab.c"
    break;

  case 64: /* ccl_expr: CCE_ALPHA  */
#line 743 "./parse.y"
                                { CCL_EXPR(isalpha) }
#line 2158 "y.tab.c"
    break;

  case 65: /* ccl_expr: CCE_BLANK  */
#line 744 "./parse.y"
                                { CCL_EXPR(IS_BLANK) }
#line 2164 "y.tab.c"
    break;

  case 66: /* ccl_expr: CCE_CNTRL  */
#line 745 "./parse.y"
                                { CCL_EXPR(iscntrl) }
#line 2170 "y.tab.c"
    break;

  case 67: /* ccl_expr: CCE_DIGIT  */
#line 746 "./parse.y"
                                { CCL_EXPR(isdigit) }
#line 2176 "y.tab.c"
    break;

  case 68: /* ccl_expr: CCE_GRAPH  */
#line 747 "./parse.y"
                                { CCL_EXPR(isgraph) }
#line 2182 "y.tab.c"
    break;

  case 69: /* ccl_expr: CCE_LOWER  */
#line 748 "./parse.y"
                                { CCL_EXPR(islower) }
#line 2188 "y.tab.c"
    break;

  case 70: /* ccl_expr: CCE_PRINT  */
#line 749 "./parse.y"
                                { CCL_EXPR(isprint) }
#line 2194 "y.tab.c"
    break;

  case 71: /* ccl_expr: CCE_PUNCT  */
#line 750 "./parse.y"
                                { CCL_EXPR(ispunct) }
#line 2200 "y.tab.c"
    break;

  case 72: /* ccl_expr: CCE_SPACE  */
#line 751 "./parse.y"
                                { CCL_EXPR(isspace) }
#line 2206 "y.tab.c"
    break;

  case 73: /* ccl_expr: CCE_UPPER  */
#line 752 "./parse.y"
                                {
				if ( caseins )
					CCL_EXPR(islower)
				else
					CCL_EXPR(isupper)
				}
#line 2217 "y.tab.c"
    break;

  case 74: /* ccl_expr: CCE_XDIGIT  */
#line 758 "./parse.y"
                                { CCL_EXPR(isxdigit) }
#line 2223 "y.tab.c"
    break;

  case 75: /* string: string CHAR  */
#line 762 "./parse.y"
                        {
			if ( caseins && yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
				yyvsp[0] = clower( yyvsp[0] );

			++rulelen;

			yyval = link_machines( yyvsp[-1], mkstate( yyvsp[0] ) );
			}
#line 2236 "y.tab.c"
    break;

  case 76: /* string: %empty  */
#line 772 "./parse.y"
                        { yyval = mkstate( SYM_EPSILON ); }
#line 2242 "y.tab.c"
    break;


#line 2246 "y.tab.c"

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

#line 775 "./parse.y"



/* build_eof_action - build the "<<EOF>>" action for the active start
 *                    conditions
 */

void build_eof_action()
	{
	register int i;
	char action_text[MAXLINE];

	for ( i = 1; i <= scon_stk_ptr; ++i )
		{
		if ( sceof[scon_stk[i]] )
			format_pinpoint_message(
				"multiple <<EOF>> rules for start condition %s",
				scname[scon_stk[i]] );

		else
			{
			sceof[scon_stk[i]] = true;
			sprintf( action_text, "case YY_STATE_EOF(%s):\n",
				scname[scon_stk[i]] );
			add_action( action_text );
			}
		}

	line_directive_out( (FILE *) 0, 1 );

	/* This isn't a normal rule after all - don't count it as
	 * such, so we don't have any holes in the rule numbering
	 * (which make generating "rule can never match" warnings
	 * more difficult.
	 */
	--num_rules;
	++num_eof_rules;
	}


/* format_synerr - write out formatted syntax error */

void format_synerr( msg, arg )
char msg[], arg[];
	{
	char errmsg[MAXLINE];

	(void) sprintf( errmsg, msg, arg );
	synerr( errmsg );
	}


/* synerr - report a syntax error */

void synerr( str )
char str[];
	{
	syntaxerror = true;
	pinpoint_message( str );
	}


/* format_warn - write out formatted warning */

void format_warn( msg, arg )
char msg[], arg[];
	{
	char warn_msg[MAXLINE];

	(void) sprintf( warn_msg, msg, arg );
	warn( warn_msg );
	}


/* warn - report a warning, unless -w was given */

void warn( str )
char str[];
	{
	line_warning( str, linenum );
	}

/* format_pinpoint_message - write out a message formatted with one string,
 *			     pinpointing its location
 */

void format_pinpoint_message( msg, arg )
char msg[], arg[];
	{
	char errmsg[MAXLINE];

	(void) sprintf( errmsg, msg, arg );
	pinpoint_message( errmsg );
	}


/* pinpoint_message - write out a message, pinpointing its location */

void pinpoint_message( str )
char str[];
	{
	line_pinpoint( str, linenum );
	}


/* line_warning - report a warning at a given line, unless -w was given */

void line_warning( str, line )
char str[];
int line;
	{
	char warning[MAXLINE];

	if ( ! nowarn )
		{
		sprintf( warning, "warning, %s", str );
		line_pinpoint( warning, line );
		}
	}


/* line_pinpoint - write out a message, pinpointing it at the given line */

void line_pinpoint( str, line )
char str[];
int line;
	{
	fprintf( stderr, "\"%s\", line %d: %s\n", infilename, line, str );
	}


/* yyerror - eat up an error message from the parser;
 *	     currently, messages are ignore
 */

void yyerror( msg )
char msg[];
	{
	}
