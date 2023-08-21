#include<stdio.h>

void main(){
	char str[100];
	int word=0,newline=0,character=0,i;
	
	printf("Enter the program : ");
	
	scanf("%[^~]s",&str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			word++;
		}
		else if(str[i]=='\n'){
			newline++;
			word++;
		}
		else if(str[i]!=' ' && str[i]!='\n'){
			character++;
		}
	}
	if(character > 0){
		word++;
		newline++;
	}
	
	printf("Number of word : %d",word);
	printf("Number of newlines : %d",newline);
}
