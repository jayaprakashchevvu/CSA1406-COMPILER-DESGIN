#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
	char s[5];
	printf("Enter the operator : ");
	gets(s);
	
	switch(s[0]){
		case '>':
			if(s[1]=='=')
				printf("Greater than or equal to");
			else
				printf("greater than");
			break;
		case '<':
			if(s[1]=='=')
				printf("Less than or equal to");
			else
				printf("less than");
			break;
		case '=':
			if(s[1]=='=')
				printf("equal to");
			else
				printf("Assignment");
			break;
		case '!':
			if(s[1]=='=')
				printf("Not equal to");
			else
				printf("Bit Not");
			break;
		case '&':
			if(s[1]=='&')
				printf("logical AND");
			else
				printf("Bitwise AND");
			break;
		case '|':
			if(s[1]=='|')
				printf("Logical OR");
			else
				printf("Bitwise OR");
			break;
		case '+':
			if(s[1]=='+')
				printf("Increment by 1");
			else
				printf("Addition");
			break;
		case '-':
			if(s[1]=='-')
				printf("Decrement");
			else
				printf("Subtraction");
			break;
		case '*':
			printf("multiplication");
			break;
		case '/':
			printf("Division");
			break;
		case '%':
			printf("Modules");
			break;
		default:
			printf("Unknown Opearator");
	}
}
