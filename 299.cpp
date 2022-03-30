#include<stdio.h>
int main(){
	int i,j,k,n,l,a[50];
	scanf("%d",&n);
	for(k=1;k<=n;k++){
		scanf("%d",&l);
		for(i=0;i<l;i++) scanf("%d ",&a[i]);
		int temp,count=0;
		for(i=0;i<l-1-i;i++){
			for(j=0;j<l-1;j++){
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
