
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


