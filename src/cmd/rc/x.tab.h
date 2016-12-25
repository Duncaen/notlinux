/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FOR = 258,
    IN = 259,
    WHILE = 260,
    IF = 261,
    NOT = 262,
    TWIDDLE = 263,
    BANG = 264,
    SUBSHELL = 265,
    SWITCH = 266,
    FN = 267,
    WORD = 268,
    REDIR = 269,
    DUP = 270,
    PIPE = 271,
    SUB = 272,
    SIMPLE = 273,
    ARGLIST = 274,
    WORDS = 275,
    BRACE = 276,
    PAREN = 277,
    PCMD = 278,
    PIPEFD = 279,
    ANDAND = 280,
    OROR = 281,
    COUNT = 282
  };
#endif
/* Tokens.  */
#define FOR 258
#define IN 259
#define WHILE 260
#define IF 261
#define NOT 262
#define TWIDDLE 263
#define BANG 264
#define SUBSHELL 265
#define SWITCH 266
#define FN 267
#define WORD 268
#define REDIR 269
#define DUP 270
#define PIPE 271
#define SUB 272
#define SIMPLE 273
#define ARGLIST 274
#define WORDS 275
#define BRACE 276
#define PAREN 277
#define PCMD 278
#define PIPEFD 279
#define ANDAND 280
#define OROR 281
#define COUNT 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "syn.y" /* yacc.c:1909  */

	struct tree *tree;

#line 112 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
