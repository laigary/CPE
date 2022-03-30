#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,a,b;
	int k[10]={0};
	scanf("%d",&N);
	printf("Lumberjacks:\n");
	while(N--){
		a=0;
		b=0;
		for(int i=1;i<=10;i++){
			scanf("%d",&k[i]);	
			a=k[1];		
		}
		for(int i=1;i<10;i++){
			if(a<k[i+1]){
				a=k[i+1];
				b++;
			}
			if(a>k[i+1]){
				a=k[i+1];
				b--;
			} 
		}
		if(b==9||b==-9)
			printf("Ordered\n");
		else
			printf("Unordered\n");
	}
	return 0;
} 
