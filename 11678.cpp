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
			card[temp]=temp;  //�o�����O�N��}�C���X���J���ȬۦP�A�o�ˤl��J�ۦP����2���i�H������J1���Ӥw  
		}
		for(i=0;i<b;i++){
			scanf("%d",&temp);
			card2[temp]=temp; 
		}
		for(i=0;i<=100000;i++){  //�o�����O�P�_�o�����A�M��ڨS����;�ڦ����A�L�S���� 
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
		if(ans1>ans2){ //��ܥX�p�� 
			ans1=ans2;
		}
		printf("%d\n",ans1);
	}
	return 0;
} 
