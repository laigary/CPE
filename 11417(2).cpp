#include<stdio.h> //GCD的意思是取最大公因數   

int gcd(int a,int b);
int main(){
	int i,j,sum=0,n=0;
	while(scanf("%d",&n)==1){
		if(n==0)
		break;
		sum=0;
		for(i=1;i<n;i++){  //這裡的意思是 EX輸入4 然後取(1,2)(1,3)(1,4)(2,3)(2,4)(3,4)的最大公因數相加 
			for(j=i+1;j<=n;j++){
				sum+=gcd(i,j);
				}
			}
		printf("%d\n",sum);
	}
	return 0;
}

int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}

