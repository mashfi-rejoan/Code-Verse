%{
#include<stdio.h>
%}

%%
"int"|"float"|"double"|"char"|"if"|"else" {printf("keyword");}
"+"|"-"|"*"|"/" {printf("operator");}
[0-9]+ {printf("constant");}
[a-zA-z_][a-zA-z0-9]* {printf("%s", yytext);}
[0-9]+[a-zA-z0-9]* {printf("invalid");}
[\t\n] {}
. {printf("unknown");}


%%

int yywrap() {
return 1;
}

int main() {
yylex();


return 0;