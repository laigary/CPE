#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	int count,big;
	while(scanf("%d %d",&a,&b)==2 && a>0 && b>0){
		big=0;
		
		for(int i=a;i<=b;i++){
			int m=i;
			count=1;
			while(m!=1){
				
				if(m%2==1){
					m=3*m+1;
					count = count+1;
				}
				if(m%2==0){
					m=m/2;
					count = count+1;
				}
				
			
			}
			if(count>big){
				big=count;
			}
		}
		printf("%d %d %d\n",a,b,big);
	}
	return 0;
} 
