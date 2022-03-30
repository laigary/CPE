#include<stdio.h>
#include<stdlib.h>
int f[1001];//先準備好空間去儲存因數和 
int main(){ //這裡算是先算好所有1~1000的因數和了  然後再從下面的while那段去對照有一樣在列出來 沒有的話就列-1 
	for(int i=1;i<1001;i++){   
		f[i]=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				f[i] += j;
			}
		}
	}
	int n, cases=1;
	while(scanf("%d",&n) == 1 && n){
		int position = -1;
		for(int i=1000;i>0;i--){
			if(f[i]==n){
				position = i;
				break;
			}
		}
		printf("Case %d: %d\n",cases ++,position);
	}
	return 0;
} 
