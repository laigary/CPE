#include<stdio.h>
#include<stdlib.h>
int main(){
	int t,big,tims,i,j,k,l,many,p;
	scanf("%d",&t);
	for(many=1;many<=t;many++){
		scanf("%d%d",&big,&tims);
		if(many!=1){
			printf("\n");
		}				
		for(p=1;p<=tims;p++){
			for(i=1;i<big;i++){ //i是顯示的數字  //假設輸入的數字最大的是3 這邊是顯示1~2 
				//if(i==big){   //如果要顯示這個if要把前面的i<big改成i<=big 
				//	continue;
				//}					
				for(j=1;j<=i;j++){ //j是顯示數字得位置 
					printf("%d",i);
				}					
				printf("\n"); //數字顯示完後換行 
			}
			for(i=big;i>=1;i--){ //而這邊是顯示3~1 
				for(j=1;j<=i;j++){
					printf("%d",i);
				}					
				printf("\n");
			}
			if(p!=tims) //這個換行是為了再列出的之間多空一行 
				printf("\n");		
		}
	}
	return 0;
}
