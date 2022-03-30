#include<stdio.h>
#include<stdlib.h>
#define MAX 1010 
int main(){
	int t, n, a[MAX], ans = 0;
	scanf("%d",&t); //多少筆資料 
	while(t--){
		ans=0; //最後的答案 
		scanf("%d",&n); //資料中有多少數字 
		for(int i=0;i<n;i++){ //儲存數字 
			scanf("%d",&a[i]);
		} 
		for(int i=1;i<n;i++){  //比大小 a[1]  //ex:n=4
			for(int j=0;j<i;j++){ //a[0]	//比大小順序 
				if(a[j]<=a[i]) ans++;		//a[1]a[0] 
			}								//a[2]a[0] a[2]a[1]
		}									//a[3]a[0] a[3]a[1] a[3]a[2]			
				
		printf("%d\n",ans);
	}
	return 0;
}
