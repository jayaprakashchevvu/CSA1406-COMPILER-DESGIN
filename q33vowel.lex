%{
int count=0;
#define yywrap() 1
%}

%%
[aeiouAEIOU] {count++;}
. {}
%%

int main(){
printf("Enter the sentence : ");
yylex();
printf("no.of vowels : %d",count);
}