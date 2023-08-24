%{
#define yywrap() 1
%}

%%

[0-9]+ {printf("%s is number",yytext);}
.+ {printf("%s is not number",yytext);}
%%

int main(){
yylex();
}
int yywrap