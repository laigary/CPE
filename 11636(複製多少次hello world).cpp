#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,Case=1;
	while(scanf("%d",&n)==1&&n>=0){
		int temp=1,ans=0;
		while(temp<n){
			temp*=2;
			ans++;
		}
		printf("Case %d: %d\n",Case++,ans);
	}
	return 0;
} 
