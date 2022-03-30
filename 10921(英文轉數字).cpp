#include<stdio.h>
#include<stdlib.h>
int main(){	
	char c;	
		int i=0,j=0;			
		while(scanf("%c",&c)!=EOF){
			if(i!=0&&j!=0&&c=='\n'||i!=0&&j==0&&c=='\n')
			printf(" %d %d",i,j);
			if(c=='A'||c=='B'||c=='C'){
				printf("2");
				i++;
			}			
			else if(c=='D'||c=='E'||c=='F'){
				printf("3");
				i++;
			}			
			else if(c=='G'||c=='H'||c=='I'){
				printf("4");
				i++;
			}			
			else if(c=='J'||c=='K'||c=='L'){
				printf("5");
				i++;
			}			
			else if(c=='M'||c=='N'||c=='O'){
				printf("6");
				i++;
			}			
			else if(c=='P'||c=='Q'||c=='R'||c=='S'){
				printf("7");
				i++;
			}			
			else if(c=='T'||c=='U'||c=='V'){
				printf("8");
				i++;
			}			
			else if(c=='W'||c=='X'||c=='Y'||c=='Z'){
				printf("9");
				i++;
			}			
			else if(c=='-'){
				printf("%c",c);
				j++;
			}
			else{
				printf("%c",c);
			}			
	}	
	return 0;
} 
