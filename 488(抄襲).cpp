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
			for(i=1;i<big;i++){ //i�O��ܪ��Ʀr  //���]��J���Ʀr�̤j���O3 �o��O���1~2 
				//if(i==big){   //�p�G�n��ܳo��if�n��e����i<big�令i<=big 
				//	continue;
				//}					
				for(j=1;j<=i;j++){ //j�O��ܼƦr�o��m 
					printf("%d",i);
				}					
				printf("\n"); //�Ʀr��ܧ��ᴫ�� 
			}
			for(i=big;i>=1;i--){ //�ӳo��O���3~1 
				for(j=1;j<=i;j++){
					printf("%d",i);
				}					
				printf("\n");
			}
			if(p!=tims) //�o�Ӵ���O���F�A�C�X�������h�Ť@�� 
				printf("\n");		
		}
	}
	return 0;
}
