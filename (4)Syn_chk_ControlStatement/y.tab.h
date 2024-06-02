/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
    id = 258,                      /* id  */
    NUM = 259,                     /* NUM  */
    OR = 260,                      /* OR  */
    AND = 261,                     /* AND  */
    NOT = 262,                     /* NOT  */
    relop = 263,                   /* relop  */
    TRUE = 264,                    /* TRUE  */
    FALSE = 265,                   /* FALSE  */
    INC = 266,                     /* INC  */
    DEC = 267,                     /* DEC  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    DO = 270,                      /* DO  */
    WHILE = 271,                   /* WHILE  */
    uminu = 272,                   /* uminu  */
    s = 273,                       /* s  */
    FOR = 274,                     /* FOR  */
    SWITCH = 275,                  /* SWITCH  */
    CASE = 276,                    /* CASE  */
    BREAK = 277,                   /* BREAK  */
    DEFAULT = 278,                 /* DEFAULT  */
    uminus = 279                   /* uminus  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define id 258
#define NUM 259
#define OR 260
#define AND 261
#define NOT 262
#define relop 263
#define TRUE 264
#define FALSE 265
#define INC 266
#define DEC 267
#define IF 268
#define ELSE 269
#define DO 270
#define WHILE 271
#define uminu 272
#define s 273
#define FOR 274
#define SWITCH 275
#define CASE 276
#define BREAK 277
#define DEFAULT 278
#define uminus 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
