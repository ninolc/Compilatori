
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 8 "parser.y"

#include "common.h"


/* Line 189 of yacc.c  */
#line 78 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ANCHOR_OPEN = 258,
     ANCHOR_CLOSE = 259,
     ABBR_OPEN = 260,
     ABBR_CLOSE = 261,
     ACRONYM_OPEN = 262,
     ACRONYM_CLOSE = 263,
     ADDRESS_OPEN = 264,
     ADDRESS_CLOSE = 265,
     APPLET_OPEN = 266,
     APPLET_CLOSE = 267,
     AREA_OPEN = 268,
     AREA_CLOSE = 269,
     B_OPEN = 270,
     B_CLOSE = 271,
     BASE_OPEN = 272,
     BASE_CLOSE = 273,
     BASEFONT_OPEN = 274,
     BASEFONT_CLOSE = 275,
     BDO_OPEN = 276,
     BDO_CLOSE = 277,
     BIG_OPEN = 278,
     BIG_CLOSE = 279,
     BLOCKQUOTE_OPEN = 280,
     BLOCKQUOTE_CLOSE = 281,
     BODY_OPEN = 282,
     BODY_CLOSE = 283,
     BR_OPEN = 284,
     BR_CLOSE = 285,
     BUTTON_OPEN = 286,
     BUTTON_CLOSE = 287,
     CAPTION_OPEN = 288,
     CAPTION_CLOSE = 289,
     CENTER_OPEN = 290,
     CENTER_CLOSE = 291,
     CITE_OPEN = 292,
     CITE_CLOSE = 293,
     CODE_OPEN = 294,
     CODE_CLOSE = 295,
     COL_OPEN = 296,
     COL_CLOSE = 297,
     COLGROUP_OPEN = 298,
     COLGROUP_CLOSE = 299,
     DD_OPEN = 300,
     DD_CLOSE = 301,
     DEL_OPEN = 302,
     DEL_CLOSE = 303,
     DFN_OPEN = 304,
     DFN_CLOSE = 305,
     DIR_OPEN = 306,
     DIR_CLOSE = 307,
     DIV_OPEN = 308,
     DIV_CLOSE = 309,
     DL_OPEN = 310,
     DL_CLOSE = 311,
     DT_OPEN = 312,
     DT_CLOSE = 313,
     EM_OPEN = 314,
     EM_CLOSE = 315,
     FIELDSET_OPEN = 316,
     FIELDSET_CLOSE = 317,
     FONT_OPEN = 318,
     FONT_CLOSE = 319,
     FORM_OPEN = 320,
     FORM_CLOSE = 321,
     FRAME_OPEN = 322,
     FRAME_CLOSE = 323,
     FRAMESET_OPEN = 324,
     FRAMESET_CLOSE = 325,
     H1_OPEN = 326,
     H1_CLOSE = 327,
     H2_OPEN = 328,
     H2_CLOSE = 329,
     H3_OPEN = 330,
     H3_CLOSE = 331,
     H4_OPEN = 332,
     H4_CLOSE = 333,
     H5_OPEN = 334,
     H5_CLOSE = 335,
     H6_OPEN = 336,
     H6_CLOSE = 337,
     HEAD_OPEN = 338,
     HEAD_CLOSE = 339,
     HR_OPEN = 340,
     HR_CLOSE = 341,
     HTML_OPEN = 342,
     HTML_CLOSE = 343,
     I_OPEN = 344,
     I_CLOSE = 345,
     IFRAME_OPEN = 346,
     IFRAME_CLOSE = 347,
     IMG_OPEN = 348,
     IMG_CLOSE = 349,
     INPUT_OPEN = 350,
     INPUT_CLOSE = 351,
     INS_OPEN = 352,
     INS_CLOSE = 353,
     ISINDEX_OPEN = 354,
     ISINDEX_CLOSE = 355,
     KBD_OPEN = 356,
     KBD_CLOSE = 357,
     LABEL_OPEN = 358,
     LABEL_CLOSE = 359,
     LEGEND_OPEN = 360,
     LEGEND_CLOSE = 361,
     LI_OPEN = 362,
     LI_CLOSE = 363,
     LINK_OPEN = 364,
     LINK_CLOSE = 365,
     MAP_OPEN = 366,
     MAP_CLOSE = 367,
     MENU_OPEN = 368,
     MENU_CLOSE = 369,
     META_OPEN = 370,
     META_CLOSE = 371,
     NOFRAMES_OPEN = 372,
     NOFRAMES_CLOSE = 373,
     NOSCRIPT_OPEN = 374,
     NOSCRIPT_CLOSE = 375,
     OBJECT_OPEN = 376,
     OBJECT_CLOSE = 377,
     OL_OPEN = 378,
     OL_CLOSE = 379,
     OPTGROUP_OPEN = 380,
     OPTGROUP_CLOSE = 381,
     OPTION_OPEN = 382,
     OPTION_CLOSE = 383,
     P_OPEN = 384,
     P_CLOSE = 385,
     PARAM_OPEN = 386,
     PARAM_CLOSE = 387,
     PRE_OPEN = 388,
     PRE_CLOSE = 389,
     Q_OPEN = 390,
     Q_CLOSE = 391,
     S_OPEN = 392,
     S_CLOSE = 393,
     SAMP_OPEN = 394,
     SAMP_CLOSE = 395,
     SCRIPT_OPEN = 396,
     SCRIPT_CLOSE = 397,
     SELECT_OPEN = 398,
     SELECT_CLOSE = 399,
     SMALL_OPEN = 400,
     SMALL_CLOSE = 401,
     SPAN_OPEN = 402,
     SPAN_CLOSE = 403,
     STRIKE_OPEN = 404,
     STRIKE_CLOSE = 405,
     STRONG_OPEN = 406,
     STRONG_CLOSE = 407,
     STYLE_OPEN = 408,
     STYLE_CLOSE = 409,
     SUB_OPEN = 410,
     SUB_CLOSE = 411,
     SUP_OPEN = 412,
     SUP_CLOSE = 413,
     TABLE_OPEN = 414,
     TABLE_CLOSE = 415,
     TBODY_OPEN = 416,
     TBODY_CLOSE = 417,
     TD_OPEN = 418,
     TD_CLOSE = 419,
     TEXTAREA_OPEN = 420,
     TEXTAREA_CLOSE = 421,
     TFOOT_OPEN = 422,
     TFOOT_CLOSE = 423,
     TH_OPEN = 424,
     TH_CLOSE = 425,
     THEAD_OPEN = 426,
     THEAD_CLOSE = 427,
     TITLE_OPEN = 428,
     TITLE_CLOSE = 429,
     TR_OPEN = 430,
     TR_CLOSE = 431,
     TT_OPEN = 432,
     TT_CLOSE = 433,
     U_OPEN = 434,
     U_CLOSE = 435,
     UL_OPEN = 436,
     UL_CLOSE = 437,
     VAR_OPEN = 438,
     VAR_CLOSE = 439,
     XMP_OPEN = 440,
     XMP_CLOSE = 441,
     END = 442
   };
#endif
/* Tokens.  */
#define ANCHOR_OPEN 258
#define ANCHOR_CLOSE 259
#define ABBR_OPEN 260
#define ABBR_CLOSE 261
#define ACRONYM_OPEN 262
#define ACRONYM_CLOSE 263
#define ADDRESS_OPEN 264
#define ADDRESS_CLOSE 265
#define APPLET_OPEN 266
#define APPLET_CLOSE 267
#define AREA_OPEN 268
#define AREA_CLOSE 269
#define B_OPEN 270
#define B_CLOSE 271
#define BASE_OPEN 272
#define BASE_CLOSE 273
#define BASEFONT_OPEN 274
#define BASEFONT_CLOSE 275
#define BDO_OPEN 276
#define BDO_CLOSE 277
#define BIG_OPEN 278
#define BIG_CLOSE 279
#define BLOCKQUOTE_OPEN 280
#define BLOCKQUOTE_CLOSE 281
#define BODY_OPEN 282
#define BODY_CLOSE 283
#define BR_OPEN 284
#define BR_CLOSE 285
#define BUTTON_OPEN 286
#define BUTTON_CLOSE 287
#define CAPTION_OPEN 288
#define CAPTION_CLOSE 289
#define CENTER_OPEN 290
#define CENTER_CLOSE 291
#define CITE_OPEN 292
#define CITE_CLOSE 293
#define CODE_OPEN 294
#define CODE_CLOSE 295
#define COL_OPEN 296
#define COL_CLOSE 297
#define COLGROUP_OPEN 298
#define COLGROUP_CLOSE 299
#define DD_OPEN 300
#define DD_CLOSE 301
#define DEL_OPEN 302
#define DEL_CLOSE 303
#define DFN_OPEN 304
#define DFN_CLOSE 305
#define DIR_OPEN 306
#define DIR_CLOSE 307
#define DIV_OPEN 308
#define DIV_CLOSE 309
#define DL_OPEN 310
#define DL_CLOSE 311
#define DT_OPEN 312
#define DT_CLOSE 313
#define EM_OPEN 314
#define EM_CLOSE 315
#define FIELDSET_OPEN 316
#define FIELDSET_CLOSE 317
#define FONT_OPEN 318
#define FONT_CLOSE 319
#define FORM_OPEN 320
#define FORM_CLOSE 321
#define FRAME_OPEN 322
#define FRAME_CLOSE 323
#define FRAMESET_OPEN 324
#define FRAMESET_CLOSE 325
#define H1_OPEN 326
#define H1_CLOSE 327
#define H2_OPEN 328
#define H2_CLOSE 329
#define H3_OPEN 330
#define H3_CLOSE 331
#define H4_OPEN 332
#define H4_CLOSE 333
#define H5_OPEN 334
#define H5_CLOSE 335
#define H6_OPEN 336
#define H6_CLOSE 337
#define HEAD_OPEN 338
#define HEAD_CLOSE 339
#define HR_OPEN 340
#define HR_CLOSE 341
#define HTML_OPEN 342
#define HTML_CLOSE 343
#define I_OPEN 344
#define I_CLOSE 345
#define IFRAME_OPEN 346
#define IFRAME_CLOSE 347
#define IMG_OPEN 348
#define IMG_CLOSE 349
#define INPUT_OPEN 350
#define INPUT_CLOSE 351
#define INS_OPEN 352
#define INS_CLOSE 353
#define ISINDEX_OPEN 354
#define ISINDEX_CLOSE 355
#define KBD_OPEN 356
#define KBD_CLOSE 357
#define LABEL_OPEN 358
#define LABEL_CLOSE 359
#define LEGEND_OPEN 360
#define LEGEND_CLOSE 361
#define LI_OPEN 362
#define LI_CLOSE 363
#define LINK_OPEN 364
#define LINK_CLOSE 365
#define MAP_OPEN 366
#define MAP_CLOSE 367
#define MENU_OPEN 368
#define MENU_CLOSE 369
#define META_OPEN 370
#define META_CLOSE 371
#define NOFRAMES_OPEN 372
#define NOFRAMES_CLOSE 373
#define NOSCRIPT_OPEN 374
#define NOSCRIPT_CLOSE 375
#define OBJECT_OPEN 376
#define OBJECT_CLOSE 377
#define OL_OPEN 378
#define OL_CLOSE 379
#define OPTGROUP_OPEN 380
#define OPTGROUP_CLOSE 381
#define OPTION_OPEN 382
#define OPTION_CLOSE 383
#define P_OPEN 384
#define P_CLOSE 385
#define PARAM_OPEN 386
#define PARAM_CLOSE 387
#define PRE_OPEN 388
#define PRE_CLOSE 389
#define Q_OPEN 390
#define Q_CLOSE 391
#define S_OPEN 392
#define S_CLOSE 393
#define SAMP_OPEN 394
#define SAMP_CLOSE 395
#define SCRIPT_OPEN 396
#define SCRIPT_CLOSE 397
#define SELECT_OPEN 398
#define SELECT_CLOSE 399
#define SMALL_OPEN 400
#define SMALL_CLOSE 401
#define SPAN_OPEN 402
#define SPAN_CLOSE 403
#define STRIKE_OPEN 404
#define STRIKE_CLOSE 405
#define STRONG_OPEN 406
#define STRONG_CLOSE 407
#define STYLE_OPEN 408
#define STYLE_CLOSE 409
#define SUB_OPEN 410
#define SUB_CLOSE 411
#define SUP_OPEN 412
#define SUP_CLOSE 413
#define TABLE_OPEN 414
#define TABLE_CLOSE 415
#define TBODY_OPEN 416
#define TBODY_CLOSE 417
#define TD_OPEN 418
#define TD_CLOSE 419
#define TEXTAREA_OPEN 420
#define TEXTAREA_CLOSE 421
#define TFOOT_OPEN 422
#define TFOOT_CLOSE 423
#define TH_OPEN 424
#define TH_CLOSE 425
#define THEAD_OPEN 426
#define THEAD_CLOSE 427
#define TITLE_OPEN 428
#define TITLE_CLOSE 429
#define TR_OPEN 430
#define TR_CLOSE 431
#define TT_OPEN 432
#define TT_CLOSE 433
#define U_OPEN 434
#define U_CLOSE 435
#define UL_OPEN 436
#define UL_CLOSE 437
#define VAR_OPEN 438
#define VAR_CLOSE 439
#define XMP_OPEN 440
#define XMP_CLOSE 441
#define END 442




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 494 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  188
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  466
/* YYNRULES -- Number of states.  */
#define YYNSTATES  652

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   442

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    12,    13,    18,    23,    28,
      33,    38,    43,    48,    53,    58,    63,    68,    73,    78,
      83,    88,    93,    98,   103,   108,   113,   118,   123,   128,
     133,   138,   143,   148,   153,   158,   163,   168,   173,   178,
     183,   188,   193,   198,   203,   208,   213,   218,   223,   228,
     233,   238,   243,   248,   253,   258,   263,   268,   273,   278,
     283,   288,   293,   298,   303,   308,   313,   318,   323,   328,
     333,   338,   343,   348,   353,   358,   363,   368,   373,   378,
     383,   388,   393,   398,   403,   408,   413,   418,   423,   428,
     433,   438,   443,   448,   453,   458,   463,   468,   473,   475,
     477,   479,   481,   483,   485,   487,   489,   491,   493,   495,
     497,   499,   501,   503,   505,   507,   509,   511,   513,   515,
     517,   519,   521,   523,   525,   527,   529,   531,   533,   535,
     537,   539,   541,   543,   545,   547,   549,   551,   553,   555,
     557,   559,   561,   563,   565,   567,   569,   571,   573,   575,
     577,   579,   581,   583,   585,   587,   589,   591,   593,   595,
     597,   599,   601,   603,   605,   607,   609,   611,   613,   615,
     617,   619,   621,   623,   625,   627,   629,   631,   633,   635,
     637,   639,   641,   643,   645,   647,   649,   651,   653,   655,
     657,   659,   661,   663,   665,   667,   669,   671,   673,   675,
     677,   679,   681,   683,   685,   687,   689,   691,   693,   695,
     697,   699,   701,   703,   705,   707,   709,   711,   713,   715,
     717,   719,   721,   723,   725,   727,   729,   731,   733,   735,
     737,   739,   741,   743,   745,   747,   749,   751,   753,   755,
     757,   759,   761,   763,   765,   767,   769,   771,   773,   775,
     777,   779,   781,   783,   785,   787,   789,   791,   793,   795,
     797,   799,   801,   803,   805,   807,   809,   811,   813,   815,
     817,   819,   821,   823,   825,   827,   829,   831,   833,   835,
     837,   839,   841,   843,   845,   847,   849,   851,   853,   855,
     857,   859,   861,   863,   865,   867,   869,   871,   873,   875,
     877,   879,   881,   883,   885,   887,   889,   891,   893,   895,
     897,   899,   901,   903,   905,   907,   909,   911,   913,   915,
     917,   919,   921,   923,   925,   927,   929,   931,   933,   935,
     937,   939,   941,   943,   945,   947,   949,   951,   953,   955,
     957,   959,   961,   963,   965,   967,   969,   971,   973,   975,
     977,   979,   981,   983,   985,   987,   989,   991,   993,   995,
     997,   999,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,
    1017,  1019,  1021,  1023,  1025,  1027,  1029,  1031,  1033,  1035,
    1037,  1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,
    1057,  1059,  1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,
    1077,  1079,  1081,  1083,  1085,  1087,  1089,  1091,  1093,  1095,
    1097,  1099,  1101,  1103,  1105,  1107,  1109,  1111,  1113,  1115,
    1117,  1119,  1121,  1123,  1125,  1127,  1129,  1131,  1133,  1135,
    1137,  1139,  1141,  1143,  1145,  1147,  1149,  1151,  1153,  1155,
    1157,  1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,  1175,
    1177,  1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,  1195,
    1197,  1199,  1201,  1203,  1205,  1207,  1209
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     189,     0,    -1,    -1,   189,   190,   187,    -1,   189,     1,
     191,    -1,    -1,   190,     3,   190,   192,    -1,   190,     5,
     190,   193,    -1,   190,     7,   190,   194,    -1,   190,     9,
     190,   195,    -1,   190,    11,   190,   196,    -1,   190,    13,
     190,   197,    -1,   190,    15,   190,   198,    -1,   190,    17,
     190,   199,    -1,   190,    19,   190,   200,    -1,   190,    21,
     190,   201,    -1,   190,    23,   190,   202,    -1,   190,    25,
     190,   203,    -1,   190,    27,   190,   204,    -1,   190,    29,
     190,   205,    -1,   190,    31,   190,   206,    -1,   190,    33,
     190,   207,    -1,   190,    35,   190,   208,    -1,   190,    37,
     190,   209,    -1,   190,    39,   190,   210,    -1,   190,    41,
     190,   211,    -1,   190,    43,   190,   212,    -1,   190,    45,
     190,   213,    -1,   190,    47,   190,   214,    -1,   190,    49,
     190,   215,    -1,   190,    51,   190,   216,    -1,   190,    53,
     190,   217,    -1,   190,    55,   190,   218,    -1,   190,    57,
     190,   219,    -1,   190,    59,   190,   220,    -1,   190,    61,
     190,   221,    -1,   190,    63,   190,   222,    -1,   190,    65,
     190,   223,    -1,   190,    67,   190,   224,    -1,   190,    69,
     190,   225,    -1,   190,    71,   190,   226,    -1,   190,    73,
     190,   227,    -1,   190,    75,   190,   228,    -1,   190,    77,
     190,   229,    -1,   190,    79,   190,   230,    -1,   190,    81,
     190,   231,    -1,   190,    83,   190,   232,    -1,   190,    85,
     190,   233,    -1,   190,    87,   190,   234,    -1,   190,    89,
     190,   235,    -1,   190,    91,   190,   236,    -1,   190,    93,
     190,   237,    -1,   190,    95,   190,   238,    -1,   190,    97,
     190,   239,    -1,   190,    99,   190,   240,    -1,   190,   101,
     190,   241,    -1,   190,   103,   190,   242,    -1,   190,   105,
     190,   243,    -1,   190,   107,   190,   244,    -1,   190,   109,
     190,   245,    -1,   190,   111,   190,   246,    -1,   190,   113,
     190,   247,    -1,   190,   115,   190,   248,    -1,   190,   117,
     190,   249,    -1,   190,   119,   190,   250,    -1,   190,   121,
     190,   251,    -1,   190,   123,   190,   252,    -1,   190,   125,
     190,   253,    -1,   190,   127,   190,   254,    -1,   190,   129,
     190,   255,    -1,   190,   131,   190,   256,    -1,   190,   133,
     190,   257,    -1,   190,   135,   190,   258,    -1,   190,   137,
     190,   259,    -1,   190,   139,   190,   260,    -1,   190,   141,
     190,   261,    -1,   190,   143,   190,   262,    -1,   190,   145,
     190,   263,    -1,   190,   147,   190,   264,    -1,   190,   149,
     190,   265,    -1,   190,   151,   190,   266,    -1,   190,   153,
     190,   267,    -1,   190,   155,   190,   268,    -1,   190,   157,
     190,   269,    -1,   190,   159,   190,   270,    -1,   190,   161,
     190,   271,    -1,   190,   163,   190,   272,    -1,   190,   165,
     190,   273,    -1,   190,   167,   190,   274,    -1,   190,   169,
     190,   275,    -1,   190,   171,   190,   276,    -1,   190,   173,
     190,   277,    -1,   190,   175,   190,   278,    -1,   190,   177,
     190,   279,    -1,   190,   179,   190,   280,    -1,   190,   181,
     190,   281,    -1,   190,   183,   190,   282,    -1,   190,   185,
     190,   283,    -1,     3,    -1,     4,    -1,     5,    -1,     6,
      -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,
      -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,    16,
      -1,    17,    -1,    18,    -1,    19,    -1,    20,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,
      -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,    36,
      -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,    41,
      -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,    46,
      -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,    89,    -1,    90,    -1,    91,
      -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,    96,
      -1,    97,    -1,    98,    -1,    99,    -1,   100,    -1,   101,
      -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,
      -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,   111,
      -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,   116,
      -1,   117,    -1,   118,    -1,   119,    -1,   120,    -1,   121,
      -1,   122,    -1,   123,    -1,   124,    -1,   125,    -1,   126,
      -1,   127,    -1,   128,    -1,   129,    -1,   130,    -1,   131,
      -1,   132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,
      -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,   141,
      -1,   142,    -1,   143,    -1,   144,    -1,   145,    -1,   146,
      -1,   147,    -1,   148,    -1,   149,    -1,   150,    -1,   151,
      -1,   152,    -1,   153,    -1,   154,    -1,   155,    -1,   156,
      -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,   161,
      -1,   162,    -1,   163,    -1,   164,    -1,   165,    -1,   166,
      -1,   167,    -1,   168,    -1,   169,    -1,   170,    -1,   171,
      -1,   172,    -1,   173,    -1,   174,    -1,   175,    -1,   176,
      -1,   177,    -1,   178,    -1,   179,    -1,   180,    -1,   181,
      -1,   182,    -1,   183,    -1,   184,    -1,   185,    -1,   186,
      -1,   187,    -1,     4,    -1,     1,    -1,     6,    -1,     1,
      -1,     8,    -1,     1,    -1,    10,    -1,     1,    -1,    12,
      -1,     1,    -1,    14,    -1,     1,    -1,    16,    -1,     1,
      -1,    18,    -1,     1,    -1,    20,    -1,     1,    -1,    22,
      -1,     1,    -1,    24,    -1,     1,    -1,    26,    -1,     1,
      -1,    28,    -1,     1,    -1,    30,    -1,     1,    -1,    32,
      -1,     1,    -1,    34,    -1,     1,    -1,    36,    -1,     1,
      -1,    38,    -1,     1,    -1,    40,    -1,     1,    -1,    42,
      -1,     1,    -1,    44,    -1,     1,    -1,    46,    -1,     1,
      -1,    48,    -1,     1,    -1,    50,    -1,     1,    -1,    52,
      -1,     1,    -1,    54,    -1,     1,    -1,    56,    -1,     1,
      -1,    58,    -1,     1,    -1,    60,    -1,     1,    -1,    62,
      -1,     1,    -1,    64,    -1,     1,    -1,    66,    -1,     1,
      -1,    68,    -1,     1,    -1,    70,    -1,     1,    -1,    72,
      -1,     1,    -1,    74,    -1,     1,    -1,    76,    -1,     1,
      -1,    78,    -1,     1,    -1,    80,    -1,     1,    -1,    82,
      -1,     1,    -1,    84,    -1,     1,    -1,    86,    -1,     1,
      -1,    88,    -1,     1,    -1,    90,    -1,     1,    -1,    92,
      -1,     1,    -1,    94,    -1,     1,    -1,    96,    -1,     1,
      -1,    98,    -1,     1,    -1,   100,    -1,     1,    -1,   102,
      -1,     1,    -1,   104,    -1,     1,    -1,   106,    -1,     1,
      -1,   108,    -1,     1,    -1,   110,    -1,     1,    -1,   112,
      -1,     1,    -1,   114,    -1,     1,    -1,   116,    -1,     1,
      -1,   118,    -1,     1,    -1,   120,    -1,     1,    -1,   122,
      -1,     1,    -1,   124,    -1,     1,    -1,   126,    -1,     1,
      -1,   128,    -1,     1,    -1,   130,    -1,     1,    -1,   132,
      -1,     1,    -1,   134,    -1,     1,    -1,   136,    -1,     1,
      -1,   138,    -1,     1,    -1,   140,    -1,     1,    -1,   142,
      -1,     1,    -1,   144,    -1,     1,    -1,   146,    -1,     1,
      -1,   148,    -1,     1,    -1,   150,    -1,     1,    -1,   152,
      -1,     1,    -1,   154,    -1,     1,    -1,   156,    -1,     1,
      -1,   158,    -1,     1,    -1,   160,    -1,     1,    -1,   162,
      -1,     1,    -1,   164,    -1,     1,    -1,   166,    -1,     1,
      -1,   168,    -1,     1,    -1,   170,    -1,     1,    -1,   172,
      -1,     1,    -1,   174,    -1,     1,    -1,   176,    -1,     1,
      -1,   178,    -1,     1,    -1,   180,    -1,     1,    -1,   182,
      -1,     1,    -1,   184,    -1,     1,    -1,   186,    -1,     1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   209,   209,   210,   211,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   500,   501,   504,   505,   508,   509,   512,
     513,   516,   517,   520,   521,   524,   525,   528,   529,   532,
     533,   536,   537,   540,   541,   544,   545,   548,   549,   552,
     553,   556,   557,   560,   561,   564,   565,   568,   569,   572,
     573,   576,   577,   580,   581,   584,   585,   588,   589,   592,
     593,   596,   597,   600,   601,   604,   605,   608,   609,   612,
     613,   616,   617,   620,   621,   624,   625,   628,   629,   632,
     633,   636,   637,   640,   641,   644,   645,   648,   649,   652,
     653,   656,   657,   660,   661,   664,   665,   668,   669,   672,
     673,   676,   677,   680,   681,   684,   685,   688,   689,   692,
     693,   696,   697,   700,   701,   704,   705,   708,   709,   712,
     713,   716,   717,   720,   721,   724,   725,   728,   729,   732,
     733,   736,   737,   740,   741,   744,   745,   748,   749,   752,
     753,   756,   757,   760,   761,   764,   765,   768,   769,   772,
     773,   776,   777,   780,   781,   784,   785,   788,   789,   792,
     793,   796,   797,   800,   801,   804,   805,   808,   809,   812,
     813,   816,   817,   820,   821,   824,   825,   828,   829,   832,
     833,   836,   837,   840,   841,   844,   845,   848,   849,   852,
     853,   856,   857,   860,   861,   864,   865
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ANCHOR_OPEN", "ANCHOR_CLOSE",
  "ABBR_OPEN", "ABBR_CLOSE", "ACRONYM_OPEN", "ACRONYM_CLOSE",
  "ADDRESS_OPEN", "ADDRESS_CLOSE", "APPLET_OPEN", "APPLET_CLOSE",
  "AREA_OPEN", "AREA_CLOSE", "B_OPEN", "B_CLOSE", "BASE_OPEN",
  "BASE_CLOSE", "BASEFONT_OPEN", "BASEFONT_CLOSE", "BDO_OPEN", "BDO_CLOSE",
  "BIG_OPEN", "BIG_CLOSE", "BLOCKQUOTE_OPEN", "BLOCKQUOTE_CLOSE",
  "BODY_OPEN", "BODY_CLOSE", "BR_OPEN", "BR_CLOSE", "BUTTON_OPEN",
  "BUTTON_CLOSE", "CAPTION_OPEN", "CAPTION_CLOSE", "CENTER_OPEN",
  "CENTER_CLOSE", "CITE_OPEN", "CITE_CLOSE", "CODE_OPEN", "CODE_CLOSE",
  "COL_OPEN", "COL_CLOSE", "COLGROUP_OPEN", "COLGROUP_CLOSE", "DD_OPEN",
  "DD_CLOSE", "DEL_OPEN", "DEL_CLOSE", "DFN_OPEN", "DFN_CLOSE", "DIR_OPEN",
  "DIR_CLOSE", "DIV_OPEN", "DIV_CLOSE", "DL_OPEN", "DL_CLOSE", "DT_OPEN",
  "DT_CLOSE", "EM_OPEN", "EM_CLOSE", "FIELDSET_OPEN", "FIELDSET_CLOSE",
  "FONT_OPEN", "FONT_CLOSE", "FORM_OPEN", "FORM_CLOSE", "FRAME_OPEN",
  "FRAME_CLOSE", "FRAMESET_OPEN", "FRAMESET_CLOSE", "H1_OPEN", "H1_CLOSE",
  "H2_OPEN", "H2_CLOSE", "H3_OPEN", "H3_CLOSE", "H4_OPEN", "H4_CLOSE",
  "H5_OPEN", "H5_CLOSE", "H6_OPEN", "H6_CLOSE", "HEAD_OPEN", "HEAD_CLOSE",
  "HR_OPEN", "HR_CLOSE", "HTML_OPEN", "HTML_CLOSE", "I_OPEN", "I_CLOSE",
  "IFRAME_OPEN", "IFRAME_CLOSE", "IMG_OPEN", "IMG_CLOSE", "INPUT_OPEN",
  "INPUT_CLOSE", "INS_OPEN", "INS_CLOSE", "ISINDEX_OPEN", "ISINDEX_CLOSE",
  "KBD_OPEN", "KBD_CLOSE", "LABEL_OPEN", "LABEL_CLOSE", "LEGEND_OPEN",
  "LEGEND_CLOSE", "LI_OPEN", "LI_CLOSE", "LINK_OPEN", "LINK_CLOSE",
  "MAP_OPEN", "MAP_CLOSE", "MENU_OPEN", "MENU_CLOSE", "META_OPEN",
  "META_CLOSE", "NOFRAMES_OPEN", "NOFRAMES_CLOSE", "NOSCRIPT_OPEN",
  "NOSCRIPT_CLOSE", "OBJECT_OPEN", "OBJECT_CLOSE", "OL_OPEN", "OL_CLOSE",
  "OPTGROUP_OPEN", "OPTGROUP_CLOSE", "OPTION_OPEN", "OPTION_CLOSE",
  "P_OPEN", "P_CLOSE", "PARAM_OPEN", "PARAM_CLOSE", "PRE_OPEN",
  "PRE_CLOSE", "Q_OPEN", "Q_CLOSE", "S_OPEN", "S_CLOSE", "SAMP_OPEN",
  "SAMP_CLOSE", "SCRIPT_OPEN", "SCRIPT_CLOSE", "SELECT_OPEN",
  "SELECT_CLOSE", "SMALL_OPEN", "SMALL_CLOSE", "SPAN_OPEN", "SPAN_CLOSE",
  "STRIKE_OPEN", "STRIKE_CLOSE", "STRONG_OPEN", "STRONG_CLOSE",
  "STYLE_OPEN", "STYLE_CLOSE", "SUB_OPEN", "SUB_CLOSE", "SUP_OPEN",
  "SUP_CLOSE", "TABLE_OPEN", "TABLE_CLOSE", "TBODY_OPEN", "TBODY_CLOSE",
  "TD_OPEN", "TD_CLOSE", "TEXTAREA_OPEN", "TEXTAREA_CLOSE", "TFOOT_OPEN",
  "TFOOT_CLOSE", "TH_OPEN", "TH_CLOSE", "THEAD_OPEN", "THEAD_CLOSE",
  "TITLE_OPEN", "TITLE_CLOSE", "TR_OPEN", "TR_CLOSE", "TT_OPEN",
  "TT_CLOSE", "U_OPEN", "U_CLOSE", "UL_OPEN", "UL_CLOSE", "VAR_OPEN",
  "VAR_CLOSE", "XMP_OPEN", "XMP_CLOSE", "END", "$accept", "line",
  "document", "token", "gap_anchor", "gap_abbr", "gap_acronym",
  "gap_address", "gap_applet", "gap_area", "gap_b", "gap_base",
  "gap_basefont", "gap_bdo", "gap_big", "gap_blockquote", "gap_body",
  "gap_br", "gap_button", "gap_caption", "gap_center", "gap_cite",
  "gap_code", "gap_col", "gap_colgroup", "gap_dd", "gap_del", "gap_dfn",
  "gap_dir", "gap_div", "gap_dl", "gap_dt", "gap_em", "gap_fieldset",
  "gap_font", "gap_form", "gap_frame", "gap_frameset", "gap_h1", "gap_h2",
  "gap_h3", "gap_h4", "gap_h5", "gap_h6", "gap_head", "gap_hr", "gap_html",
  "gap_i", "gap_iframe", "gap_img", "gap_input", "gap_ins", "gap_isindex",
  "gap_kbd", "gap_label", "gap_legend", "gap_li", "gap_link", "gap_map",
  "gap_menu", "gap_meta", "gap_noframes", "gap_noscript", "gap_object",
  "gap_ol", "gap_optgroup", "gap_option", "gap_p", "gap_param", "gap_pre",
  "gap_q", "gap_s", "gap_samp", "gap_script", "gap_select", "gap_small",
  "gap_span", "gap_strike", "gap_strong", "gap_style", "gap_sub",
  "gap_sup", "gap_table", "gap_tbody", "gap_td", "gap_textarea",
  "gap_tfoot", "gap_th", "gap_thead", "gap_title", "gap_tr", "gap_tt",
  "gap_u", "gap_ul", "gap_var", "gap_xmp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   188,   189,   189,   189,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   214,   214,   215,
     215,   216,   216,   217,   217,   218,   218,   219,   219,   220,
     220,   221,   221,   222,   222,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   231,   231,   232,   232,   233,   233,   234,   234,   235,
     235,   236,   236,   237,   237,   238,   238,   239,   239,   240,
     240,   241,   241,   242,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   248,   248,   249,   249,   250,
     250,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     255,   256,   256,   257,   257,   258,   258,   259,   259,   260,
     260,   261,   261,   262,   262,   263,   263,   264,   264,   265,
     265,   266,   266,   267,   267,   268,   268,   269,   269,   270,
     270,   271,   271,   272,   272,   273,   273,   274,   274,   275,
     275,   276,   276,   277,   277,   278,   278,   279,   279,   280,
     280,   281,   281,   282,   282,   283,   283
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     3,     0,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
       4,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,   283,     6,   286,
     285,     7,   288,   287,     8,   290,   289,     9,   292,   291,
      10,   294,   293,    11,   296,   295,    12,   298,   297,    13,
     300,   299,    14,   302,   301,    15,   304,   303,    16,   306,
     305,    17,   308,   307,    18,   310,   309,    19,   312,   311,
      20,   314,   313,    21,   316,   315,    22,   318,   317,    23,
     320,   319,    24,   322,   321,    25,   324,   323,    26,   326,
     325,    27,   328,   327,    28,   330,   329,    29,   332,   331,
      30,   334,   333,    31,   336,   335,    32,   338,   337,    33,
     340,   339,    34,   342,   341,    35,   344,   343,    36,   346,
     345,    37,   348,   347,    38,   350,   349,    39,   352,   351,
      40,   354,   353,    41,   356,   355,    42,   358,   357,    43,
     360,   359,    44,   362,   361,    45,   364,   363,    46,   366,
     365,    47,   368,   367,    48,   370,   369,    49,   372,   371,
      50,   374,   373,    51,   376,   375,    52,   378,   377,    53,
     380,   379,    54,   382,   381,    55,   384,   383,    56,   386,
     385,    57,   388,   387,    58,   390,   389,    59,   392,   391,
      60,   394,   393,    61,   396,   395,    62,   398,   397,    63,
     400,   399,    64,   402,   401,    65,   404,   403,    66,   406,
     405,    67,   408,   407,    68,   410,   409,    69,   412,   411,
      70,   414,   413,    71,   416,   415,    72,   418,   417,    73,
     420,   419,    74,   422,   421,    75,   424,   423,    76,   426,
     425,    77,   428,   427,    78,   430,   429,    79,   432,   431,
      80,   434,   433,    81,   436,   435,    82,   438,   437,    83,
     440,   439,    84,   442,   441,    85,   444,   443,    86,   446,
     445,    87,   448,   447,    88,   450,   449,    89,   452,   451,
      90,   454,   453,    91,   456,   455,    92,   458,   457,    93,
     460,   459,    94,   462,   461,    95,   464,   463,    96,   466,
     465,    97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,   190,   378,   381,   384,   387,   390,   393,
     396,   399,   402,   405,   408,   411,   414,   417,   420,   423,
     426,   429,   432,   435,   438,   441,   444,   447,   450,   453,
     456,   459,   462,   465,   468,   471,   474,   477,   480,   483,
     486,   489,   492,   495,   498,   501,   504,   507,   510,   513,
     516,   519,   522,   525,   528,   531,   534,   537,   540,   543,
     546,   549,   552,   555,   558,   561,   564,   567,   570,   573,
     576,   579,   582,   585,   588,   591,   594,   597,   600,   603,
     606,   609,   612,   615,   618,   621,   624,   627,   630,   633,
     636,   639,   642,   645,   648,   651
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1
static const yytype_int16 yypact[] =
{
      -1,     0,    -1,   187, 12977,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   374,   555,   734,   911,  1086,  1259,
    1430,  1599,  1766,  1931,  2094,  2255,  2414,  2571,  2726,  2879,
    3030,  3179,  3326,  3471,  3614,  3755,  3894,  4031,  4166,  4299,
    4430,  4559,  4686,  4811,  4934,  5055,  5174,  5291,  5406,  5519,
    5630,  5739,  5846,  5951,  6054,  6155,  6254,  6351,  6446,  6539,
    6634,  6731,  6830,  6931,  7034,  7139,  7246,  7355,  7466,  7579,
    7694,  7811,  7930,  8051,  8174,  8299,  8426,  8555,  8686,  8819,
    8954,  9091,  9230,  9371,  9514,  9659,  9806,  9955, 10106, 10259,
   10414, 10571, 10730, 10891, 11054, 11219, 11386, 11555, 11726, 11899,
   12074, 12251, 12430, 12611, 12794,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
      -1,    -1, 12974,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int16 yytable[] =
{
       2,     3,     0,    -5,   649,    -5,   191,    -5,   192,    -5,
     193,    -5,   194,    -5,   195,    -5,   196,    -5,   197,    -5,
     198,    -5,   199,    -5,   200,    -5,   201,    -5,   202,    -5,
     203,    -5,   204,    -5,   205,    -5,   206,    -5,   207,    -5,
     208,    -5,   209,    -5,   210,    -5,   211,    -5,   212,    -5,
     213,    -5,   214,    -5,   215,    -5,   216,    -5,   217,    -5,
     218,    -5,   219,    -5,   220,    -5,   221,    -5,   222,    -5,
     223,    -5,   224,    -5,   225,    -5,   226,    -5,   227,    -5,
     228,    -5,   229,    -5,   230,    -5,   231,    -5,   232,    -5,
     233,    -5,   234,    -5,   235,    -5,   236,    -5,   237,    -5,
     238,    -5,   239,    -5,   240,    -5,   241,    -5,   242,    -5,
     243,    -5,   244,    -5,   245,    -5,   246,    -5,   247,    -5,
     248,    -5,   249,    -5,   250,    -5,   251,    -5,   252,    -5,
     253,    -5,   254,    -5,   255,    -5,   256,    -5,   257,    -5,
     258,    -5,   259,    -5,   260,    -5,   261,    -5,   262,    -5,
     263,    -5,   264,    -5,   265,    -5,   266,    -5,   267,    -5,
     268,    -5,   269,    -5,   270,    -5,   271,    -5,   272,    -5,
     273,    -5,   274,    -5,   275,    -5,   276,    -5,   277,    -5,
     278,    -5,   279,    -5,   280,    -5,   281,    -5,   282,   650,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   376,     0,   191,   377,   192,
       0,   193,     0,   194,     0,   195,     0,   196,     0,   197,
       0,   198,     0,   199,     0,   200,     0,   201,     0,   202,
       0,   203,     0,   204,     0,   205,     0,   206,     0,   207,
       0,   208,     0,   209,     0,   210,     0,   211,     0,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,     0,   261,     0,   262,
       0,   263,     0,   264,     0,   265,     0,   266,     0,   267,
       0,   268,     0,   269,     0,   270,     0,   271,     0,   272,
       0,   273,     0,   274,     0,   275,     0,   276,     0,   277,
       0,   278,     0,   279,     0,   280,   379,   281,   191,   282,
     192,   380,   193,     0,   194,     0,   195,     0,   196,     0,
     197,     0,   198,     0,   199,     0,   200,     0,   201,     0,
     202,     0,   203,     0,   204,     0,   205,     0,   206,     0,
     207,     0,   208,     0,   209,     0,   210,     0,   211,     0,
     212,     0,   213,     0,   214,     0,   215,     0,   216,     0,
     217,     0,   218,     0,   219,     0,   220,     0,   221,     0,
     222,     0,   223,     0,   224,     0,   225,     0,   226,     0,
     227,     0,   228,     0,   229,     0,   230,     0,   231,     0,
     232,     0,   233,     0,   234,     0,   235,     0,   236,     0,
     237,     0,   238,     0,   239,     0,   240,     0,   241,     0,
     242,     0,   243,     0,   244,     0,   245,     0,   246,     0,
     247,     0,   248,     0,   249,     0,   250,     0,   251,     0,
     252,     0,   253,     0,   254,     0,   255,     0,   256,     0,
     257,     0,   258,     0,   259,     0,   260,     0,   261,     0,
     262,     0,   263,     0,   264,     0,   265,     0,   266,     0,
     267,     0,   268,     0,   269,     0,   270,     0,   271,     0,
     272,     0,   273,     0,   274,     0,   275,     0,   276,     0,
     277,     0,   278,     0,   279,   382,   280,   191,   281,   192,
     282,   193,   383,   194,     0,   195,     0,   196,     0,   197,
       0,   198,     0,   199,     0,   200,     0,   201,     0,   202,
       0,   203,     0,   204,     0,   205,     0,   206,     0,   207,
       0,   208,     0,   209,     0,   210,     0,   211,     0,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,     0,   261,     0,   262,
       0,   263,     0,   264,     0,   265,     0,   266,     0,   267,
       0,   268,     0,   269,     0,   270,     0,   271,     0,   272,
       0,   273,     0,   274,     0,   275,     0,   276,     0,   277,
       0,   278,   385,   279,   191,   280,   192,   281,   193,   282,
     194,   386,   195,     0,   196,     0,   197,     0,   198,     0,
     199,     0,   200,     0,   201,     0,   202,     0,   203,     0,
     204,     0,   205,     0,   206,     0,   207,     0,   208,     0,
     209,     0,   210,     0,   211,     0,   212,     0,   213,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,     0,
     259,     0,   260,     0,   261,     0,   262,     0,   263,     0,
     264,     0,   265,     0,   266,     0,   267,     0,   268,     0,
     269,     0,   270,     0,   271,     0,   272,     0,   273,     0,
     274,     0,   275,     0,   276,     0,   277,   388,   278,   191,
     279,   192,   280,   193,   281,   194,   282,   195,   389,   196,
       0,   197,     0,   198,     0,   199,     0,   200,     0,   201,
       0,   202,     0,   203,     0,   204,     0,   205,     0,   206,
       0,   207,     0,   208,     0,   209,     0,   210,     0,   211,
       0,   212,     0,   213,     0,   214,     0,   215,     0,   216,
       0,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,     0,   256,
       0,   257,     0,   258,     0,   259,     0,   260,     0,   261,
       0,   262,     0,   263,     0,   264,     0,   265,     0,   266,
       0,   267,     0,   268,     0,   269,     0,   270,     0,   271,
       0,   272,     0,   273,     0,   274,     0,   275,     0,   276,
     391,   277,   191,   278,   192,   279,   193,   280,   194,   281,
     195,   282,   196,   392,   197,     0,   198,     0,   199,     0,
     200,     0,   201,     0,   202,     0,   203,     0,   204,     0,
     205,     0,   206,     0,   207,     0,   208,     0,   209,     0,
     210,     0,   211,     0,   212,     0,   213,     0,   214,     0,
     215,     0,   216,     0,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,     0,   256,     0,   257,     0,   258,     0,   259,     0,
     260,     0,   261,     0,   262,     0,   263,     0,   264,     0,
     265,     0,   266,     0,   267,     0,   268,     0,   269,     0,
     270,     0,   271,     0,   272,     0,   273,     0,   274,     0,
     275,   394,   276,   191,   277,   192,   278,   193,   279,   194,
     280,   195,   281,   196,   282,   197,   395,   198,     0,   199,
       0,   200,     0,   201,     0,   202,     0,   203,     0,   204,
       0,   205,     0,   206,     0,   207,     0,   208,     0,   209,
       0,   210,     0,   211,     0,   212,     0,   213,     0,   214,
       0,   215,     0,   216,     0,   217,     0,   218,     0,   219,
       0,   220,     0,   221,     0,   222,     0,   223,     0,   224,
       0,   225,     0,   226,     0,   227,     0,   228,     0,   229,
       0,   230,     0,   231,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,   242,     0,   243,     0,   244,
       0,   245,     0,   246,     0,   247,     0,   248,     0,   249,
       0,   250,     0,   251,     0,   252,     0,   253,     0,   254,
       0,   255,     0,   256,     0,   257,     0,   258,     0,   259,
       0,   260,     0,   261,     0,   262,     0,   263,     0,   264,
       0,   265,     0,   266,     0,   267,     0,   268,     0,   269,
       0,   270,     0,   271,     0,   272,     0,   273,     0,   274,
     397,   275,   191,   276,   192,   277,   193,   278,   194,   279,
     195,   280,   196,   281,   197,   282,   198,   398,   199,     0,
     200,     0,   201,     0,   202,     0,   203,     0,   204,     0,
     205,     0,   206,     0,   207,     0,   208,     0,   209,     0,
     210,     0,   211,     0,   212,     0,   213,     0,   214,     0,
     215,     0,   216,     0,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,     0,   256,     0,   257,     0,   258,     0,   259,     0,
     260,     0,   261,     0,   262,     0,   263,     0,   264,     0,
     265,     0,   266,     0,   267,     0,   268,     0,   269,     0,
     270,     0,   271,     0,   272,     0,   273,   400,   274,   191,
     275,   192,   276,   193,   277,   194,   278,   195,   279,   196,
     280,   197,   281,   198,   282,   199,   401,   200,     0,   201,
       0,   202,     0,   203,     0,   204,     0,   205,     0,   206,
       0,   207,     0,   208,     0,   209,     0,   210,     0,   211,
       0,   212,     0,   213,     0,   214,     0,   215,     0,   216,
       0,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,     0,   256,
       0,   257,     0,   258,     0,   259,     0,   260,     0,   261,
       0,   262,     0,   263,     0,   264,     0,   265,     0,   266,
       0,   267,     0,   268,     0,   269,     0,   270,     0,   271,
       0,   272,   403,   273,   191,   274,   192,   275,   193,   276,
     194,   277,   195,   278,   196,   279,   197,   280,   198,   281,
     199,   282,   200,   404,   201,     0,   202,     0,   203,     0,
     204,     0,   205,     0,   206,     0,   207,     0,   208,     0,
     209,     0,   210,     0,   211,     0,   212,     0,   213,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,     0,
     259,     0,   260,     0,   261,     0,   262,     0,   263,     0,
     264,     0,   265,     0,   266,     0,   267,     0,   268,     0,
     269,     0,   270,     0,   271,   406,   272,   191,   273,   192,
     274,   193,   275,   194,   276,   195,   277,   196,   278,   197,
     279,   198,   280,   199,   281,   200,   282,   201,   407,   202,
       0,   203,     0,   204,     0,   205,     0,   206,     0,   207,
       0,   208,     0,   209,     0,   210,     0,   211,     0,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,     0,   261,     0,   262,
       0,   263,     0,   264,     0,   265,     0,   266,     0,   267,
       0,   268,     0,   269,     0,   270,   409,   271,   191,   272,
     192,   273,   193,   274,   194,   275,   195,   276,   196,   277,
     197,   278,   198,   279,   199,   280,   200,   281,   201,   282,
     202,   410,   203,     0,   204,     0,   205,     0,   206,     0,
     207,     0,   208,     0,   209,     0,   210,     0,   211,     0,
     212,     0,   213,     0,   214,     0,   215,     0,   216,     0,
     217,     0,   218,     0,   219,     0,   220,     0,   221,     0,
     222,     0,   223,     0,   224,     0,   225,     0,   226,     0,
     227,     0,   228,     0,   229,     0,   230,     0,   231,     0,
     232,     0,   233,     0,   234,     0,   235,     0,   236,     0,
     237,     0,   238,     0,   239,     0,   240,     0,   241,     0,
     242,     0,   243,     0,   244,     0,   245,     0,   246,     0,
     247,     0,   248,     0,   249,     0,   250,     0,   251,     0,
     252,     0,   253,     0,   254,     0,   255,     0,   256,     0,
     257,     0,   258,     0,   259,     0,   260,     0,   261,     0,
     262,     0,   263,     0,   264,     0,   265,     0,   266,     0,
     267,     0,   268,     0,   269,   412,   270,   191,   271,   192,
     272,   193,   273,   194,   274,   195,   275,   196,   276,   197,
     277,   198,   278,   199,   279,   200,   280,   201,   281,   202,
     282,   203,   413,   204,     0,   205,     0,   206,     0,   207,
       0,   208,     0,   209,     0,   210,     0,   211,     0,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,     0,   261,     0,   262,
       0,   263,     0,   264,     0,   265,     0,   266,     0,   267,
       0,   268,   415,   269,   191,   270,   192,   271,   193,   272,
     194,   273,   195,   274,   196,   275,   197,   276,   198,   277,
     199,   278,   200,   279,   201,   280,   202,   281,   203,   282,
     204,   416,   205,     0,   206,     0,   207,     0,   208,     0,
     209,     0,   210,     0,   211,     0,   212,     0,   213,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,     0,
     259,     0,   260,     0,   261,     0,   262,     0,   263,     0,
     264,     0,   265,     0,   266,     0,   267,   418,   268,   191,
     269,   192,   270,   193,   271,   194,   272,   195,   273,   196,
     274,   197,   275,   198,   276,   199,   277,   200,   278,   201,
     279,   202,   280,   203,   281,   204,   282,   205,   419,   206,
       0,   207,     0,   208,     0,   209,     0,   210,     0,   211,
       0,   212,     0,   213,     0,   214,     0,   215,     0,   216,
       0,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,     0,   256,
       0,   257,     0,   258,     0,   259,     0,   260,     0,   261,
       0,   262,     0,   263,     0,   264,     0,   265,     0,   266,
     421,   267,   191,   268,   192,   269,   193,   270,   194,   271,
     195,   272,   196,   273,   197,   274,   198,   275,   199,   276,
     200,   277,   201,   278,   202,   279,   203,   280,   204,   281,
     205,   282,   206,   422,   207,     0,   208,     0,   209,     0,
     210,     0,   211,     0,   212,     0,   213,     0,   214,     0,
     215,     0,   216,     0,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,     0,   256,     0,   257,     0,   258,     0,   259,     0,
     260,     0,   261,     0,   262,     0,   263,     0,   264,     0,
     265,   424,   266,   191,   267,   192,   268,   193,   269,   194,
     270,   195,   271,   196,   272,   197,   273,   198,   274,   199,
     275,   200,   276,   201,   277,   202,   278,   203,   279,   204,
     280,   205,   281,   206,   282,   207,   425,   208,     0,   209,
       0,   210,     0,   211,     0,   212,     0,   213,     0,   214,
       0,   215,     0,   216,     0,   217,     0,   218,     0,   219,
       0,   220,     0,   221,     0,   222,     0,   223,     0,   224,
       0,   225,     0,   226,     0,   227,     0,   228,     0,   229,
       0,   230,     0,   231,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,   242,     0,   243,     0,   244,
       0,   245,     0,   246,     0,   247,     0,   248,     0,   249,
       0,   250,     0,   251,     0,   252,     0,   253,     0,   254,
       0,   255,     0,   256,     0,   257,     0,   258,     0,   259,
       0,   260,     0,   261,     0,   262,     0,   263,     0,   264,
     427,   265,   191,   266,   192,   267,   193,   268,   194,   269,
     195,   270,   196,   271,   197,   272,   198,   273,   199,   274,
     200,   275,   201,   276,   202,   277,   203,   278,   204,   279,
     205,   280,   206,   281,   207,   282,   208,   428,   209,     0,
     210,     0,   211,     0,   212,     0,   213,     0,   214,     0,
     215,     0,   216,     0,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,     0,   256,     0,   257,     0,   258,     0,   259,     0,
     260,     0,   261,     0,   262,     0,   263,   430,   264,   191,
     265,   192,   266,   193,   267,   194,   268,   195,   269,   196,
     270,   197,   271,   198,   272,   199,   273,   200,   274,   201,
     275,   202,   276,   203,   277,   204,   278,   205,   279,   206,
     280,   207,   281,   208,   282,   209,   431,   210,     0,   211,
       0,   212,     0,   213,     0,   214,     0,   215,     0,   216,
       0,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,     0,   256,
       0,   257,     0,   258,     0,   259,     0,   260,     0,   261,
       0,   262,   433,   263,   191,   264,   192,   265,   193,   266,
     194,   267,   195,   268,   196,   269,   197,   270,   198,   271,
     199,   272,   200,   273,   201,   274,   202,   275,   203,   276,
     204,   277,   205,   278,   206,   279,   207,   280,   208,   281,
     209,   282,   210,   434,   211,     0,   212,     0,   213,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,     0,
     259,     0,   260,     0,   261,   436,   262,   191,   263,   192,
     264,   193,   265,   194,   266,   195,   267,   196,   268,   197,
     269,   198,   270,   199,   271,   200,   272,   201,   273,   202,
     274,   203,   275,   204,   276,   205,   277,   206,   278,   207,
     279,   208,   280,   209,   281,   210,   282,   211,   437,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,   439,   261,   191,   262,
     192,   263,   193,   264,   194,   265,   195,   266,   196,   267,
     197,   268,   198,   269,   199,   270,   200,   271,   201,   272,
     202,   273,   203,   274,   204,   275,   205,   276,   206,   277,
     207,   278,   208,   279,   209,   280,   210,   281,   211,   282,
     212,   440,   213,     0,   214,     0,   215,     0,   216,     0,
     217,     0,   218,     0,   219,     0,   220,     0,   221,     0,
     222,     0,   223,     0,   224,     0,   225,     0,   226,     0,
     227,     0,   228,     0,   229,     0,   230,     0,   231,     0,
     232,     0,   233,     0,   234,     0,   235,     0,   236,     0,
     237,     0,   238,     0,   239,     0,   240,     0,   241,     0,
     242,     0,   243,     0,   244,     0,   245,     0,   246,     0,
     247,     0,   248,     0,   249,     0,   250,     0,   251,     0,
     252,     0,   253,     0,   254,     0,   255,     0,   256,     0,
     257,     0,   258,     0,   259,   442,   260,   191,   261,   192,
     262,   193,   263,   194,   264,   195,   265,   196,   266,   197,
     267,   198,   268,   199,   269,   200,   270,   201,   271,   202,
     272,   203,   273,   204,   274,   205,   275,   206,   276,   207,
     277,   208,   278,   209,   279,   210,   280,   211,   281,   212,
     282,   213,   443,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,   445,   259,   191,   260,   192,   261,   193,   262,
     194,   263,   195,   264,   196,   265,   197,   266,   198,   267,
     199,   268,   200,   269,   201,   270,   202,   271,   203,   272,
     204,   273,   205,   274,   206,   275,   207,   276,   208,   277,
     209,   278,   210,   279,   211,   280,   212,   281,   213,   282,
     214,   446,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,   448,   258,   191,
     259,   192,   260,   193,   261,   194,   262,   195,   263,   196,
     264,   197,   265,   198,   266,   199,   267,   200,   268,   201,
     269,   202,   270,   203,   271,   204,   272,   205,   273,   206,
     274,   207,   275,   208,   276,   209,   277,   210,   278,   211,
     279,   212,   280,   213,   281,   214,   282,   215,   449,   216,
       0,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,     0,   256,
     451,   257,   191,   258,   192,   259,   193,   260,   194,   261,
     195,   262,   196,   263,   197,   264,   198,   265,   199,   266,
     200,   267,   201,   268,   202,   269,   203,   270,   204,   271,
     205,   272,   206,   273,   207,   274,   208,   275,   209,   276,
     210,   277,   211,   278,   212,   279,   213,   280,   214,   281,
     215,   282,   216,   452,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,   454,   256,   191,   257,   192,   258,   193,   259,   194,
     260,   195,   261,   196,   262,   197,   263,   198,   264,   199,
     265,   200,   266,   201,   267,   202,   268,   203,   269,   204,
     270,   205,   271,   206,   272,   207,   273,   208,   274,   209,
     275,   210,   276,   211,   277,   212,   278,   213,   279,   214,
     280,   215,   281,   216,   282,   217,   455,   218,     0,   219,
       0,   220,     0,   221,     0,   222,     0,   223,     0,   224,
       0,   225,     0,   226,     0,   227,     0,   228,     0,   229,
       0,   230,     0,   231,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,   242,     0,   243,     0,   244,
       0,   245,     0,   246,     0,   247,     0,   248,     0,   249,
       0,   250,     0,   251,     0,   252,     0,   253,     0,   254,
     457,   255,   191,   256,   192,   257,   193,   258,   194,   259,
     195,   260,   196,   261,   197,   262,   198,   263,   199,   264,
     200,   265,   201,   266,   202,   267,   203,   268,   204,   269,
     205,   270,   206,   271,   207,   272,   208,   273,   209,   274,
     210,   275,   211,   276,   212,   277,   213,   278,   214,   279,
     215,   280,   216,   281,   217,   282,   218,   458,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,   460,   254,   191,
     255,   192,   256,   193,   257,   194,   258,   195,   259,   196,
     260,   197,   261,   198,   262,   199,   263,   200,   264,   201,
     265,   202,   266,   203,   267,   204,   268,   205,   269,   206,
     270,   207,   271,   208,   272,   209,   273,   210,   274,   211,
     275,   212,   276,   213,   277,   214,   278,   215,   279,   216,
     280,   217,   281,   218,   282,   219,   461,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,   463,   253,   191,   254,   192,   255,   193,   256,
     194,   257,   195,   258,   196,   259,   197,   260,   198,   261,
     199,   262,   200,   263,   201,   264,   202,   265,   203,   266,
     204,   267,   205,   268,   206,   269,   207,   270,   208,   271,
     209,   272,   210,   273,   211,   274,   212,   275,   213,   276,
     214,   277,   215,   278,   216,   279,   217,   280,   218,   281,
     219,   282,   220,   464,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,   466,   252,   191,   253,   192,
     254,   193,   255,   194,   256,   195,   257,   196,   258,   197,
     259,   198,   260,   199,   261,   200,   262,   201,   263,   202,
     264,   203,   265,   204,   266,   205,   267,   206,   268,   207,
     269,   208,   270,   209,   271,   210,   272,   211,   273,   212,
     274,   213,   275,   214,   276,   215,   277,   216,   278,   217,
     279,   218,   280,   219,   281,   220,   282,   221,   467,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,   469,   251,   191,   252,
     192,   253,   193,   254,   194,   255,   195,   256,   196,   257,
     197,   258,   198,   259,   199,   260,   200,   261,   201,   262,
     202,   263,   203,   264,   204,   265,   205,   266,   206,   267,
     207,   268,   208,   269,   209,   270,   210,   271,   211,   272,
     212,   273,   213,   274,   214,   275,   215,   276,   216,   277,
     217,   278,   218,   279,   219,   280,   220,   281,   221,   282,
     222,   470,   223,     0,   224,     0,   225,     0,   226,     0,
     227,     0,   228,     0,   229,     0,   230,     0,   231,     0,
     232,     0,   233,     0,   234,     0,   235,     0,   236,     0,
     237,     0,   238,     0,   239,     0,   240,     0,   241,     0,
     242,     0,   243,     0,   244,     0,   245,     0,   246,     0,
     247,     0,   248,     0,   249,   472,   250,   191,   251,   192,
     252,   193,   253,   194,   254,   195,   255,   196,   256,   197,
     257,   198,   258,   199,   259,   200,   260,   201,   261,   202,
     262,   203,   263,   204,   264,   205,   265,   206,   266,   207,
     267,   208,   268,   209,   269,   210,   270,   211,   271,   212,
     272,   213,   273,   214,   274,   215,   275,   216,   276,   217,
     277,   218,   278,   219,   279,   220,   280,   221,   281,   222,
     282,   223,   473,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,   475,   249,   191,   250,   192,   251,   193,   252,
     194,   253,   195,   254,   196,   255,   197,   256,   198,   257,
     199,   258,   200,   259,   201,   260,   202,   261,   203,   262,
     204,   263,   205,   264,   206,   265,   207,   266,   208,   267,
     209,   268,   210,   269,   211,   270,   212,   271,   213,   272,
     214,   273,   215,   274,   216,   275,   217,   276,   218,   277,
     219,   278,   220,   279,   221,   280,   222,   281,   223,   282,
     224,   476,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,   478,   248,   191,
     249,   192,   250,   193,   251,   194,   252,   195,   253,   196,
     254,   197,   255,   198,   256,   199,   257,   200,   258,   201,
     259,   202,   260,   203,   261,   204,   262,   205,   263,   206,
     264,   207,   265,   208,   266,   209,   267,   210,   268,   211,
     269,   212,   270,   213,   271,   214,   272,   215,   273,   216,
     274,   217,   275,   218,   276,   219,   277,   220,   278,   221,
     279,   222,   280,   223,   281,   224,   282,   225,   479,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
     481,   247,   191,   248,   192,   249,   193,   250,   194,   251,
     195,   252,   196,   253,   197,   254,   198,   255,   199,   256,
     200,   257,   201,   258,   202,   259,   203,   260,   204,   261,
     205,   262,   206,   263,   207,   264,   208,   265,   209,   266,
     210,   267,   211,   268,   212,   269,   213,   270,   214,   271,
     215,   272,   216,   273,   217,   274,   218,   275,   219,   276,
     220,   277,   221,   278,   222,   279,   223,   280,   224,   281,
     225,   282,   226,   482,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,   484,   246,   191,   247,   192,   248,   193,   249,   194,
     250,   195,   251,   196,   252,   197,   253,   198,   254,   199,
     255,   200,   256,   201,   257,   202,   258,   203,   259,   204,
     260,   205,   261,   206,   262,   207,   263,   208,   264,   209,
     265,   210,   266,   211,   267,   212,   268,   213,   269,   214,
     270,   215,   271,   216,   272,   217,   273,   218,   274,   219,
     275,   220,   276,   221,   277,   222,   278,   223,   279,   224,
     280,   225,   281,   226,   282,   227,   485,   228,     0,   229,
       0,   230,     0,   231,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,   242,     0,   243,     0,   244,
     487,   245,   191,   246,   192,   247,   193,   248,   194,   249,
     195,   250,   196,   251,   197,   252,   198,   253,   199,   254,
     200,   255,   201,   256,   202,   257,   203,   258,   204,   259,
     205,   260,   206,   261,   207,   262,   208,   263,   209,   264,
     210,   265,   211,   266,   212,   267,   213,   268,   214,   269,
     215,   270,   216,   271,   217,   272,   218,   273,   219,   274,
     220,   275,   221,   276,   222,   277,   223,   278,   224,   279,
     225,   280,   226,   281,   227,   282,   228,   488,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,   490,   244,   191,
     245,   192,   246,   193,   247,   194,   248,   195,   249,   196,
     250,   197,   251,   198,   252,   199,   253,   200,   254,   201,
     255,   202,   256,   203,   257,   204,   258,   205,   259,   206,
     260,   207,   261,   208,   262,   209,   263,   210,   264,   211,
     265,   212,   266,   213,   267,   214,   268,   215,   269,   216,
     270,   217,   271,   218,   272,   219,   273,   220,   274,   221,
     275,   222,   276,   223,   277,   224,   278,   225,   279,   226,
     280,   227,   281,   228,   282,   229,   491,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,   493,   243,   191,   244,   192,   245,   193,   246,
     194,   247,   195,   248,   196,   249,   197,   250,   198,   251,
     199,   252,   200,   253,   201,   254,   202,   255,   203,   256,
     204,   257,   205,   258,   206,   259,   207,   260,   208,   261,
     209,   262,   210,   263,   211,   264,   212,   265,   213,   266,
     214,   267,   215,   268,   216,   269,   217,   270,   218,   271,
     219,   272,   220,   273,   221,   274,   222,   275,   223,   276,
     224,   277,   225,   278,   226,   279,   227,   280,   228,   281,
     229,   282,   230,   494,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,   496,   242,   191,   243,   192,
     244,   193,   245,   194,   246,   195,   247,   196,   248,   197,
     249,   198,   250,   199,   251,   200,   252,   201,   253,   202,
     254,   203,   255,   204,   256,   205,   257,   206,   258,   207,
     259,   208,   260,   209,   261,   210,   262,   211,   263,   212,
     264,   213,   265,   214,   266,   215,   267,   216,   268,   217,
     269,   218,   270,   219,   271,   220,   272,   221,   273,   222,
     274,   223,   275,   224,   276,   225,   277,   226,   278,   227,
     279,   228,   280,   229,   281,   230,   282,   231,   497,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,   499,   241,   191,   242,
     192,   243,   193,   244,   194,   245,   195,   246,   196,   247,
     197,   248,   198,   249,   199,   250,   200,   251,   201,   252,
     202,   253,   203,   254,   204,   255,   205,   256,   206,   257,
     207,   258,   208,   259,   209,   260,   210,   261,   211,   262,
     212,   263,   213,   264,   214,   265,   215,   266,   216,   267,
     217,   268,   218,   269,   219,   270,   220,   271,   221,   272,
     222,   273,   223,   274,   224,   275,   225,   276,   226,   277,
     227,   278,   228,   279,   229,   280,   230,   281,   231,   282,
     232,   500,   233,     0,   234,     0,   235,     0,   236,     0,
     237,     0,   238,     0,   239,   502,   240,   191,   241,   192,
     242,   193,   243,   194,   244,   195,   245,   196,   246,   197,
     247,   198,   248,   199,   249,   200,   250,   201,   251,   202,
     252,   203,   253,   204,   254,   205,   255,   206,   256,   207,
     257,   208,   258,   209,   259,   210,   260,   211,   261,   212,
     262,   213,   263,   214,   264,   215,   265,   216,   266,   217,
     267,   218,   268,   219,   269,   220,   270,   221,   271,   222,
     272,   223,   273,   224,   274,   225,   275,   226,   276,   227,
     277,   228,   278,   229,   279,   230,   280,   231,   281,   232,
     282,   233,   503,   234,     0,   235,     0,   236,     0,   237,
       0,   238,   505,   239,   191,   240,   192,   241,   193,   242,
     194,   243,   195,   244,   196,   245,   197,   246,   198,   247,
     199,   248,   200,   249,   201,   250,   202,   251,   203,   252,
     204,   253,   205,   254,   206,   255,   207,   256,   208,   257,
     209,   258,   210,   259,   211,   260,   212,   261,   213,   262,
     214,   263,   215,   264,   216,   265,   217,   266,   218,   267,
     219,   268,   220,   269,   221,   270,   222,   271,   223,   272,
     224,   273,   225,   274,   226,   275,   227,   276,   228,   277,
     229,   278,   230,   279,   231,   280,   232,   281,   233,   282,
     234,   506,   235,     0,   236,     0,   237,   508,   238,   191,
     239,   192,   240,   193,   241,   194,   242,   195,   243,   196,
     244,   197,   245,   198,   246,   199,   247,   200,   248,   201,
     249,   202,   250,   203,   251,   204,   252,   205,   253,   206,
     254,   207,   255,   208,   256,   209,   257,   210,   258,   211,
     259,   212,   260,   213,   261,   214,   262,   215,   263,   216,
     264,   217,   265,   218,   266,   219,   267,   220,   268,   221,
     269,   222,   270,   223,   271,   224,   272,   225,   273,   226,
     274,   227,   275,   228,   276,   229,   277,   230,   278,   231,
     279,   232,   280,   233,   281,   234,   282,   235,   509,   236,
     511,   237,   191,   238,   192,   239,   193,   240,   194,   241,
     195,   242,   196,   243,   197,   244,   198,   245,   199,   246,
     200,   247,   201,   248,   202,   249,   203,   250,   204,   251,
     205,   252,   206,   253,   207,   254,   208,   255,   209,   256,
     210,   257,   211,   258,   212,   259,   213,   260,   214,   261,
     215,   262,   216,   263,   217,   264,   218,   265,   219,   266,
     220,   267,   221,   268,   222,   269,   223,   270,   224,   271,
     225,   272,   226,   273,   227,   274,   228,   275,   229,   276,
     230,   277,   231,   278,   232,   279,   233,   280,   234,   281,
     235,   282,   236,   512,   237,   514,   238,   191,   239,   192,
     240,   193,   241,   194,   242,   195,   243,   196,   244,   197,
     245,   198,   246,   199,   247,   200,   248,   201,   249,   202,
     250,   203,   251,   204,   252,   205,   253,   206,   254,   207,
     255,   208,   256,   209,   257,   210,   258,   211,   259,   212,
     260,   213,   261,   214,   262,   215,   263,   216,   264,   217,
     265,   218,   266,   219,   267,   220,   268,   221,   269,   222,
     270,   223,   271,   224,   272,   225,   273,   226,   274,   227,
     275,   228,   276,   229,   277,   230,   278,   231,   279,   232,
     280,   233,   281,   234,   282,   235,     0,   236,     0,   237,
     515,   238,   517,   239,   191,   240,   192,   241,   193,   242,
     194,   243,   195,   244,   196,   245,   197,   246,   198,   247,
     199,   248,   200,   249,   201,   250,   202,   251,   203,   252,
     204,   253,   205,   254,   206,   255,   207,   256,   208,   257,
     209,   258,   210,   259,   211,   260,   212,   261,   213,   262,
     214,   263,   215,   264,   216,   265,   217,   266,   218,   267,
     219,   268,   220,   269,   221,   270,   222,   271,   223,   272,
     224,   273,   225,   274,   226,   275,   227,   276,   228,   277,
     229,   278,   230,   279,   231,   280,   232,   281,   233,   282,
     234,     0,   235,     0,   236,     0,   237,     0,   238,   518,
     239,   520,   240,   191,   241,   192,   242,   193,   243,   194,
     244,   195,   245,   196,   246,   197,   247,   198,   248,   199,
     249,   200,   250,   201,   251,   202,   252,   203,   253,   204,
     254,   205,   255,   206,   256,   207,   257,   208,   258,   209,
     259,   210,   260,   211,   261,   212,   262,   213,   263,   214,
     264,   215,   265,   216,   266,   217,   267,   218,   268,   219,
     269,   220,   270,   221,   271,   222,   272,   223,   273,   224,
     274,   225,   275,   226,   276,   227,   277,   228,   278,   229,
     279,   230,   280,   231,   281,   232,   282,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
     521,   240,   523,   241,   191,   242,   192,   243,   193,   244,
     194,   245,   195,   246,   196,   247,   197,   248,   198,   249,
     199,   250,   200,   251,   201,   252,   202,   253,   203,   254,
     204,   255,   205,   256,   206,   257,   207,   258,   208,   259,
     209,   260,   210,   261,   211,   262,   212,   263,   213,   264,
     214,   265,   215,   266,   216,   267,   217,   268,   218,   269,
     219,   270,   220,   271,   221,   272,   222,   273,   223,   274,
     224,   275,   225,   276,   226,   277,   227,   278,   228,   279,
     229,   280,   230,   281,   231,   282,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,   524,   241,   526,   242,   191,   243,   192,
     244,   193,   245,   194,   246,   195,   247,   196,   248,   197,
     249,   198,   250,   199,   251,   200,   252,   201,   253,   202,
     254,   203,   255,   204,   256,   205,   257,   206,   258,   207,
     259,   208,   260,   209,   261,   210,   262,   211,   263,   212,
     264,   213,   265,   214,   266,   215,   267,   216,   268,   217,
     269,   218,   270,   219,   271,   220,   272,   221,   273,   222,
     274,   223,   275,   224,   276,   225,   277,   226,   278,   227,
     279,   228,   280,   229,   281,   230,   282,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,   527,   242,
     529,   243,   191,   244,   192,   245,   193,   246,   194,   247,
     195,   248,   196,   249,   197,   250,   198,   251,   199,   252,
     200,   253,   201,   254,   202,   255,   203,   256,   204,   257,
     205,   258,   206,   259,   207,   260,   208,   261,   209,   262,
     210,   263,   211,   264,   212,   265,   213,   266,   214,   267,
     215,   268,   216,   269,   217,   270,   218,   271,   219,   272,
     220,   273,   221,   274,   222,   275,   223,   276,   224,   277,
     225,   278,   226,   279,   227,   280,   228,   281,   229,   282,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,   530,   243,   532,   244,   191,
     245,   192,   246,   193,   247,   194,   248,   195,   249,   196,
     250,   197,   251,   198,   252,   199,   253,   200,   254,   201,
     255,   202,   256,   203,   257,   204,   258,   205,   259,   206,
     260,   207,   261,   208,   262,   209,   263,   210,   264,   211,
     265,   212,   266,   213,   267,   214,   268,   215,   269,   216,
     270,   217,   271,   218,   272,   219,   273,   220,   274,   221,
     275,   222,   276,   223,   277,   224,   278,   225,   279,   226,
     280,   227,   281,   228,   282,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,   533,   244,   535,   245,   191,   246,
     192,   247,   193,   248,   194,   249,   195,   250,   196,   251,
     197,   252,   198,   253,   199,   254,   200,   255,   201,   256,
     202,   257,   203,   258,   204,   259,   205,   260,   206,   261,
     207,   262,   208,   263,   209,   264,   210,   265,   211,   266,
     212,   267,   213,   268,   214,   269,   215,   270,   216,   271,
     217,   272,   218,   273,   219,   274,   220,   275,   221,   276,
     222,   277,   223,   278,   224,   279,   225,   280,   226,   281,
     227,   282,   228,     0,   229,     0,   230,     0,   231,     0,
     232,     0,   233,     0,   234,     0,   235,     0,   236,     0,
     237,     0,   238,     0,   239,     0,   240,     0,   241,     0,
     242,     0,   243,     0,   244,   536,   245,   538,   246,   191,
     247,   192,   248,   193,   249,   194,   250,   195,   251,   196,
     252,   197,   253,   198,   254,   199,   255,   200,   256,   201,
     257,   202,   258,   203,   259,   204,   260,   205,   261,   206,
     262,   207,   263,   208,   264,   209,   265,   210,   266,   211,
     267,   212,   268,   213,   269,   214,   270,   215,   271,   216,
     272,   217,   273,   218,   274,   219,   275,   220,   276,   221,
     277,   222,   278,   223,   279,   224,   280,   225,   281,   226,
     282,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,   539,   246,
     541,   247,   191,   248,   192,   249,   193,   250,   194,   251,
     195,   252,   196,   253,   197,   254,   198,   255,   199,   256,
     200,   257,   201,   258,   202,   259,   203,   260,   204,   261,
     205,   262,   206,   263,   207,   264,   208,   265,   209,   266,
     210,   267,   211,   268,   212,   269,   213,   270,   214,   271,
     215,   272,   216,   273,   217,   274,   218,   275,   219,   276,
     220,   277,   221,   278,   222,   279,   223,   280,   224,   281,
     225,   282,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,   542,   247,   544,   248,   191,   249,   192,
     250,   193,   251,   194,   252,   195,   253,   196,   254,   197,
     255,   198,   256,   199,   257,   200,   258,   201,   259,   202,
     260,   203,   261,   204,   262,   205,   263,   206,   264,   207,
     265,   208,   266,   209,   267,   210,   268,   211,   269,   212,
     270,   213,   271,   214,   272,   215,   273,   216,   274,   217,
     275,   218,   276,   219,   277,   220,   278,   221,   279,   222,
     280,   223,   281,   224,   282,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
     545,   248,   547,   249,   191,   250,   192,   251,   193,   252,
     194,   253,   195,   254,   196,   255,   197,   256,   198,   257,
     199,   258,   200,   259,   201,   260,   202,   261,   203,   262,
     204,   263,   205,   264,   206,   265,   207,   266,   208,   267,
     209,   268,   210,   269,   211,   270,   212,   271,   213,   272,
     214,   273,   215,   274,   216,   275,   217,   276,   218,   277,
     219,   278,   220,   279,   221,   280,   222,   281,   223,   282,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,   548,
     249,   550,   250,   191,   251,   192,   252,   193,   253,   194,
     254,   195,   255,   196,   256,   197,   257,   198,   258,   199,
     259,   200,   260,   201,   261,   202,   262,   203,   263,   204,
     264,   205,   265,   206,   266,   207,   267,   208,   268,   209,
     269,   210,   270,   211,   271,   212,   272,   213,   273,   214,
     274,   215,   275,   216,   276,   217,   277,   218,   278,   219,
     279,   220,   280,   221,   281,   222,   282,   223,     0,   224,
       0,   225,     0,   226,     0,   227,     0,   228,     0,   229,
       0,   230,     0,   231,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,   242,     0,   243,     0,   244,
       0,   245,     0,   246,     0,   247,     0,   248,     0,   249,
     551,   250,   553,   251,   191,   252,   192,   253,   193,   254,
     194,   255,   195,   256,   196,   257,   197,   258,   198,   259,
     199,   260,   200,   261,   201,   262,   202,   263,   203,   264,
     204,   265,   205,   266,   206,   267,   207,   268,   208,   269,
     209,   270,   210,   271,   211,   272,   212,   273,   213,   274,
     214,   275,   215,   276,   216,   277,   217,   278,   218,   279,
     219,   280,   220,   281,   221,   282,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,   554,   251,   556,   252,   191,   253,   192,
     254,   193,   255,   194,   256,   195,   257,   196,   258,   197,
     259,   198,   260,   199,   261,   200,   262,   201,   263,   202,
     264,   203,   265,   204,   266,   205,   267,   206,   268,   207,
     269,   208,   270,   209,   271,   210,   272,   211,   273,   212,
     274,   213,   275,   214,   276,   215,   277,   216,   278,   217,
     279,   218,   280,   219,   281,   220,   282,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,   557,   252,
     559,   253,   191,   254,   192,   255,   193,   256,   194,   257,
     195,   258,   196,   259,   197,   260,   198,   261,   199,   262,
     200,   263,   201,   264,   202,   265,   203,   266,   204,   267,
     205,   268,   206,   269,   207,   270,   208,   271,   209,   272,
     210,   273,   211,   274,   212,   275,   213,   276,   214,   277,
     215,   278,   216,   279,   217,   280,   218,   281,   219,   282,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,   560,   253,   562,   254,   191,
     255,   192,   256,   193,   257,   194,   258,   195,   259,   196,
     260,   197,   261,   198,   262,   199,   263,   200,   264,   201,
     265,   202,   266,   203,   267,   204,   268,   205,   269,   206,
     270,   207,   271,   208,   272,   209,   273,   210,   274,   211,
     275,   212,   276,   213,   277,   214,   278,   215,   279,   216,
     280,   217,   281,   218,   282,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,   563,   254,   565,   255,   191,   256,
     192,   257,   193,   258,   194,   259,   195,   260,   196,   261,
     197,   262,   198,   263,   199,   264,   200,   265,   201,   266,
     202,   267,   203,   268,   204,   269,   205,   270,   206,   271,
     207,   272,   208,   273,   209,   274,   210,   275,   211,   276,
     212,   277,   213,   278,   214,   279,   215,   280,   216,   281,
     217,   282,   218,     0,   219,     0,   220,     0,   221,     0,
     222,     0,   223,     0,   224,     0,   225,     0,   226,     0,
     227,     0,   228,     0,   229,     0,   230,     0,   231,     0,
     232,     0,   233,     0,   234,     0,   235,     0,   236,     0,
     237,     0,   238,     0,   239,     0,   240,     0,   241,     0,
     242,     0,   243,     0,   244,     0,   245,     0,   246,     0,
     247,     0,   248,     0,   249,     0,   250,     0,   251,     0,
     252,     0,   253,     0,   254,   566,   255,   568,   256,   191,
     257,   192,   258,   193,   259,   194,   260,   195,   261,   196,
     262,   197,   263,   198,   264,   199,   265,   200,   266,   201,
     267,   202,   268,   203,   269,   204,   270,   205,   271,   206,
     272,   207,   273,   208,   274,   209,   275,   210,   276,   211,
     277,   212,   278,   213,   279,   214,   280,   215,   281,   216,
     282,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,   569,   256,
     571,   257,   191,   258,   192,   259,   193,   260,   194,   261,
     195,   262,   196,   263,   197,   264,   198,   265,   199,   266,
     200,   267,   201,   268,   202,   269,   203,   270,   204,   271,
     205,   272,   206,   273,   207,   274,   208,   275,   209,   276,
     210,   277,   211,   278,   212,   279,   213,   280,   214,   281,
     215,   282,   216,     0,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,     0,   256,   572,   257,   574,   258,   191,   259,   192,
     260,   193,   261,   194,   262,   195,   263,   196,   264,   197,
     265,   198,   266,   199,   267,   200,   268,   201,   269,   202,
     270,   203,   271,   204,   272,   205,   273,   206,   274,   207,
     275,   208,   276,   209,   277,   210,   278,   211,   279,   212,
     280,   213,   281,   214,   282,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
     575,   258,   577,   259,   191,   260,   192,   261,   193,   262,
     194,   263,   195,   264,   196,   265,   197,   266,   198,   267,
     199,   268,   200,   269,   201,   270,   202,   271,   203,   272,
     204,   273,   205,   274,   206,   275,   207,   276,   208,   277,
     209,   278,   210,   279,   211,   280,   212,   281,   213,   282,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,   578,
     259,   580,   260,   191,   261,   192,   262,   193,   263,   194,
     264,   195,   265,   196,   266,   197,   267,   198,   268,   199,
     269,   200,   270,   201,   271,   202,   272,   203,   273,   204,
     274,   205,   275,   206,   276,   207,   277,   208,   278,   209,
     279,   210,   280,   211,   281,   212,   282,   213,     0,   214,
       0,   215,     0,   216,     0,   217,     0,   218,     0,   219,
       0,   220,     0,   221,     0,   222,     0,   223,     0,   224,
       0,   225,     0,   226,     0,   227,     0,   228,     0,   229,
       0,   230,     0,   231,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,   242,     0,   243,     0,   244,
       0,   245,     0,   246,     0,   247,     0,   248,     0,   249,
       0,   250,     0,   251,     0,   252,     0,   253,     0,   254,
       0,   255,     0,   256,     0,   257,     0,   258,     0,   259,
     581,   260,   583,   261,   191,   262,   192,   263,   193,   264,
     194,   265,   195,   266,   196,   267,   197,   268,   198,   269,
     199,   270,   200,   271,   201,   272,   202,   273,   203,   274,
     204,   275,   205,   276,   206,   277,   207,   278,   208,   279,
     209,   280,   210,   281,   211,   282,   212,     0,   213,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,     0,
     259,     0,   260,   584,   261,   586,   262,   191,   263,   192,
     264,   193,   265,   194,   266,   195,   267,   196,   268,   197,
     269,   198,   270,   199,   271,   200,   272,   201,   273,   202,
     274,   203,   275,   204,   276,   205,   277,   206,   278,   207,
     279,   208,   280,   209,   281,   210,   282,   211,     0,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,     0,   261,   587,   262,
     589,   263,   191,   264,   192,   265,   193,   266,   194,   267,
     195,   268,   196,   269,   197,   270,   198,   271,   199,   272,
     200,   273,   201,   274,   202,   275,   203,   276,   204,   277,
     205,   278,   206,   279,   207,   280,   208,   281,   209,   282,
     210,     0,   211,     0,   212,     0,   213,     0,   214,     0,
     215,     0,   216,     0,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,     0,   256,     0,   257,     0,   258,     0,   259,     0,
     260,     0,   261,     0,   262,   590,   263,   592,   264,   191,
     265,   192,   266,   193,   267,   194,   268,   195,   269,   196,
     270,   197,   271,   198,   272,   199,   273,   200,   274,   201,
     275,   202,   276,   203,   277,   204,   278,   205,   279,   206,
     280,   207,   281,   208,   282,   209,     0,   210,     0,   211,
       0,   212,     0,   213,     0,   214,     0,   215,     0,   216,
       0,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,     0,   256,
       0,   257,     0,   258,     0,   259,     0,   260,     0,   261,
       0,   262,     0,   263,   593,   264,   595,   265,   191,   266,
     192,   267,   193,   268,   194,   269,   195,   270,   196,   271,
     197,   272,   198,   273,   199,   274,   200,   275,   201,   276,
     202,   277,   203,   278,   204,   279,   205,   280,   206,   281,
     207,   282,   208,     0,   209,     0,   210,     0,   211,     0,
     212,     0,   213,     0,   214,     0,   215,     0,   216,     0,
     217,     0,   218,     0,   219,     0,   220,     0,   221,     0,
     222,     0,   223,     0,   224,     0,   225,     0,   226,     0,
     227,     0,   228,     0,   229,     0,   230,     0,   231,     0,
     232,     0,   233,     0,   234,     0,   235,     0,   236,     0,
     237,     0,   238,     0,   239,     0,   240,     0,   241,     0,
     242,     0,   243,     0,   244,     0,   245,     0,   246,     0,
     247,     0,   248,     0,   249,     0,   250,     0,   251,     0,
     252,     0,   253,     0,   254,     0,   255,     0,   256,     0,
     257,     0,   258,     0,   259,     0,   260,     0,   261,     0,
     262,     0,   263,     0,   264,   596,   265,   598,   266,   191,
     267,   192,   268,   193,   269,   194,   270,   195,   271,   196,
     272,   197,   273,   198,   274,   199,   275,   200,   276,   201,
     277,   202,   278,   203,   279,   204,   280,   205,   281,   206,
     282,   207,     0,   208,     0,   209,     0,   210,     0,   211,
       0,   212,     0,   213,     0,   214,     0,   215,     0,   216,
       0,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,     0,   256,
       0,   257,     0,   258,     0,   259,     0,   260,     0,   261,
       0,   262,     0,   263,     0,   264,     0,   265,   599,   266,
     601,   267,   191,   268,   192,   269,   193,   270,   194,   271,
     195,   272,   196,   273,   197,   274,   198,   275,   199,   276,
     200,   277,   201,   278,   202,   279,   203,   280,   204,   281,
     205,   282,   206,     0,   207,     0,   208,     0,   209,     0,
     210,     0,   211,     0,   212,     0,   213,     0,   214,     0,
     215,     0,   216,     0,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,     0,   256,     0,   257,     0,   258,     0,   259,     0,
     260,     0,   261,     0,   262,     0,   263,     0,   264,     0,
     265,     0,   266,   602,   267,   604,   268,   191,   269,   192,
     270,   193,   271,   194,   272,   195,   273,   196,   274,   197,
     275,   198,   276,   199,   277,   200,   278,   201,   279,   202,
     280,   203,   281,   204,   282,   205,     0,   206,     0,   207,
       0,   208,     0,   209,     0,   210,     0,   211,     0,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,     0,   261,     0,   262,
       0,   263,     0,   264,     0,   265,     0,   266,     0,   267,
     605,   268,   607,   269,   191,   270,   192,   271,   193,   272,
     194,   273,   195,   274,   196,   275,   197,   276,   198,   277,
     199,   278,   200,   279,   201,   280,   202,   281,   203,   282,
     204,     0,   205,     0,   206,     0,   207,     0,   208,     0,
     209,     0,   210,     0,   211,     0,   212,     0,   213,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,     0,
     259,     0,   260,     0,   261,     0,   262,     0,   263,     0,
     264,     0,   265,     0,   266,     0,   267,     0,   268,   608,
     269,   610,   270,   191,   271,   192,   272,   193,   273,   194,
     274,   195,   275,   196,   276,   197,   277,   198,   278,   199,
     279,   200,   280,   201,   281,   202,   282,   203,     0,   204,
       0,   205,     0,   206,     0,   207,     0,   208,     0,   209,
       0,   210,     0,   211,     0,   212,     0,   213,     0,   214,
       0,   215,     0,   216,     0,   217,     0,   218,     0,   219,
       0,   220,     0,   221,     0,   222,     0,   223,     0,   224,
       0,   225,     0,   226,     0,   227,     0,   228,     0,   229,
       0,   230,     0,   231,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,   242,     0,   243,     0,   244,
       0,   245,     0,   246,     0,   247,     0,   248,     0,   249,
       0,   250,     0,   251,     0,   252,     0,   253,     0,   254,
       0,   255,     0,   256,     0,   257,     0,   258,     0,   259,
       0,   260,     0,   261,     0,   262,     0,   263,     0,   264,
       0,   265,     0,   266,     0,   267,     0,   268,     0,   269,
     611,   270,   613,   271,   191,   272,   192,   273,   193,   274,
     194,   275,   195,   276,   196,   277,   197,   278,   198,   279,
     199,   280,   200,   281,   201,   282,   202,     0,   203,     0,
     204,     0,   205,     0,   206,     0,   207,     0,   208,     0,
     209,     0,   210,     0,   211,     0,   212,     0,   213,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,     0,
     259,     0,   260,     0,   261,     0,   262,     0,   263,     0,
     264,     0,   265,     0,   266,     0,   267,     0,   268,     0,
     269,     0,   270,   614,   271,   616,   272,   191,   273,   192,
     274,   193,   275,   194,   276,   195,   277,   196,   278,   197,
     279,   198,   280,   199,   281,   200,   282,   201,     0,   202,
       0,   203,     0,   204,     0,   205,     0,   206,     0,   207,
       0,   208,     0,   209,     0,   210,     0,   211,     0,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,     0,   261,     0,   262,
       0,   263,     0,   264,     0,   265,     0,   266,     0,   267,
       0,   268,     0,   269,     0,   270,     0,   271,   617,   272,
     619,   273,   191,   274,   192,   275,   193,   276,   194,   277,
     195,   278,   196,   279,   197,   280,   198,   281,   199,   282,
     200,     0,   201,     0,   202,     0,   203,     0,   204,     0,
     205,     0,   206,     0,   207,     0,   208,     0,   209,     0,
     210,     0,   211,     0,   212,     0,   213,     0,   214,     0,
     215,     0,   216,     0,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,     0,   256,     0,   257,     0,   258,     0,   259,     0,
     260,     0,   261,     0,   262,     0,   263,     0,   264,     0,
     265,     0,   266,     0,   267,     0,   268,     0,   269,     0,
     270,     0,   271,     0,   272,   620,   273,   622,   274,   191,
     275,   192,   276,   193,   277,   194,   278,   195,   279,   196,
     280,   197,   281,   198,   282,   199,     0,   200,     0,   201,
       0,   202,     0,   203,     0,   204,     0,   205,     0,   206,
       0,   207,     0,   208,     0,   209,     0,   210,     0,   211,
       0,   212,     0,   213,     0,   214,     0,   215,     0,   216,
       0,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,     0,   256,
       0,   257,     0,   258,     0,   259,     0,   260,     0,   261,
       0,   262,     0,   263,     0,   264,     0,   265,     0,   266,
       0,   267,     0,   268,     0,   269,     0,   270,     0,   271,
       0,   272,     0,   273,   623,   274,   625,   275,   191,   276,
     192,   277,   193,   278,   194,   279,   195,   280,   196,   281,
     197,   282,   198,     0,   199,     0,   200,     0,   201,     0,
     202,     0,   203,     0,   204,     0,   205,     0,   206,     0,
     207,     0,   208,     0,   209,     0,   210,     0,   211,     0,
     212,     0,   213,     0,   214,     0,   215,     0,   216,     0,
     217,     0,   218,     0,   219,     0,   220,     0,   221,     0,
     222,     0,   223,     0,   224,     0,   225,     0,   226,     0,
     227,     0,   228,     0,   229,     0,   230,     0,   231,     0,
     232,     0,   233,     0,   234,     0,   235,     0,   236,     0,
     237,     0,   238,     0,   239,     0,   240,     0,   241,     0,
     242,     0,   243,     0,   244,     0,   245,     0,   246,     0,
     247,     0,   248,     0,   249,     0,   250,     0,   251,     0,
     252,     0,   253,     0,   254,     0,   255,     0,   256,     0,
     257,     0,   258,     0,   259,     0,   260,     0,   261,     0,
     262,     0,   263,     0,   264,     0,   265,     0,   266,     0,
     267,     0,   268,     0,   269,     0,   270,     0,   271,     0,
     272,     0,   273,     0,   274,   626,   275,   628,   276,   191,
     277,   192,   278,   193,   279,   194,   280,   195,   281,   196,
     282,   197,     0,   198,     0,   199,     0,   200,     0,   201,
       0,   202,     0,   203,     0,   204,     0,   205,     0,   206,
       0,   207,     0,   208,     0,   209,     0,   210,     0,   211,
       0,   212,     0,   213,     0,   214,     0,   215,     0,   216,
       0,   217,     0,   218,     0,   219,     0,   220,     0,   221,
       0,   222,     0,   223,     0,   224,     0,   225,     0,   226,
       0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,   242,     0,   243,     0,   244,     0,   245,     0,   246,
       0,   247,     0,   248,     0,   249,     0,   250,     0,   251,
       0,   252,     0,   253,     0,   254,     0,   255,     0,   256,
       0,   257,     0,   258,     0,   259,     0,   260,     0,   261,
       0,   262,     0,   263,     0,   264,     0,   265,     0,   266,
       0,   267,     0,   268,     0,   269,     0,   270,     0,   271,
       0,   272,     0,   273,     0,   274,     0,   275,   629,   276,
     631,   277,   191,   278,   192,   279,   193,   280,   194,   281,
     195,   282,   196,     0,   197,     0,   198,     0,   199,     0,
     200,     0,   201,     0,   202,     0,   203,     0,   204,     0,
     205,     0,   206,     0,   207,     0,   208,     0,   209,     0,
     210,     0,   211,     0,   212,     0,   213,     0,   214,     0,
     215,     0,   216,     0,   217,     0,   218,     0,   219,     0,
     220,     0,   221,     0,   222,     0,   223,     0,   224,     0,
     225,     0,   226,     0,   227,     0,   228,     0,   229,     0,
     230,     0,   231,     0,   232,     0,   233,     0,   234,     0,
     235,     0,   236,     0,   237,     0,   238,     0,   239,     0,
     240,     0,   241,     0,   242,     0,   243,     0,   244,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,     0,   252,     0,   253,     0,   254,     0,
     255,     0,   256,     0,   257,     0,   258,     0,   259,     0,
     260,     0,   261,     0,   262,     0,   263,     0,   264,     0,
     265,     0,   266,     0,   267,     0,   268,     0,   269,     0,
     270,     0,   271,     0,   272,     0,   273,     0,   274,     0,
     275,     0,   276,   632,   277,   634,   278,   191,   279,   192,
     280,   193,   281,   194,   282,   195,     0,   196,     0,   197,
       0,   198,     0,   199,     0,   200,     0,   201,     0,   202,
       0,   203,     0,   204,     0,   205,     0,   206,     0,   207,
       0,   208,     0,   209,     0,   210,     0,   211,     0,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,     0,   261,     0,   262,
       0,   263,     0,   264,     0,   265,     0,   266,     0,   267,
       0,   268,     0,   269,     0,   270,     0,   271,     0,   272,
       0,   273,     0,   274,     0,   275,     0,   276,     0,   277,
     635,   278,   637,   279,   191,   280,   192,   281,   193,   282,
     194,     0,   195,     0,   196,     0,   197,     0,   198,     0,
     199,     0,   200,     0,   201,     0,   202,     0,   203,     0,
     204,     0,   205,     0,   206,     0,   207,     0,   208,     0,
     209,     0,   210,     0,   211,     0,   212,     0,   213,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,     0,
     259,     0,   260,     0,   261,     0,   262,     0,   263,     0,
     264,     0,   265,     0,   266,     0,   267,     0,   268,     0,
     269,     0,   270,     0,   271,     0,   272,     0,   273,     0,
     274,     0,   275,     0,   276,     0,   277,     0,   278,   638,
     279,   640,   280,   191,   281,   192,   282,   193,     0,   194,
       0,   195,     0,   196,     0,   197,     0,   198,     0,   199,
       0,   200,     0,   201,     0,   202,     0,   203,     0,   204,
       0,   205,     0,   206,     0,   207,     0,   208,     0,   209,
       0,   210,     0,   211,     0,   212,     0,   213,     0,   214,
       0,   215,     0,   216,     0,   217,     0,   218,     0,   219,
       0,   220,     0,   221,     0,   222,     0,   223,     0,   224,
       0,   225,     0,   226,     0,   227,     0,   228,     0,   229,
       0,   230,     0,   231,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,   242,     0,   243,     0,   244,
       0,   245,     0,   246,     0,   247,     0,   248,     0,   249,
       0,   250,     0,   251,     0,   252,     0,   253,     0,   254,
       0,   255,     0,   256,     0,   257,     0,   258,     0,   259,
       0,   260,     0,   261,     0,   262,     0,   263,     0,   264,
       0,   265,     0,   266,     0,   267,     0,   268,     0,   269,
       0,   270,     0,   271,     0,   272,     0,   273,     0,   274,
       0,   275,     0,   276,     0,   277,     0,   278,     0,   279,
     641,   280,   643,   281,   191,   282,   192,     0,   193,     0,
     194,     0,   195,     0,   196,     0,   197,     0,   198,     0,
     199,     0,   200,     0,   201,     0,   202,     0,   203,     0,
     204,     0,   205,     0,   206,     0,   207,     0,   208,     0,
     209,     0,   210,     0,   211,     0,   212,     0,   213,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     224,     0,   225,     0,   226,     0,   227,     0,   228,     0,
     229,     0,   230,     0,   231,     0,   232,     0,   233,     0,
     234,     0,   235,     0,   236,     0,   237,     0,   238,     0,
     239,     0,   240,     0,   241,     0,   242,     0,   243,     0,
     244,     0,   245,     0,   246,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     0,
     254,     0,   255,     0,   256,     0,   257,     0,   258,     0,
     259,     0,   260,     0,   261,     0,   262,     0,   263,     0,
     264,     0,   265,     0,   266,     0,   267,     0,   268,     0,
     269,     0,   270,     0,   271,     0,   272,     0,   273,     0,
     274,     0,   275,     0,   276,     0,   277,     0,   278,     0,
     279,     0,   280,   644,   281,   646,   282,   191,     0,   192,
       0,   193,     0,   194,     0,   195,     0,   196,     0,   197,
       0,   198,     0,   199,     0,   200,     0,   201,     0,   202,
       0,   203,     0,   204,     0,   205,     0,   206,     0,   207,
       0,   208,     0,   209,     0,   210,     0,   211,     0,   212,
       0,   213,     0,   214,     0,   215,     0,   216,     0,   217,
       0,   218,     0,   219,     0,   220,     0,   221,     0,   222,
       0,   223,     0,   224,     0,   225,     0,   226,     0,   227,
       0,   228,     0,   229,     0,   230,     0,   231,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,   242,
       0,   243,     0,   244,     0,   245,     0,   246,     0,   247,
       0,   248,     0,   249,     0,   250,     0,   251,     0,   252,
       0,   253,     0,   254,     0,   255,     0,   256,     0,   257,
       0,   258,     0,   259,     0,   260,     0,   261,     0,   262,
       0,   263,     0,   264,     0,   265,     0,   266,     0,   267,
       0,   268,     0,   269,     0,   270,     0,   271,     0,   272,
       0,   273,     0,   274,     0,   275,     0,   276,     0,   277,
       0,   278,     0,   279,     0,   280,     0,   281,   647,   282,
     191,     0,   192,     0,   193,     0,   194,     0,   195,     0,
     196,     0,   197,     0,   198,     0,   199,     0,   200,     0,
     201,     0,   202,     0,   203,     0,   204,     0,   205,     0,
     206,     0,   207,     0,   208,     0,   209,     0,   210,     0,
     211,     0,   212,     0,   213,     0,   214,     0,   215,     0,
     216,     0,   217,     0,   218,     0,   219,     0,   220,     0,
     221,     0,   222,     0,   223,     0,   224,     0,   225,     0,
     226,     0,   227,     0,   228,     0,   229,     0,   230,     0,
     231,     0,   232,     0,   233,     0,   234,     0,   235,     0,
     236,     0,   237,     0,   238,     0,   239,     0,   240,     0,
     241,     0,   242,     0,   243,     0,   244,     0,   245,     0,
     246,     0,   247,     0,   248,     0,   249,     0,   250,     0,
     251,     0,   252,     0,   253,     0,   254,     0,   255,     0,
     256,     0,   257,     0,   258,     0,   259,     0,   260,     0,
     261,     0,   262,     0,   263,     0,   264,     0,   265,     0,
     266,     0,   267,     0,   268,     0,   269,     0,   270,     0,
     271,     0,   272,     0,   273,     0,   274,     0,   275,     0,
     276,     0,   277,     0,   278,     0,   279,     0,   280,     0,
     281,     0,   282,     0,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375
};

static const yytype_int16 yycheck[] =
{
       0,     1,    -1,     3,     1,     5,     3,     7,     5,     9,
       7,    11,     9,    13,    11,    15,    13,    17,    15,    19,
      17,    21,    19,    23,    21,    25,    23,    27,    25,    29,
      27,    31,    29,    33,    31,    35,    33,    37,    35,    39,
      37,    41,    39,    43,    41,    45,    43,    47,    45,    49,
      47,    51,    49,    53,    51,    55,    53,    57,    55,    59,
      57,    61,    59,    63,    61,    65,    63,    67,    65,    69,
      67,    71,    69,    73,    71,    75,    73,    77,    75,    79,
      77,    81,    79,    83,    81,    85,    83,    87,    85,    89,
      87,    91,    89,    93,    91,    95,    93,    97,    95,    99,
      97,   101,    99,   103,   101,   105,   103,   107,   105,   109,
     107,   111,   109,   113,   111,   115,   113,   117,   115,   119,
     117,   121,   119,   123,   121,   125,   123,   127,   125,   129,
     127,   131,   129,   133,   131,   135,   133,   137,   135,   139,
     137,   141,   139,   143,   141,   145,   143,   147,   145,   149,
     147,   151,   149,   153,   151,   155,   153,   157,   155,   159,
     157,   161,   159,   163,   161,   165,   163,   167,   165,   169,
     167,   171,   169,   173,   171,   175,   173,   177,   175,   179,
     177,   181,   179,   183,   181,   185,   183,   187,   185,   186,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,   155,
      -1,   157,    -1,   159,    -1,   161,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,   177,    -1,   179,    -1,   181,     1,   183,     3,   185,
       5,     6,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      15,    -1,    17,    -1,    19,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,
      45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,
     135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,
     145,    -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,
     155,    -1,   157,    -1,   159,    -1,   161,    -1,   163,    -1,
     165,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
     175,    -1,   177,    -1,   179,     1,   181,     3,   183,     5,
     185,     7,     8,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,   155,
      -1,   157,    -1,   159,    -1,   161,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,   177,     1,   179,     3,   181,     5,   183,     7,   185,
       9,    10,    11,    -1,    13,    -1,    15,    -1,    17,    -1,
      19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,
     139,    -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,
     149,    -1,   151,    -1,   153,    -1,   155,    -1,   157,    -1,
     159,    -1,   161,    -1,   163,    -1,   165,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,     1,   177,     3,
     179,     5,   181,     7,   183,     9,   185,    11,    12,    13,
      -1,    15,    -1,    17,    -1,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,
      -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,
      -1,   135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,
      -1,   145,    -1,   147,    -1,   149,    -1,   151,    -1,   153,
      -1,   155,    -1,   157,    -1,   159,    -1,   161,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
       1,   175,     3,   177,     5,   179,     7,   181,     9,   183,
      11,   185,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,    -1,
     141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,    -1,
     151,    -1,   153,    -1,   155,    -1,   157,    -1,   159,    -1,
     161,    -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,
     171,     1,   173,     3,   175,     5,   177,     7,   179,     9,
     181,    11,   183,    13,   185,    15,    16,    17,    -1,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,
      -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,
      -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,
      -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,
      -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,
      -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,
      -1,   151,    -1,   153,    -1,   155,    -1,   157,    -1,   159,
      -1,   161,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
       1,   171,     3,   173,     5,   175,     7,   177,     9,   179,
      11,   181,    13,   183,    15,   185,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,    -1,
     141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,    -1,
     151,    -1,   153,    -1,   155,    -1,   157,    -1,   159,    -1,
     161,    -1,   163,    -1,   165,    -1,   167,     1,   169,     3,
     171,     5,   173,     7,   175,     9,   177,    11,   179,    13,
     181,    15,   183,    17,   185,    19,    20,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,
      -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,
      -1,   135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,
      -1,   145,    -1,   147,    -1,   149,    -1,   151,    -1,   153,
      -1,   155,    -1,   157,    -1,   159,    -1,   161,    -1,   163,
      -1,   165,     1,   167,     3,   169,     5,   171,     7,   173,
       9,   175,    11,   177,    13,   179,    15,   181,    17,   183,
      19,   185,    21,    22,    23,    -1,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,
     139,    -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,
     149,    -1,   151,    -1,   153,    -1,   155,    -1,   157,    -1,
     159,    -1,   161,    -1,   163,     1,   165,     3,   167,     5,
     169,     7,   171,     9,   173,    11,   175,    13,   177,    15,
     179,    17,   181,    19,   183,    21,   185,    23,    24,    25,
      -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,   155,
      -1,   157,    -1,   159,    -1,   161,     1,   163,     3,   165,
       5,   167,     7,   169,     9,   171,    11,   173,    13,   175,
      15,   177,    17,   179,    19,   181,    21,   183,    23,   185,
      25,    26,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,
      45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,
     135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,
     145,    -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,
     155,    -1,   157,    -1,   159,     1,   161,     3,   163,     5,
     165,     7,   167,     9,   169,    11,   171,    13,   173,    15,
     175,    17,   177,    19,   179,    21,   181,    23,   183,    25,
     185,    27,    28,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,   155,
      -1,   157,     1,   159,     3,   161,     5,   163,     7,   165,
       9,   167,    11,   169,    13,   171,    15,   173,    17,   175,
      19,   177,    21,   179,    23,   181,    25,   183,    27,   185,
      29,    30,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,
     139,    -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,
     149,    -1,   151,    -1,   153,    -1,   155,     1,   157,     3,
     159,     5,   161,     7,   163,     9,   165,    11,   167,    13,
     169,    15,   171,    17,   173,    19,   175,    21,   177,    23,
     179,    25,   181,    27,   183,    29,   185,    31,    32,    33,
      -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,
      -1,   135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,
      -1,   145,    -1,   147,    -1,   149,    -1,   151,    -1,   153,
       1,   155,     3,   157,     5,   159,     7,   161,     9,   163,
      11,   165,    13,   167,    15,   169,    17,   171,    19,   173,
      21,   175,    23,   177,    25,   179,    27,   181,    29,   183,
      31,   185,    33,    34,    35,    -1,    37,    -1,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,    -1,
     141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,    -1,
     151,     1,   153,     3,   155,     5,   157,     7,   159,     9,
     161,    11,   163,    13,   165,    15,   167,    17,   169,    19,
     171,    21,   173,    23,   175,    25,   177,    27,   179,    29,
     181,    31,   183,    33,   185,    35,    36,    37,    -1,    39,
      -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,
      -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,
      -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,
      -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,
       1,   151,     3,   153,     5,   155,     7,   157,     9,   159,
      11,   161,    13,   163,    15,   165,    17,   167,    19,   169,
      21,   171,    23,   173,    25,   175,    27,   177,    29,   179,
      31,   181,    33,   183,    35,   185,    37,    38,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,    -1,
     141,    -1,   143,    -1,   145,    -1,   147,     1,   149,     3,
     151,     5,   153,     7,   155,     9,   157,    11,   159,    13,
     161,    15,   163,    17,   165,    19,   167,    21,   169,    23,
     171,    25,   173,    27,   175,    29,   177,    31,   179,    33,
     181,    35,   183,    37,   185,    39,    40,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,
      -1,   135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,
      -1,   145,     1,   147,     3,   149,     5,   151,     7,   153,
       9,   155,    11,   157,    13,   159,    15,   161,    17,   163,
      19,   165,    21,   167,    23,   169,    25,   171,    27,   173,
      29,   175,    31,   177,    33,   179,    35,   181,    37,   183,
      39,   185,    41,    42,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,
     139,    -1,   141,    -1,   143,     1,   145,     3,   147,     5,
     149,     7,   151,     9,   153,    11,   155,    13,   157,    15,
     159,    17,   161,    19,   163,    21,   165,    23,   167,    25,
     169,    27,   171,    29,   173,    31,   175,    33,   177,    35,
     179,    37,   181,    39,   183,    41,   185,    43,    44,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,     1,   143,     3,   145,
       5,   147,     7,   149,     9,   151,    11,   153,    13,   155,
      15,   157,    17,   159,    19,   161,    21,   163,    23,   165,
      25,   167,    27,   169,    29,   171,    31,   173,    33,   175,
      35,   177,    37,   179,    39,   181,    41,   183,    43,   185,
      45,    46,    47,    -1,    49,    -1,    51,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,
     135,    -1,   137,    -1,   139,     1,   141,     3,   143,     5,
     145,     7,   147,     9,   149,    11,   151,    13,   153,    15,
     155,    17,   157,    19,   159,    21,   161,    23,   163,    25,
     165,    27,   167,    29,   169,    31,   171,    33,   173,    35,
     175,    37,   177,    39,   179,    41,   181,    43,   183,    45,
     185,    47,    48,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,     1,   139,     3,   141,     5,   143,     7,   145,
       9,   147,    11,   149,    13,   151,    15,   153,    17,   155,
      19,   157,    21,   159,    23,   161,    25,   163,    27,   165,
      29,   167,    31,   169,    33,   171,    35,   173,    37,   175,
      39,   177,    41,   179,    43,   181,    45,   183,    47,   185,
      49,    50,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,     1,   137,     3,
     139,     5,   141,     7,   143,     9,   145,    11,   147,    13,
     149,    15,   151,    17,   153,    19,   155,    21,   157,    23,
     159,    25,   161,    27,   163,    29,   165,    31,   167,    33,
     169,    35,   171,    37,   173,    39,   175,    41,   177,    43,
     179,    45,   181,    47,   183,    49,   185,    51,    52,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,
       1,   135,     3,   137,     5,   139,     7,   141,     9,   143,
      11,   145,    13,   147,    15,   149,    17,   151,    19,   153,
      21,   155,    23,   157,    25,   159,    27,   161,    29,   163,
      31,   165,    33,   167,    35,   169,    37,   171,    39,   173,
      41,   175,    43,   177,    45,   179,    47,   181,    49,   183,
      51,   185,    53,    54,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,     1,   133,     3,   135,     5,   137,     7,   139,     9,
     141,    11,   143,    13,   145,    15,   147,    17,   149,    19,
     151,    21,   153,    23,   155,    25,   157,    27,   159,    29,
     161,    31,   163,    33,   165,    35,   167,    37,   169,    39,
     171,    41,   173,    43,   175,    45,   177,    47,   179,    49,
     181,    51,   183,    53,   185,    55,    56,    57,    -1,    59,
      -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,
      -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,
       1,   131,     3,   133,     5,   135,     7,   137,     9,   139,
      11,   141,    13,   143,    15,   145,    17,   147,    19,   149,
      21,   151,    23,   153,    25,   155,    27,   157,    29,   159,
      31,   161,    33,   163,    35,   165,    37,   167,    39,   169,
      41,   171,    43,   173,    45,   175,    47,   177,    49,   179,
      51,   181,    53,   183,    55,   185,    57,    58,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,     1,   129,     3,
     131,     5,   133,     7,   135,     9,   137,    11,   139,    13,
     141,    15,   143,    17,   145,    19,   147,    21,   149,    23,
     151,    25,   153,    27,   155,    29,   157,    31,   159,    33,
     161,    35,   163,    37,   165,    39,   167,    41,   169,    43,
     171,    45,   173,    47,   175,    49,   177,    51,   179,    53,
     181,    55,   183,    57,   185,    59,    60,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,     1,   127,     3,   129,     5,   131,     7,   133,
       9,   135,    11,   137,    13,   139,    15,   141,    17,   143,
      19,   145,    21,   147,    23,   149,    25,   151,    27,   153,
      29,   155,    31,   157,    33,   159,    35,   161,    37,   163,
      39,   165,    41,   167,    43,   169,    45,   171,    47,   173,
      49,   175,    51,   177,    53,   179,    55,   181,    57,   183,
      59,   185,    61,    62,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,     1,   125,     3,   127,     5,
     129,     7,   131,     9,   133,    11,   135,    13,   137,    15,
     139,    17,   141,    19,   143,    21,   145,    23,   147,    25,
     149,    27,   151,    29,   153,    31,   155,    33,   157,    35,
     159,    37,   161,    39,   163,    41,   165,    43,   167,    45,
     169,    47,   171,    49,   173,    51,   175,    53,   177,    55,
     179,    57,   181,    59,   183,    61,   185,    63,    64,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,     1,   123,     3,   125,
       5,   127,     7,   129,     9,   131,    11,   133,    13,   135,
      15,   137,    17,   139,    19,   141,    21,   143,    23,   145,
      25,   147,    27,   149,    29,   151,    31,   153,    33,   155,
      35,   157,    37,   159,    39,   161,    41,   163,    43,   165,
      45,   167,    47,   169,    49,   171,    51,   173,    53,   175,
      55,   177,    57,   179,    59,   181,    61,   183,    63,   185,
      65,    66,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,   119,     1,   121,     3,   123,     5,
     125,     7,   127,     9,   129,    11,   131,    13,   133,    15,
     135,    17,   137,    19,   139,    21,   141,    23,   143,    25,
     145,    27,   147,    29,   149,    31,   151,    33,   153,    35,
     155,    37,   157,    39,   159,    41,   161,    43,   163,    45,
     165,    47,   167,    49,   169,    51,   171,    53,   173,    55,
     175,    57,   177,    59,   179,    61,   181,    63,   183,    65,
     185,    67,    68,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,     1,   119,     3,   121,     5,   123,     7,   125,
       9,   127,    11,   129,    13,   131,    15,   133,    17,   135,
      19,   137,    21,   139,    23,   141,    25,   143,    27,   145,
      29,   147,    31,   149,    33,   151,    35,   153,    37,   155,
      39,   157,    41,   159,    43,   161,    45,   163,    47,   165,
      49,   167,    51,   169,    53,   171,    55,   173,    57,   175,
      59,   177,    61,   179,    63,   181,    65,   183,    67,   185,
      69,    70,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,     1,   117,     3,
     119,     5,   121,     7,   123,     9,   125,    11,   127,    13,
     129,    15,   131,    17,   133,    19,   135,    21,   137,    23,
     139,    25,   141,    27,   143,    29,   145,    31,   147,    33,
     149,    35,   151,    37,   153,    39,   155,    41,   157,    43,
     159,    45,   161,    47,   163,    49,   165,    51,   167,    53,
     169,    55,   171,    57,   173,    59,   175,    61,   177,    63,
     179,    65,   181,    67,   183,    69,   185,    71,    72,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
       1,   115,     3,   117,     5,   119,     7,   121,     9,   123,
      11,   125,    13,   127,    15,   129,    17,   131,    19,   133,
      21,   135,    23,   137,    25,   139,    27,   141,    29,   143,
      31,   145,    33,   147,    35,   149,    37,   151,    39,   153,
      41,   155,    43,   157,    45,   159,    47,   161,    49,   163,
      51,   165,    53,   167,    55,   169,    57,   171,    59,   173,
      61,   175,    63,   177,    65,   179,    67,   181,    69,   183,
      71,   185,    73,    74,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,     1,   113,     3,   115,     5,   117,     7,   119,     9,
     121,    11,   123,    13,   125,    15,   127,    17,   129,    19,
     131,    21,   133,    23,   135,    25,   137,    27,   139,    29,
     141,    31,   143,    33,   145,    35,   147,    37,   149,    39,
     151,    41,   153,    43,   155,    45,   157,    47,   159,    49,
     161,    51,   163,    53,   165,    55,   167,    57,   169,    59,
     171,    61,   173,    63,   175,    65,   177,    67,   179,    69,
     181,    71,   183,    73,   185,    75,    76,    77,    -1,    79,
      -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
       1,   111,     3,   113,     5,   115,     7,   117,     9,   119,
      11,   121,    13,   123,    15,   125,    17,   127,    19,   129,
      21,   131,    23,   133,    25,   135,    27,   137,    29,   139,
      31,   141,    33,   143,    35,   145,    37,   147,    39,   149,
      41,   151,    43,   153,    45,   155,    47,   157,    49,   159,
      51,   161,    53,   163,    55,   165,    57,   167,    59,   169,
      61,   171,    63,   173,    65,   175,    67,   177,    69,   179,
      71,   181,    73,   183,    75,   185,    77,    78,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,     1,   109,     3,
     111,     5,   113,     7,   115,     9,   117,    11,   119,    13,
     121,    15,   123,    17,   125,    19,   127,    21,   129,    23,
     131,    25,   133,    27,   135,    29,   137,    31,   139,    33,
     141,    35,   143,    37,   145,    39,   147,    41,   149,    43,
     151,    45,   153,    47,   155,    49,   157,    51,   159,    53,
     161,    55,   163,    57,   165,    59,   167,    61,   169,    63,
     171,    65,   173,    67,   175,    69,   177,    71,   179,    73,
     181,    75,   183,    77,   185,    79,    80,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,     1,   107,     3,   109,     5,   111,     7,   113,
       9,   115,    11,   117,    13,   119,    15,   121,    17,   123,
      19,   125,    21,   127,    23,   129,    25,   131,    27,   133,
      29,   135,    31,   137,    33,   139,    35,   141,    37,   143,
      39,   145,    41,   147,    43,   149,    45,   151,    47,   153,
      49,   155,    51,   157,    53,   159,    55,   161,    57,   163,
      59,   165,    61,   167,    63,   169,    65,   171,    67,   173,
      69,   175,    71,   177,    73,   179,    75,   181,    77,   183,
      79,   185,    81,    82,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,     1,   105,     3,   107,     5,
     109,     7,   111,     9,   113,    11,   115,    13,   117,    15,
     119,    17,   121,    19,   123,    21,   125,    23,   127,    25,
     129,    27,   131,    29,   133,    31,   135,    33,   137,    35,
     139,    37,   141,    39,   143,    41,   145,    43,   147,    45,
     149,    47,   151,    49,   153,    51,   155,    53,   157,    55,
     159,    57,   161,    59,   163,    61,   165,    63,   167,    65,
     169,    67,   171,    69,   173,    71,   175,    73,   177,    75,
     179,    77,   181,    79,   183,    81,   185,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,     1,   103,     3,   105,
       5,   107,     7,   109,     9,   111,    11,   113,    13,   115,
      15,   117,    17,   119,    19,   121,    21,   123,    23,   125,
      25,   127,    27,   129,    29,   131,    31,   133,    33,   135,
      35,   137,    37,   139,    39,   141,    41,   143,    43,   145,
      45,   147,    47,   149,    49,   151,    51,   153,    53,   155,
      55,   157,    57,   159,    59,   161,    61,   163,    63,   165,
      65,   167,    67,   169,    69,   171,    71,   173,    73,   175,
      75,   177,    77,   179,    79,   181,    81,   183,    83,   185,
      85,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,     1,   101,     3,   103,     5,
     105,     7,   107,     9,   109,    11,   111,    13,   113,    15,
     115,    17,   117,    19,   119,    21,   121,    23,   123,    25,
     125,    27,   127,    29,   129,    31,   131,    33,   133,    35,
     135,    37,   137,    39,   139,    41,   141,    43,   143,    45,
     145,    47,   147,    49,   149,    51,   151,    53,   153,    55,
     155,    57,   157,    59,   159,    61,   161,    63,   163,    65,
     165,    67,   167,    69,   169,    71,   171,    73,   173,    75,
     175,    77,   177,    79,   179,    81,   181,    83,   183,    85,
     185,    87,    88,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,     1,    99,     3,   101,     5,   103,     7,   105,
       9,   107,    11,   109,    13,   111,    15,   113,    17,   115,
      19,   117,    21,   119,    23,   121,    25,   123,    27,   125,
      29,   127,    31,   129,    33,   131,    35,   133,    37,   135,
      39,   137,    41,   139,    43,   141,    45,   143,    47,   145,
      49,   147,    51,   149,    53,   151,    55,   153,    57,   155,
      59,   157,    61,   159,    63,   161,    65,   163,    67,   165,
      69,   167,    71,   169,    73,   171,    75,   173,    77,   175,
      79,   177,    81,   179,    83,   181,    85,   183,    87,   185,
      89,    90,    91,    -1,    93,    -1,    95,     1,    97,     3,
      99,     5,   101,     7,   103,     9,   105,    11,   107,    13,
     109,    15,   111,    17,   113,    19,   115,    21,   117,    23,
     119,    25,   121,    27,   123,    29,   125,    31,   127,    33,
     129,    35,   131,    37,   133,    39,   135,    41,   137,    43,
     139,    45,   141,    47,   143,    49,   145,    51,   147,    53,
     149,    55,   151,    57,   153,    59,   155,    61,   157,    63,
     159,    65,   161,    67,   163,    69,   165,    71,   167,    73,
     169,    75,   171,    77,   173,    79,   175,    81,   177,    83,
     179,    85,   181,    87,   183,    89,   185,    91,    92,    93,
       1,    95,     3,    97,     5,    99,     7,   101,     9,   103,
      11,   105,    13,   107,    15,   109,    17,   111,    19,   113,
      21,   115,    23,   117,    25,   119,    27,   121,    29,   123,
      31,   125,    33,   127,    35,   129,    37,   131,    39,   133,
      41,   135,    43,   137,    45,   139,    47,   141,    49,   143,
      51,   145,    53,   147,    55,   149,    57,   151,    59,   153,
      61,   155,    63,   157,    65,   159,    67,   161,    69,   163,
      71,   165,    73,   167,    75,   169,    77,   171,    79,   173,
      81,   175,    83,   177,    85,   179,    87,   181,    89,   183,
      91,   185,    93,    94,    95,     1,    97,     3,    99,     5,
     101,     7,   103,     9,   105,    11,   107,    13,   109,    15,
     111,    17,   113,    19,   115,    21,   117,    23,   119,    25,
     121,    27,   123,    29,   125,    31,   127,    33,   129,    35,
     131,    37,   133,    39,   135,    41,   137,    43,   139,    45,
     141,    47,   143,    49,   145,    51,   147,    53,   149,    55,
     151,    57,   153,    59,   155,    61,   157,    63,   159,    65,
     161,    67,   163,    69,   165,    71,   167,    73,   169,    75,
     171,    77,   173,    79,   175,    81,   177,    83,   179,    85,
     181,    87,   183,    89,   185,    91,    -1,    93,    -1,    95,
      96,    97,     1,    99,     3,   101,     5,   103,     7,   105,
       9,   107,    11,   109,    13,   111,    15,   113,    17,   115,
      19,   117,    21,   119,    23,   121,    25,   123,    27,   125,
      29,   127,    31,   129,    33,   131,    35,   133,    37,   135,
      39,   137,    41,   139,    43,   141,    45,   143,    47,   145,
      49,   147,    51,   149,    53,   151,    55,   153,    57,   155,
      59,   157,    61,   159,    63,   161,    65,   163,    67,   165,
      69,   167,    71,   169,    73,   171,    75,   173,    77,   175,
      79,   177,    81,   179,    83,   181,    85,   183,    87,   185,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    98,
      99,     1,   101,     3,   103,     5,   105,     7,   107,     9,
     109,    11,   111,    13,   113,    15,   115,    17,   117,    19,
     119,    21,   121,    23,   123,    25,   125,    27,   127,    29,
     129,    31,   131,    33,   133,    35,   135,    37,   137,    39,
     139,    41,   141,    43,   143,    45,   145,    47,   147,    49,
     149,    51,   151,    53,   153,    55,   155,    57,   157,    59,
     159,    61,   161,    63,   163,    65,   165,    67,   167,    69,
     169,    71,   171,    73,   173,    75,   175,    77,   177,    79,
     179,    81,   181,    83,   183,    85,   185,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
     100,   101,     1,   103,     3,   105,     5,   107,     7,   109,
       9,   111,    11,   113,    13,   115,    15,   117,    17,   119,
      19,   121,    21,   123,    23,   125,    25,   127,    27,   129,
      29,   131,    31,   133,    33,   135,    35,   137,    37,   139,
      39,   141,    41,   143,    43,   145,    45,   147,    47,   149,
      49,   151,    51,   153,    53,   155,    55,   157,    57,   159,
      59,   161,    61,   163,    63,   165,    65,   167,    67,   169,
      69,   171,    71,   173,    73,   175,    75,   177,    77,   179,
      79,   181,    81,   183,    83,   185,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,   102,   103,     1,   105,     3,   107,     5,
     109,     7,   111,     9,   113,    11,   115,    13,   117,    15,
     119,    17,   121,    19,   123,    21,   125,    23,   127,    25,
     129,    27,   131,    29,   133,    31,   135,    33,   137,    35,
     139,    37,   141,    39,   143,    41,   145,    43,   147,    45,
     149,    47,   151,    49,   153,    51,   155,    53,   157,    55,
     159,    57,   161,    59,   163,    61,   165,    63,   167,    65,
     169,    67,   171,    69,   173,    71,   175,    73,   177,    75,
     179,    77,   181,    79,   183,    81,   185,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,   104,   105,
       1,   107,     3,   109,     5,   111,     7,   113,     9,   115,
      11,   117,    13,   119,    15,   121,    17,   123,    19,   125,
      21,   127,    23,   129,    25,   131,    27,   133,    29,   135,
      31,   137,    33,   139,    35,   141,    37,   143,    39,   145,
      41,   147,    43,   149,    45,   151,    47,   153,    49,   155,
      51,   157,    53,   159,    55,   161,    57,   163,    59,   165,
      61,   167,    63,   169,    65,   171,    67,   173,    69,   175,
      71,   177,    73,   179,    75,   181,    77,   183,    79,   185,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,   106,   107,     1,   109,     3,
     111,     5,   113,     7,   115,     9,   117,    11,   119,    13,
     121,    15,   123,    17,   125,    19,   127,    21,   129,    23,
     131,    25,   133,    27,   135,    29,   137,    31,   139,    33,
     141,    35,   143,    37,   145,    39,   147,    41,   149,    43,
     151,    45,   153,    47,   155,    49,   157,    51,   159,    53,
     161,    55,   163,    57,   165,    59,   167,    61,   169,    63,
     171,    65,   173,    67,   175,    69,   177,    71,   179,    73,
     181,    75,   183,    77,   185,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,   108,   109,     1,   111,     3,   113,
       5,   115,     7,   117,     9,   119,    11,   121,    13,   123,
      15,   125,    17,   127,    19,   129,    21,   131,    23,   133,
      25,   135,    27,   137,    29,   139,    31,   141,    33,   143,
      35,   145,    37,   147,    39,   149,    41,   151,    43,   153,
      45,   155,    47,   157,    49,   159,    51,   161,    53,   163,
      55,   165,    57,   167,    59,   169,    61,   171,    63,   173,
      65,   175,    67,   177,    69,   179,    71,   181,    73,   183,
      75,   185,    77,    -1,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,   110,   111,     1,   113,     3,
     115,     5,   117,     7,   119,     9,   121,    11,   123,    13,
     125,    15,   127,    17,   129,    19,   131,    21,   133,    23,
     135,    25,   137,    27,   139,    29,   141,    31,   143,    33,
     145,    35,   147,    37,   149,    39,   151,    41,   153,    43,
     155,    45,   157,    47,   159,    49,   161,    51,   163,    53,
     165,    55,   167,    57,   169,    59,   171,    61,   173,    63,
     175,    65,   177,    67,   179,    69,   181,    71,   183,    73,
     185,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,   112,   113,
       1,   115,     3,   117,     5,   119,     7,   121,     9,   123,
      11,   125,    13,   127,    15,   129,    17,   131,    19,   133,
      21,   135,    23,   137,    25,   139,    27,   141,    29,   143,
      31,   145,    33,   147,    35,   149,    37,   151,    39,   153,
      41,   155,    43,   157,    45,   159,    47,   161,    49,   163,
      51,   165,    53,   167,    55,   169,    57,   171,    59,   173,
      61,   175,    63,   177,    65,   179,    67,   181,    69,   183,
      71,   185,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,   114,   115,     1,   117,     3,   119,     5,
     121,     7,   123,     9,   125,    11,   127,    13,   129,    15,
     131,    17,   133,    19,   135,    21,   137,    23,   139,    25,
     141,    27,   143,    29,   145,    31,   147,    33,   149,    35,
     151,    37,   153,    39,   155,    41,   157,    43,   159,    45,
     161,    47,   163,    49,   165,    51,   167,    53,   169,    55,
     171,    57,   173,    59,   175,    61,   177,    63,   179,    65,
     181,    67,   183,    69,   185,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
     116,   117,     1,   119,     3,   121,     5,   123,     7,   125,
       9,   127,    11,   129,    13,   131,    15,   133,    17,   135,
      19,   137,    21,   139,    23,   141,    25,   143,    27,   145,
      29,   147,    31,   149,    33,   151,    35,   153,    37,   155,
      39,   157,    41,   159,    43,   161,    45,   163,    47,   165,
      49,   167,    51,   169,    53,   171,    55,   173,    57,   175,
      59,   177,    61,   179,    63,   181,    65,   183,    67,   185,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,   118,
     119,     1,   121,     3,   123,     5,   125,     7,   127,     9,
     129,    11,   131,    13,   133,    15,   135,    17,   137,    19,
     139,    21,   141,    23,   143,    25,   145,    27,   147,    29,
     149,    31,   151,    33,   153,    35,   155,    37,   157,    39,
     159,    41,   161,    43,   163,    45,   165,    47,   167,    49,
     169,    51,   171,    53,   173,    55,   175,    57,   177,    59,
     179,    61,   181,    63,   183,    65,   185,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,
     120,   121,     1,   123,     3,   125,     5,   127,     7,   129,
       9,   131,    11,   133,    13,   135,    15,   137,    17,   139,
      19,   141,    21,   143,    23,   145,    25,   147,    27,   149,
      29,   151,    31,   153,    33,   155,    35,   157,    37,   159,
      39,   161,    41,   163,    43,   165,    45,   167,    47,   169,
      49,   171,    51,   173,    53,   175,    55,   177,    57,   179,
      59,   181,    61,   183,    63,   185,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,   122,   123,     1,   125,     3,   127,     5,
     129,     7,   131,     9,   133,    11,   135,    13,   137,    15,
     139,    17,   141,    19,   143,    21,   145,    23,   147,    25,
     149,    27,   151,    29,   153,    31,   155,    33,   157,    35,
     159,    37,   161,    39,   163,    41,   165,    43,   167,    45,
     169,    47,   171,    49,   173,    51,   175,    53,   177,    55,
     179,    57,   181,    59,   183,    61,   185,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,   124,   125,
       1,   127,     3,   129,     5,   131,     7,   133,     9,   135,
      11,   137,    13,   139,    15,   141,    17,   143,    19,   145,
      21,   147,    23,   149,    25,   151,    27,   153,    29,   155,
      31,   157,    33,   159,    35,   161,    37,   163,    39,   165,
      41,   167,    43,   169,    45,   171,    47,   173,    49,   175,
      51,   177,    53,   179,    55,   181,    57,   183,    59,   185,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,   126,   127,     1,   129,     3,
     131,     5,   133,     7,   135,     9,   137,    11,   139,    13,
     141,    15,   143,    17,   145,    19,   147,    21,   149,    23,
     151,    25,   153,    27,   155,    29,   157,    31,   159,    33,
     161,    35,   163,    37,   165,    39,   167,    41,   169,    43,
     171,    45,   173,    47,   175,    49,   177,    51,   179,    53,
     181,    55,   183,    57,   185,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,   128,   129,     1,   131,     3,   133,
       5,   135,     7,   137,     9,   139,    11,   141,    13,   143,
      15,   145,    17,   147,    19,   149,    21,   151,    23,   153,
      25,   155,    27,   157,    29,   159,    31,   161,    33,   163,
      35,   165,    37,   167,    39,   169,    41,   171,    43,   173,
      45,   175,    47,   177,    49,   179,    51,   181,    53,   183,
      55,   185,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,   127,    -1,   129,   130,   131,     1,   133,     3,
     135,     5,   137,     7,   139,     9,   141,    11,   143,    13,
     145,    15,   147,    17,   149,    19,   151,    21,   153,    23,
     155,    25,   157,    27,   159,    29,   161,    31,   163,    33,
     165,    35,   167,    37,   169,    39,   171,    41,   173,    43,
     175,    45,   177,    47,   179,    49,   181,    51,   183,    53,
     185,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,   132,   133,
       1,   135,     3,   137,     5,   139,     7,   141,     9,   143,
      11,   145,    13,   147,    15,   149,    17,   151,    19,   153,
      21,   155,    23,   157,    25,   159,    27,   161,    29,   163,
      31,   165,    33,   167,    35,   169,    37,   171,    39,   173,
      41,   175,    43,   177,    45,   179,    47,   181,    49,   183,
      51,   185,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,    -1,   133,   134,   135,     1,   137,     3,   139,     5,
     141,     7,   143,     9,   145,    11,   147,    13,   149,    15,
     151,    17,   153,    19,   155,    21,   157,    23,   159,    25,
     161,    27,   163,    29,   165,    31,   167,    33,   169,    35,
     171,    37,   173,    39,   175,    41,   177,    43,   179,    45,
     181,    47,   183,    49,   185,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
     136,   137,     1,   139,     3,   141,     5,   143,     7,   145,
       9,   147,    11,   149,    13,   151,    15,   153,    17,   155,
      19,   157,    21,   159,    23,   161,    25,   163,    27,   165,
      29,   167,    31,   169,    33,   171,    35,   173,    37,   175,
      39,   177,    41,   179,    43,   181,    45,   183,    47,   185,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,   138,
     139,     1,   141,     3,   143,     5,   145,     7,   147,     9,
     149,    11,   151,    13,   153,    15,   155,    17,   157,    19,
     159,    21,   161,    23,   163,    25,   165,    27,   167,    29,
     169,    31,   171,    33,   173,    35,   175,    37,   177,    39,
     179,    41,   181,    43,   183,    45,   185,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,
      -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,
      -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,
     140,   141,     1,   143,     3,   145,     5,   147,     7,   149,
       9,   151,    11,   153,    13,   155,    15,   157,    17,   159,
      19,   161,    21,   163,    23,   165,    25,   167,    27,   169,
      29,   171,    31,   173,    33,   175,    35,   177,    37,   179,
      39,   181,    41,   183,    43,   185,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,
     139,    -1,   141,   142,   143,     1,   145,     3,   147,     5,
     149,     7,   151,     9,   153,    11,   155,    13,   157,    15,
     159,    17,   161,    19,   163,    21,   165,    23,   167,    25,
     169,    27,   171,    29,   173,    31,   175,    33,   177,    35,
     179,    37,   181,    39,   183,    41,   185,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,    -1,   143,   144,   145,
       1,   147,     3,   149,     5,   151,     7,   153,     9,   155,
      11,   157,    13,   159,    15,   161,    17,   163,    19,   165,
      21,   167,    23,   169,    25,   171,    27,   173,    29,   175,
      31,   177,    33,   179,    35,   181,    37,   183,    39,   185,
      41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,    -1,
     141,    -1,   143,    -1,   145,   146,   147,     1,   149,     3,
     151,     5,   153,     7,   155,     9,   157,    11,   159,    13,
     161,    15,   163,    17,   165,    19,   167,    21,   169,    23,
     171,    25,   173,    27,   175,    29,   177,    31,   179,    33,
     181,    35,   183,    37,   185,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,
      -1,   135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,
      -1,   145,    -1,   147,   148,   149,     1,   151,     3,   153,
       5,   155,     7,   157,     9,   159,    11,   161,    13,   163,
      15,   165,    17,   167,    19,   169,    21,   171,    23,   173,
      25,   175,    27,   177,    29,   179,    31,   181,    33,   183,
      35,   185,    37,    -1,    39,    -1,    41,    -1,    43,    -1,
      45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,
     135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,     1,   153,     3,
     155,     5,   157,     7,   159,     9,   161,    11,   163,    13,
     165,    15,   167,    17,   169,    19,   171,    21,   173,    23,
     175,    25,   177,    27,   179,    29,   181,    31,   183,    33,
     185,    35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,
      -1,   135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,
      -1,   145,    -1,   147,    -1,   149,    -1,   151,   152,   153,
       1,   155,     3,   157,     5,   159,     7,   161,     9,   163,
      11,   165,    13,   167,    15,   169,    17,   171,    19,   173,
      21,   175,    23,   177,    25,   179,    27,   181,    29,   183,
      31,   185,    33,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,    -1,
     141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,    -1,
     151,    -1,   153,   154,   155,     1,   157,     3,   159,     5,
     161,     7,   163,     9,   165,    11,   167,    13,   169,    15,
     171,    17,   173,    19,   175,    21,   177,    23,   179,    25,
     181,    27,   183,    29,   185,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,   155,
     156,   157,     1,   159,     3,   161,     5,   163,     7,   165,
       9,   167,    11,   169,    13,   171,    15,   173,    17,   175,
      19,   177,    21,   179,    23,   181,    25,   183,    27,   185,
      29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,
     139,    -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,
     149,    -1,   151,    -1,   153,    -1,   155,    -1,   157,   158,
     159,     1,   161,     3,   163,     5,   165,     7,   167,     9,
     169,    11,   171,    13,   173,    15,   175,    17,   177,    19,
     179,    21,   181,    23,   183,    25,   185,    27,    -1,    29,
      -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,
      -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,
      -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,
      -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,
      -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,
      -1,   151,    -1,   153,    -1,   155,    -1,   157,    -1,   159,
     160,   161,     1,   163,     3,   165,     5,   167,     7,   169,
       9,   171,    11,   173,    13,   175,    15,   177,    17,   179,
      19,   181,    21,   183,    23,   185,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,
     139,    -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,
     149,    -1,   151,    -1,   153,    -1,   155,    -1,   157,    -1,
     159,    -1,   161,   162,   163,     1,   165,     3,   167,     5,
     169,     7,   171,     9,   173,    11,   175,    13,   177,    15,
     179,    17,   181,    19,   183,    21,   185,    23,    -1,    25,
      -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,   155,
      -1,   157,    -1,   159,    -1,   161,    -1,   163,   164,   165,
       1,   167,     3,   169,     5,   171,     7,   173,     9,   175,
      11,   177,    13,   179,    15,   181,    17,   183,    19,   185,
      21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,    -1,
     141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,    -1,
     151,    -1,   153,    -1,   155,    -1,   157,    -1,   159,    -1,
     161,    -1,   163,    -1,   165,   166,   167,     1,   169,     3,
     171,     5,   173,     7,   175,     9,   177,    11,   179,    13,
     181,    15,   183,    17,   185,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,
      -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,
      -1,   135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,
      -1,   145,    -1,   147,    -1,   149,    -1,   151,    -1,   153,
      -1,   155,    -1,   157,    -1,   159,    -1,   161,    -1,   163,
      -1,   165,    -1,   167,   168,   169,     1,   171,     3,   173,
       5,   175,     7,   177,     9,   179,    11,   181,    13,   183,
      15,   185,    17,    -1,    19,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,
      45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,
     135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,
     145,    -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,
     155,    -1,   157,    -1,   159,    -1,   161,    -1,   163,    -1,
     165,    -1,   167,    -1,   169,   170,   171,     1,   173,     3,
     175,     5,   177,     7,   179,     9,   181,    11,   183,    13,
     185,    15,    -1,    17,    -1,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,
      -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,   133,
      -1,   135,    -1,   137,    -1,   139,    -1,   141,    -1,   143,
      -1,   145,    -1,   147,    -1,   149,    -1,   151,    -1,   153,
      -1,   155,    -1,   157,    -1,   159,    -1,   161,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,   171,   172,   173,
       1,   175,     3,   177,     5,   179,     7,   181,     9,   183,
      11,   185,    13,    -1,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,    -1,
     131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,    -1,
     141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,    -1,
     151,    -1,   153,    -1,   155,    -1,   157,    -1,   159,    -1,
     161,    -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,   174,   175,     1,   177,     3,   179,     5,
     181,     7,   183,     9,   185,    11,    -1,    13,    -1,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,   155,
      -1,   157,    -1,   159,    -1,   161,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
     176,   177,     1,   179,     3,   181,     5,   183,     7,   185,
       9,    -1,    11,    -1,    13,    -1,    15,    -1,    17,    -1,
      19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,
     139,    -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,
     149,    -1,   151,    -1,   153,    -1,   155,    -1,   157,    -1,
     159,    -1,   161,    -1,   163,    -1,   165,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,    -1,   177,   178,
     179,     1,   181,     3,   183,     5,   185,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    15,    -1,    17,    -1,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,
      -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,
      -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,   119,
      -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,   129,
      -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,   139,
      -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,   149,
      -1,   151,    -1,   153,    -1,   155,    -1,   157,    -1,   159,
      -1,   161,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,   175,    -1,   177,    -1,   179,
     180,   181,     1,   183,     3,   185,     5,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    15,    -1,    17,    -1,
      19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,
     109,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   131,    -1,   133,    -1,   135,    -1,   137,    -1,
     139,    -1,   141,    -1,   143,    -1,   145,    -1,   147,    -1,
     149,    -1,   151,    -1,   153,    -1,   155,    -1,   157,    -1,
     159,    -1,   161,    -1,   163,    -1,   165,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,    -1,   177,    -1,
     179,    -1,   181,   182,   183,     1,   185,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,   119,    -1,   121,    -1,   123,    -1,   125,
      -1,   127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,
      -1,   137,    -1,   139,    -1,   141,    -1,   143,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,   155,
      -1,   157,    -1,   159,    -1,   161,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,   177,    -1,   179,    -1,   181,    -1,   183,   184,   185,
       3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,    -1,
      13,    -1,    15,    -1,    17,    -1,    19,    -1,    21,    -1,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      33,    -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,
      43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,
      53,    -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,
      63,    -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,
      83,    -1,    85,    -1,    87,    -1,    89,    -1,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,
     103,    -1,   105,    -1,   107,    -1,   109,    -1,   111,    -1,
     113,    -1,   115,    -1,   117,    -1,   119,    -1,   121,    -1,
     123,    -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,
     133,    -1,   135,    -1,   137,    -1,   139,    -1,   141,    -1,
     143,    -1,   145,    -1,   147,    -1,   149,    -1,   151,    -1,
     153,    -1,   155,    -1,   157,    -1,   159,    -1,   161,    -1,
     163,    -1,   165,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,    -1,   177,    -1,   179,    -1,   181,    -1,
     183,    -1,   185,    -1,   187,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   189,     0,     1,   190,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     191,     3,     5,     7,     9,    11,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    49,    51,    53,    55,    57,    59,
      61,    63,    65,    67,    69,    71,    73,    75,    77,    79,
      81,    83,    85,    87,    89,    91,    93,    95,    97,    99,
     101,   103,   105,   107,   109,   111,   113,   115,   117,   119,
     121,   123,   125,   127,   129,   131,   133,   135,   137,   139,
     141,   143,   145,   147,   149,   151,   153,   155,   157,   159,
     161,   163,   165,   167,   169,   171,   173,   175,   177,   179,
     181,   183,   185,   187,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,     1,     4,   192,     1,
       6,   193,     1,     8,   194,     1,    10,   195,     1,    12,
     196,     1,    14,   197,     1,    16,   198,     1,    18,   199,
       1,    20,   200,     1,    22,   201,     1,    24,   202,     1,
      26,   203,     1,    28,   204,     1,    30,   205,     1,    32,
     206,     1,    34,   207,     1,    36,   208,     1,    38,   209,
       1,    40,   210,     1,    42,   211,     1,    44,   212,     1,
      46,   213,     1,    48,   214,     1,    50,   215,     1,    52,
     216,     1,    54,   217,     1,    56,   218,     1,    58,   219,
       1,    60,   220,     1,    62,   221,     1,    64,   222,     1,
      66,   223,     1,    68,   224,     1,    70,   225,     1,    72,
     226,     1,    74,   227,     1,    76,   228,     1,    78,   229,
       1,    80,   230,     1,    82,   231,     1,    84,   232,     1,
      86,   233,     1,    88,   234,     1,    90,   235,     1,    92,
     236,     1,    94,   237,     1,    96,   238,     1,    98,   239,
       1,   100,   240,     1,   102,   241,     1,   104,   242,     1,
     106,   243,     1,   108,   244,     1,   110,   245,     1,   112,
     246,     1,   114,   247,     1,   116,   248,     1,   118,   249,
       1,   120,   250,     1,   122,   251,     1,   124,   252,     1,
     126,   253,     1,   128,   254,     1,   130,   255,     1,   132,
     256,     1,   134,   257,     1,   136,   258,     1,   138,   259,
       1,   140,   260,     1,   142,   261,     1,   144,   262,     1,
     146,   263,     1,   148,   264,     1,   150,   265,     1,   152,
     266,     1,   154,   267,     1,   156,   268,     1,   158,   269,
       1,   160,   270,     1,   162,   271,     1,   164,   272,     1,
     166,   273,     1,   168,   274,     1,   170,   275,     1,   172,
     276,     1,   174,   277,     1,   176,   278,     1,   178,   279,
       1,   180,   280,     1,   182,   281,     1,   184,   282,     1,
     186,   283
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce line empty\n"); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce line END\n"); return 0; }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    { yyerrok; errors++; }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document empty\n"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document ANCHOR_OPEN\n"); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document ABBR_OPEN\n"); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document ACRONYM_OPEN\n"); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document ADDRESS_OPEN\n"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document APPLET_OPEN\n"); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document AREA_OPEN\n"); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document B_OPEN\n"); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document BASE_OPEN\n"); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document BASEFONT_OPEN\n"); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document BDO_OPEN\n"); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document BIG_OPEN\n"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document BLOCKQUOTE_OPEN\n"); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document BODY_OPEN\n"); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document BR_OPEN\n"); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document BUTTON_OPEN\n"); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document CAPTION_OPEN\n"); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document CENTER_OPEN\n"); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document CITE_OPEN\n"); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document CODE_OPEN\n"); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 236 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document COL_OPEN\n"); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document COLGROUP_OPEN\n"); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document DD_OPEN\n"); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document DEL_OPEN\n"); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document DFN_OPEN\n"); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document DIR_OPEN\n"); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document DIV_OPEN\n"); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document DL_OPEN\n"); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document DT_OPEN\n"); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document EM_OPEN\n"); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document FIELDSET_OPEN\n"); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document FONT_OPEN\n"); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document FORM_OPEN\n"); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document FRAME_OPEN\n"); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document FRAMESET_OPEN\n"); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document H1_OPEN\n"); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document H2_OPEN\n"); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document H3_OPEN\n"); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document H4_OPEN\n"); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document H5_OPEN\n"); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document H6_OPEN\n"); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document HEAD_OPEN\n"); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document HR_OPEN\n"); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document HTML_OPEN\n"); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document I_OPEN\n"); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document IFRAME_OPEN\n"); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document IMG_OPEN\n"); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document INPUT_OPEN\n"); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document INS_OPEN\n"); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document ISINDEX_OPEN\n"); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document KBD_OPEN\n"); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document LABEL_OPEN\n"); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document LEGEND_OPEN\n"); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document LI_OPEN\n"); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document LINK_OPEN\n"); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document MAP_OPEN\n"); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document MENU_OPEN\n"); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document META_OPEN\n"); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document NOFRAMES_OPEN\n"); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document NOSCRIPT_OPEN\n"); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document OBJECT_OPEN\n"); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document OL_OPEN\n"); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document OPTGROUP_OPEN\n"); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document OPTION_OPEN\n"); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document P_OPEN\n"); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document PARAM_OPEN\n"); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document PRE_OPEN\n"); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document Q_OPEN\n"); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document S_OPEN\n"); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document SAMP_OPEN\n"); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document SCRIPT_OPEN\n"); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document SELECT_OPEN\n"); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document SMALL_OPEN\n"); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document SPAN_OPEN\n"); }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document STRIKE_OPEN\n"); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document STRONG_OPEN\n"); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document STYLE_OPEN\n"); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document SUB_OPEN\n"); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 294 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document SUP_OPEN\n"); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document TABLE_OPEN\n"); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document TBODY_OPEN\n"); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document TD_OPEN\n"); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document TEXTAREA_OPEN\n"); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document TFOOT_OPEN\n"); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document TH_OPEN\n"); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document THEAD_OPEN\n"); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document TITLE_OPEN\n"); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document TR_OPEN\n"); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document TT_OPEN\n"); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document U_OPEN\n"); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document UL_OPEN\n"); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document VAR_OPEN\n"); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce document XMP_OPEN\n"); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ANCHOR_OPEN\n"); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 313 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ANCHOR_CLOSE\n"); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ABBR_OPEN\n"); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ABBR_CLOSE\n"); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ACRONYM_OPEN\n"); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ACRONYM_CLOSE\n"); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 318 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ADDRESS_OPEN\n"); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 319 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ADDRESS_CLOSE\n"); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token APPLET_OPEN\n"); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token APPLET_CLOSE\n"); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token AREA_OPEN\n"); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token AREA_CLOSE\n"); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token B_OPEN\n"); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 325 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token B_CLOSE\n"); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BASE_OPEN\n"); }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BASE_CLOSE\n"); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BASEFONT_OPEN\n"); }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BASEFONT_CLOSE\n"); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 330 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BDO_OPEN\n"); }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BDO_CLOSE\n"); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BIG_OPEN\n"); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 333 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BIG_CLOSE\n"); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 334 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BLOCKQUOTE_OPEN\n"); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BLOCKQUOTE_CLOSE\n"); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BODY_OPEN\n"); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 337 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BODY_CLOSE\n"); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BR_OPEN\n"); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 339 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BR_CLOSE\n"); }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 340 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BUTTON_OPEN\n"); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 341 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token BUTTON_CLOSE\n"); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token CAPTION_OPEN\n"); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 343 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token CAPTION_CLOSE\n"); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token CENTER_OPEN\n"); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 345 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token CENTER_CLOSE\n"); }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 346 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token CITE_OPEN\n"); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 347 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token CITE_CLOSE\n"); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token CODE_OPEN\n"); }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token CODE_CLOSE\n"); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token COL_OPEN\n"); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 351 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token COL_CLOSE\n"); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token COLGROUP_OPEN\n"); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 353 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token COLGROUP_CLOSE\n"); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DD_OPEN\n"); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 355 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DD_CLOSE\n"); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DEL_OPEN\n"); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 357 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DEL_CLOSE\n"); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DFN_OPEN\n"); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DFN_CLOSE\n"); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DIR_OPEN\n"); }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 361 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DIR_CLOSE\n"); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DIV_OPEN\n"); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DIV_CLOSE\n"); }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 364 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DL_OPEN\n"); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DL_CLOSE\n"); }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DT_OPEN\n"); }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 367 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token DT_CLOSE\n"); }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token EM_OPEN\n"); }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token EM_CLOSE\n"); }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 370 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FIELDSET_OPEN\n"); }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 371 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FIELDSET_CLOSE\n"); }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FONT_OPEN\n"); }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FONT_CLOSE\n"); }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 374 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FORM_OPEN\n"); }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FORM_CLOSE\n"); }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FRAME_OPEN\n"); }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 377 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FRAME_CLOSE\n"); }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 378 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FRAMESET_OPEN\n"); }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 379 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token FRAMESET_CLOSE\n"); }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 380 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H1_OPEN\n"); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 381 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H1_CLOSE\n"); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 382 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H2_OPEN\n"); }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 383 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H2_CLOSE\n"); }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 384 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H3_OPEN\n"); }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 385 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H3_CLOSE\n"); }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 386 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H4_OPEN\n"); }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 387 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H4_CLOSE\n"); }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 388 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H5_OPEN\n"); }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 389 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H5_CLOSE\n"); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H6_OPEN\n"); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 391 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token H6_CLOSE\n"); }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 392 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token HEAD_OPEN\n"); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 393 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token HEAD_CLOSE\n"); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 394 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token HR_OPEN\n"); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 395 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token HR_CLOSE\n"); }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 396 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token HTML_OPEN\n"); }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 397 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token HTML_CLOSE\n"); }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token I_OPEN\n"); }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 399 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token I_CLOSE\n"); }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 400 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token IFRAME_OPEN\n"); }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 401 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token IFRAME_CLOSE\n"); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 402 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token IMG_OPEN\n"); }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 403 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token IMG_CLOSE\n"); }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 404 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token INPUT_OPEN\n"); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 405 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token INPUT_CLOSE\n"); }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 406 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token INS_OPEN\n"); }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 407 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token INS_CLOSE\n"); }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 408 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ISINDEX_OPEN\n"); }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 409 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token ISINDEX_CLOSE\n"); }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token KBD_OPEN\n"); }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 411 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token KBD_CLOSE\n"); }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 412 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token LABEL_OPEN\n"); }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 413 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token LABEL_CLOSE\n"); }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 414 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token LEGEND_OPEN\n"); }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 415 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token LEGEND_CLOSE\n"); }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 416 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token LI_OPEN\n"); }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token LI_CLOSE\n"); }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 418 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token LINK_OPEN\n"); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 419 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token LINK_CLOSE\n"); }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 420 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token MAP_OPEN\n"); }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token MAP_CLOSE\n"); }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 422 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token MENU_OPEN\n"); }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token MENU_CLOSE\n"); }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 424 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token META_OPEN\n"); }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 425 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token META_CLOSE\n"); }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token NOFRAMES_OPEN\n"); }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 427 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token NOFRAMES_CLOSE\n"); }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token NOSCRIPT_OPEN\n"); }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 429 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token NOSCRIPT_CLOSE\n"); }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 430 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token OBJECT_OPEN\n"); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 431 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token OBJECT_CLOSE\n"); }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token OL_OPEN\n"); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token OL_CLOSE\n"); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 434 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token OPTGROUP_OPEN\n"); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token OPTGROUP_CLOSE\n"); }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 436 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token OPTION_OPEN\n"); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token OPTION_CLOSE\n"); }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 438 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token P_OPEN\n"); }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 439 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token P_CLOSE\n"); }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 440 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token PARAM_OPEN\n"); }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 441 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token PARAM_CLOSE\n"); }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token PRE_OPEN\n"); }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 443 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token PRE_CLOSE\n"); }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 444 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token Q_OPEN\n"); }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 445 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token Q_CLOSE\n"); }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 446 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token S_OPEN\n"); }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 447 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token S_CLOSE\n"); }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 448 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SAMP_OPEN\n"); }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 449 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SAMP_CLOSE\n"); }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 450 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SCRIPT_OPEN\n"); }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 451 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SCRIPT_CLOSE\n"); }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SELECT_OPEN\n"); }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 453 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SELECT_CLOSE\n"); }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 454 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SMALL_OPEN\n"); }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 455 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SMALL_CLOSE\n"); }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 456 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SPAN_OPEN\n"); }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 457 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SPAN_CLOSE\n"); }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 458 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token STRIKE_OPEN\n"); }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token STRIKE_CLOSE\n"); }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 460 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token STRONG_OPEN\n"); }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 461 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token STRONG_CLOSE\n"); }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 462 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token STYLE_OPEN\n"); }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token STYLE_CLOSE\n"); }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 464 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SUB_OPEN\n"); }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 465 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SUB_CLOSE\n"); }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 466 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SUP_OPEN\n"); }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 467 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token SUP_CLOSE\n"); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 468 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TABLE_OPEN\n"); }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 469 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TABLE_CLOSE\n"); }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 470 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TBODY_OPEN\n"); }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 471 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TBODY_CLOSE\n"); }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 472 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TD_OPEN\n"); }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 473 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TD_CLOSE\n"); }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 474 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TEXTAREA_OPEN\n"); }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 475 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TEXTAREA_CLOSE\n"); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 476 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TFOOT_OPEN\n"); }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 477 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TFOOT_CLOSE\n"); }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 478 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TH_OPEN\n"); }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 479 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TH_CLOSE\n"); }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 480 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token THEAD_OPEN\n"); }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 481 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token THEAD_CLOSE\n"); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TITLE_OPEN\n"); }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 483 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TITLE_CLOSE\n"); }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 484 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TR_OPEN\n"); }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 485 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TR_CLOSE\n"); }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 486 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TT_OPEN\n"); }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 487 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token TT_CLOSE\n"); }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 488 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token U_OPEN\n"); }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 489 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token U_CLOSE\n"); }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 490 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token UL_OPEN\n"); }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 491 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token UL_CLOSE\n"); }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 492 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token VAR_OPEN\n"); }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 493 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token VAR_CLOSE\n"); }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 494 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token XMP_OPEN\n"); }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 495 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token XMP_CLOSE\n"); }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 496 "parser.y"
    { if ( DEBUG_LEVEL != 0) printf("reduce token XMP_CLOSE\n"); }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 500 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ANCHOR_CLOSE\n"); }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 501 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ANCHOR_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 504 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ABBR_CLOSE\n"); }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 505 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ABBR_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 508 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ACRONYM_CLOSE\n"); }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 509 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ACRONYM_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 512 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ADDRESS_CLOSE\n"); }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 513 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ADDRESS_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 516 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps APPLET_CLOSE\n"); }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 517 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps APPLET_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 520 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps AREA_CLOSE\n"); }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 521 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps AREA_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 524 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps B_CLOSE\n"); }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 525 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps B_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 528 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BASE_CLOSE\n"); }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 529 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BASE_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 532 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BASEFONT_CLOSE\n"); }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 533 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BASEFONT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 536 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BDO_CLOSE\n"); }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 537 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BDO_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 540 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BIG_CLOSE\n"); }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 541 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BIG_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 544 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BLOCKQUOTE_CLOSE\n"); }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 545 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BLOCKQUOTE_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 548 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BODY_CLOSE\n"); }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 549 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BODY_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 552 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BR_CLOSE\n"); }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 553 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BR_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 556 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BUTTON_CLOSE\n"); }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 557 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps BUTTON_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 560 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps CAPTION_CLOSE\n"); }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 561 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps CAPTION_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 564 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps CENTER_CLOSE\n"); }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 565 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps CENTER_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 568 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps CITE_CLOSE\n"); }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 569 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps CITE_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 572 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps CODE_CLOSE\n"); }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 573 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps CODE_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 576 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps COL_CLOSE\n"); }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 577 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps COL_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 580 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps COLGROUP_CLOSE\n"); }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 581 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps COLGROUP_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 584 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DD_CLOSE\n"); }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 585 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DD_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 588 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DEL_CLOSE\n"); }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 589 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DEL_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 592 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DFN_CLOSE\n"); }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 593 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DFN_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 596 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DIR_CLOSE\n"); }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 597 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DIR_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 600 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DIV_CLOSE\n"); }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 601 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DIV_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 604 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DL_CLOSE\n"); }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 605 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DL_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 608 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DT_CLOSE\n"); }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 609 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps DT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 612 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps EM_CLOSE\n"); }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 613 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps EM_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 616 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FIELDSET_CLOSE\n"); }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 617 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FIELDSET_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 620 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FONT_CLOSE\n"); }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 621 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FONT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 624 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FORM_CLOSE\n"); }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 625 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FORM_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 628 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FRAME_CLOSE\n"); }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 629 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FRAME_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 632 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FRAMESET_CLOSE\n"); }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 633 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps FRAMESET_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 636 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H1_CLOSE\n"); }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 637 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H1_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 640 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H2_CLOSE\n"); }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 641 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H2_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 644 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H3_CLOSE\n"); }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 645 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H3_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 648 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H4_CLOSE\n"); }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 649 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H4_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 652 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H5_CLOSE\n"); }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 653 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H5_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 656 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H6_CLOSE\n"); }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 657 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps H6_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 660 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps HEAD_CLOSE\n"); }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 661 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps HEAD_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 664 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps HR_CLOSE\n"); }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 665 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps HR_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 668 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps HTML_CLOSE\n"); }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 669 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps HTML_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 672 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps I_CLOSE\n"); }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 673 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps I_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 676 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps IFRAME_CLOSE\n"); }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 677 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps IFRAME_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 680 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps IMG_CLOSE\n"); }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 681 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps IMG_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 684 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps INPUT_CLOSE\n"); }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 685 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps INPUT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 688 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps INS_CLOSE\n"); }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 689 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps INS_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 692 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ISINDEX_CLOSE\n"); }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 693 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps ISINDEX_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 696 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps KBD_CLOSE\n"); }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 697 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps KBD_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 700 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps LABEL_CLOSE\n"); }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 701 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps LABEL_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 704 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps LEGEND_CLOSE\n"); }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 705 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps LEGEND_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 708 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps LI_CLOSE\n"); }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 709 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps LI_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 712 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps LINK_CLOSE\n"); }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 713 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps LINK_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 716 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps MAP_CLOSE\n"); }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 717 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps MAP_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 720 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps MENU_CLOSE\n"); }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 721 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps MENU_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 724 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps META_CLOSE\n"); }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 725 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps META_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 728 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps NOFRAMES_CLOSE\n"); }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 729 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps NOFRAMES_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 732 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps NOSCRIPT_CLOSE\n"); }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 733 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps NOSCRIPT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 736 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps OBJECT_CLOSE\n"); }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 737 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps OBJECT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 740 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps OL_CLOSE\n"); }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 741 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps OL_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 744 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps OPTGROUP_CLOSE\n"); }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 745 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps OPTGROUP_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 748 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps OPTION_CLOSE\n"); }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 749 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps OPTION_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 752 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps P_CLOSE\n"); }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 753 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps P_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 756 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps PARAM_CLOSE\n"); }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 757 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps PARAM_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 760 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps PRE_CLOSE\n"); }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 761 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps PRE_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 764 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps Q_CLOSE\n"); }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 765 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps Q_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 768 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps S_CLOSE\n"); }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 769 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps S_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 772 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SAMP_CLOSE\n"); }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 773 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SAMP_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 776 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SCRIPT_CLOSE\n"); }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 777 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SCRIPT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 780 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SELECT_CLOSE\n"); }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 781 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SELECT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 784 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SMALL_CLOSE\n"); }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 785 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SMALL_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 788 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SPAN_CLOSE\n"); }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 789 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SPAN_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 792 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps STRIKE_CLOSE\n"); }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 793 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps STRIKE_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 796 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps STRONG_CLOSE\n"); }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 797 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps STRONG_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 800 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps STYLE_CLOSE\n"); }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 801 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps STYLE_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 804 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SUB_CLOSE\n"); }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 805 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SUB_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 808 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SUP_CLOSE\n"); }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 809 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps SUP_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 812 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TABLE_CLOSE\n"); }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 813 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TABLE_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 816 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TBODY_CLOSE\n"); }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 817 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TBODY_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 820 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TD_CLOSE\n"); }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 821 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TD_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 824 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TEXTAREA_CLOSE\n"); }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 825 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TEXTAREA_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 828 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TFOOT_CLOSE\n"); }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 829 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TFOOT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 832 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TH_CLOSE\n"); }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 833 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TH_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 836 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps THEAD_CLOSE\n"); }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 837 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps THEAD_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 840 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TITLE_CLOSE\n"); }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 841 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TITLE_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 844 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TR_CLOSE\n"); }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 845 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TR_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 848 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TT_CLOSE\n"); }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 849 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps TT_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 852 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps U_CLOSE\n"); }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 853 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps U_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 856 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps UL_CLOSE\n"); }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 857 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps UL_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 860 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps VAR_CLOSE\n"); }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 861 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps VAR_CLOSE ERROR\n"); errors++; yyerrok; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 864 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps XMP_CLOSE\n"); }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 865 "parser.y"
    { if ( DEBUG_LEVEL != 0 ) printf("reduce gaps XMP_CLOSE ERROR\n"); errors++; yyerrok; }
    break;



/* Line 1455 of yacc.c  */
#line 8184 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



