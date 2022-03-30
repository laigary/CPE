#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	int n,i,j;
	int count[26]={0}, max = 0;
	char str[1000];
	
	scanf("%d ",&n);
	for(i = 1; i <= n; i++){
		gets(str);
		for(j = 0; j < strlen(str); j++){
			if(str[j]>=65&&str[j]<=90){
				count[str[j]-65]++;
			}
			else if(str[j]>=97&&str[j]<=122){
				count[str[j]-97]++;
			}
		}
	}
	
	for(i = 0; i<26; i++){
		if(count[i]>max)
		max = count[i];
	} 
	
	for(j = max; j > 0; j--){
		for(i = 0; i < 26; i++)
		{
			if(count[i] == j)
			printf("%c %d\n",i+65, j);
		}
	}
	return 0;
}
