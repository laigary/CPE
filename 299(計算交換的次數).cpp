#include<stdio.h>
int main(){
	int i,j,k,n,l,a[50];
	scanf("%d",&n); //要做多少筆資料 
	for(k=1;k<=n;k++){
		scanf("%d",&l); //資料中有多少個數字 
		for(i=0;i<l;i++) scanf("%d ",&a[i]);
		int temp,count=0;
		for(i=0;i<l-1;i++){ //加這個i的話 會做l次 
			for(j=0;j<l-1;j++){ //如果只有j的話 只會做從a[0]~a[l]一次 
				if(a[j]>a[j+1]){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
	return 0;
}
