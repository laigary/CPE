#include<stdio.h> //GCD���N��O���̤j���]��   

int gcd(int a,int b);
int main(){
	int i,j,sum=0,n=0;
	while(scanf("%d",&n)==1){
		if(n==0)
		break;
		sum=0;
		for(i=1;i<n;i++){  //�o�̪��N��O EX��J4 �M���(1,2)(1,3)(1,4)(2,3)(2,4)(3,4)���̤j���]�Ƭۥ[ 
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

