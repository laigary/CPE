#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int a,b,c,plus,drink,total,left,change;
	scanf("%d",&i);
	while(i--){
		scanf("%d %d %d",&a,&b,&c);
		plus=a+b;
		drink=plus/c;
		left=plus%c;
		total=drink;
		change=drink+left;
		while(change>=c){
			drink=change/c;
			left=change%c;
			change=drink+left;
			total += drink;
			
		}
		printf("%d\n",total);
	}
	return 0;
} 
