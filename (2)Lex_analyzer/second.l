%{
# include<stdio.h>
# include<string.h>
struct symtab
{
char *name;
};
struct symtab sym[10],*k;
struct symtab *install_id(char *s);
void disp();
%}
L    [a-zA-Z]
D    [0-9]
id   {L}({L}|{D})*
num    {D}+(\.{D}+)?([eE][-+]?{D}+)?
bop    [-+*/=]
uop    "++"|"--"
relop             "<"|"<="|">"|">="|"!="|"=="
lop         "&&"|"||"
bitlop       [&|!]
kew   "if"|"else"|"while"|"do"|"for"|"int"|"char"|"float"
pun           [,;'"\[\]\{\}\)\(]
comment  "//"
ws     [ \t\n]+
st        \"(.)*\"
%%
{ws} 	{}
{kew} {printf("keyword=%s\n",yytext);}
{id} {k=install_id(yytext);printf("identifier =%s\n",yytext);}
{num} {printf("constant =%s\n",yytext);}
{bop} {printf("binary op =%s\n",yytext);}
{uop} {printf("unary op =%s\n",yytext);}
{relop} {printf("relational op=%s\n",yytext);}
{lop} {printf("logical op =%s\n",yytext);}
{pun} {printf("punct =%s\n",yytext);}
{bitlop} {printf("bitwise logical op=%s\n",yytext);}
{comment} {printf("comment =%s\n",yytext);}
{st} 	{printf("string =%s\n",yytext);}
%%
int main()
{
yylex();
disp();
}
struct symtab *install_id(char *s)
{
struct symtab *p;
printf("in symbol table\n");
for(p=&sym[0];p<&sym[10];p++)
{
if(p->name && !strcmp(s,p->name))
return p;
if(!p->name)
{
p->name=strdup(s);
return p;
}
}
}
void disp()
{
struct symtab *p;
printf("symbol table\n");
for(p=&sym[0];p<&sym[10];p++)
{
if(p->name)
printf("%s\n",p->name);
}
}
int yywrap()
{
return 1;
}

----- online run this file 
lex second.l
gcc lex.yy.c
./a.out < prg1.c
keyword=int
in symbol table
identifier =main
punct =(
punct =)
punct ={
keyword=int
in symbol table
identifier =a
binary op ==
constant =10
punct =,
in symbol table
identifier =b
binary op ==
constant =20
punct =,
in symbol table