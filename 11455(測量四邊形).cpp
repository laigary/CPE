#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,a,b,c,d;
	scanf("%d",&i);
	while(i--){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a==b&&b==c&&c==d){
			printf("square\n");
		}
		else if(a==b&&c==d||a==c&&b==d||a==d&&b==c){
			printf("rectangle\n");
		}
		else if(a+b+c<=d||a+b+d<=c||a+c+d<=b||b+c+d<=a){
			printf("banana\n");
		}
		else{
			printf("quadrangle\n");
		}
	}
	return 0;
} 
