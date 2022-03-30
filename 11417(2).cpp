#include<stdio.h> //GCD種琌程そ计   

int gcd(int a,int b);
int main(){
	int i,j,sum=0,n=0;
	while(scanf("%d",&n)==1){
		if(n==0)
		break;
		sum=0;
		for(i=1;i<n;i++){  //硂柑種琌 EX块4 礛(1,2)(1,3)(1,4)(2,3)(2,4)(3,4)程そ计 
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

