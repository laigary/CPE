#include<stdio.h>
#include<stdlib.h>

int main(){
	int y,div,left;
	int count;
	int a=1;
	while(scanf("%d",&div)==1&&div>=0){
		count=0;
		while(div>=2){
			left=div%2;
			div=div/2;
			
			div=div+left;
			count++;
		}

		printf("Case %d: %d\n",a++,count);
	}
}
