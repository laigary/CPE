#include<stdio.h>
#include<stdlib.h>
int main(){
	char s[1000];
	int i;
	while(gets(s)){
		for(i=0;s[i];i++){
			printf("%c",s[i]-7);
		}
	puts("");      //�۰ʴ��檺�N�� ���� printf("\n"); 
	}
	return 0;
} 
