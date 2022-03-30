#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int a,b,c,d,i=0,j;
	char s1[34]="qwertyuiop[]\asdfghjkl;'zxcvbnm,./";
	char s2[10000];
	char s3[34]="qwqwertyuiop[]\asdfghjkl;'zxcvbnm,";
	
	gets(s2);
	    a=strlen(s2);
	for(i=0;i<a;i++)
	{
		if(s2[i]==' ')
		{
			printf(" ");
		}
		else if(s2[i]=='d')
		{
			printf("a");
		}
		else if(s2[i]=='a')
		{
			printf("]");
		}
	else
	{
		for(j=0;j<34;j++)
		{
			if(s2[i]==s1[j])
			{
				printf("%c",s3[j]);
				j=34;
			}
		}
	}
    }
    printf("\n");	
}
