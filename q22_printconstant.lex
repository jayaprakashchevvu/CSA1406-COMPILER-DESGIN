%{
#define yywrap() 1
int cons=0;
%}

%%
[0-9]+ {cons++; printf("%s is a constant\n",yytext);}
.|"\n" {}
%%

int main(){

FILE *f;
char file[10];
printf("Enter the file name :");
scanf("%s",file);
f=fopen(file,"r");
yyin=f;
yylex();
printf("Number of constants : %d\n",cons);
fclose(yyin);
}