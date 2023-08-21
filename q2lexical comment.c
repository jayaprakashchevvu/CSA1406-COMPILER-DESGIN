#include<stdio.h>
#include<conio.h>

void main(){
	char com[30];
	int i,a=0;
	
	printf("Enter the line : ");
	gets(com);
	
	if(com[0]=='/'){
		if(com[1]=='/'){
			printf("it is a comment");
		}
		else if(com[1]=='*'){
			for(i=2;i<30;i++){
				if(com[i]=='*' && com[i+1]=='/'){
					a=1;
					break;
				}
			}
			if(a==1){
				printf("It is comment");
			}
			else{
				printf("Not comment");
			}
		}
		else{
			printf("Not comment");
		}
	}
	else{
		printf("Not comment");
	}
}
