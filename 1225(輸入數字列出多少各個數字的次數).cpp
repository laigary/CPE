#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int ans[10]={0};
		int k, first=1;
		scanf("%d",&k);
		for(int i=1;i<=k;i++){
			int m=i;
			while(m){
				ans[m%10]++;
				m /= 10;
			}
		}
		for(int i=0;i<10;i++){
			if(first){
				first=0;
			}
			else{
				printf(" ");
			}
			printf("%d",ans[i]);
		}
		printf("\n");
	}
	return 0;
}
