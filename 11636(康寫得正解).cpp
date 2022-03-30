#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,a,count;
	int hello;
	int p=5;
	while(p--,scanf("%d",&i)==1&&i>=0&&i<10001){
		count=0;
		hello=1;
		while(hello<i){
			hello *= 2;
			count++;
		}
		printf("Case %d: %d\n",++a,count);
	}
	return 0;
}
