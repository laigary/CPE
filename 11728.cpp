#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,k,p=0,t=1,sum,n1,n2;
	while(scanf("%d",&n1)==1){
		if(n1==0)break;
		for(n2=n1,p=0;n2>=1;n2--){
			for(i=1,sum=0;i<=n2/2;i++){
				if(n2%i==0)
				sum=sum+i;
			}
			sum=sum+n2;
		if(sum==n1){
			printf("Case %d: %d\n",t,n2);
			p=1;
			break;
		}
		}
		if(p==0){
			printf("Cade %d: -1\n",t);
			t++;
		}
	}
	return 0;
} 
