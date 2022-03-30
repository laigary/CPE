#include<stdio.h>
#include<stdlib.h>
int main(){
	int t,n,x,big,small,ans;
	int num[20]={0};
	scanf("%d",&t);
	while(t--){
		big=small=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&num[i]);
			big=small=num[1];
		}
		for(int i=1;i<=n;i++){
			if(big<num[i])
				big=num[i];
			if(small>num[i])
				small=num[i];
		}
		ans=(big-small)*2;
		printf("%d\n",ans);
	}
	return 0;
}
