#include<stdio.h>
#include<stdlib.h>
int f[1001];//���ǳƦn�Ŷ��h�x�s�]�ƩM 
int main(){ //�o�̺�O����n�Ҧ�1~1000���]�ƩM�F  �M��A�q�U����while���q�h��Ӧ��@�˦b�C�X�� �S�����ܴN�C-1 
	for(int i=1;i<1001;i++){   
		f[i]=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				f[i] += j;
			}
		}
	}
	int n, cases=1;
	while(scanf("%d",&n) == 1 && n){
		int position = -1;
		for(int i=1000;i>0;i--){
			if(f[i]==n){
				position = i;
				break;
			}
		}
		printf("Case %d: %d\n",cases ++,position);
	}
	return 0;
} 
