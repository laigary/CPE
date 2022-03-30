#include<stdio.h>
#include<stdlib.h>
#define MAX 100099
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)==2 && !(a==0 && b==0)){
		int i,j,temp,ans1,ans2,card[MAX]={},card2[MAX]={};
		ans1=ans2=0;
		for(i=0;i<a;i++){
			scanf("%d",&temp);
			card[temp]=temp;  //這部分是代表陣列號碼跟輸入的值相同，這樣子輸入相同的值2次可以視為輸入1次而已  
		}
		for(i=0;i<b;i++){
			scanf("%d",&temp);
			card2[temp]=temp; 
		}
		for(i=0;i<=100000;i++){  //這部分是判斷她有的，然後我沒有的;我有的，他沒有的 
			if(card[i]){
				if(card[i]!=card2[card[i]]){
					ans1++;
					printf("%d ",card[i]);
				}
			}
			if(card2[i]){
				if(card2[i]!=card[card2[i]]){
					ans2++;
				}
			}
		}
		if(ans1>ans2){ //顯示出小的 
			ans1=ans2;
		}
		printf("%d\n",ans1);
	}
	return 0;
} 
