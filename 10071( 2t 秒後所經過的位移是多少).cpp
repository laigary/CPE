#include<stdio.h>
int main(){
	int v,t,total;
	while(scanf("%d %d",&v,&t)==2&&v>=-100&&v<=100&&t>=0&&t<=200){
		total=2*v*t;
		printf("%d\n",total);
	}
	return 0;
}
