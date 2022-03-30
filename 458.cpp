#include<stdio.h>
#include<stdlib.h>
int main(){
	char s[1000];
	int i;
	while(gets(s)){
		for(i=0;s[i];i++){
			printf("%c",s[i]-7);
		}
	puts("");      //自動換行的意思 等於 printf("\n"); 
	}
	return 0;
} 
