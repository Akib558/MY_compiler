/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 54 "my.tab.h"

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

#line 110 "my.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MY_TAB_H_INCLUDED  */
