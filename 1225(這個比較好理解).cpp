#include<stdio.h>
#include<stdlib.h>
int main(){
	int sum;
	scanf("%d",&sum);
	while(sum--){ //�n���h�ֵ���� 
		int num;
		int arr[10]={0}; //��ӪŰ}�C 
		scanf("%d",&num); //�o�̬O��J1~num���Ʀr 
		for(int i=1;i<=num;i++){  
			int a,b;
			a=i;
			while(a){ //�Ʀr�@�Ӥ@�ө�i�h���B�z 
				b=a%10; //���H10�o��l�� 
				a /= 10; //���H10�o��Ӽ� 
				arr[b]++; //��o�쪺�l�Ʃ�i�۹������}�C 
			}				//0��iarr[0] 2��iarr[2] 9��iarr[9] 
		}
		for(int i=0;i<9;i++){ //�o��O�C�X�Ʀr1~8������ 
			printf("%d ",arr[i]);
		}
		printf("%d\n",arr[9]); //�o��O�C�X�Ʀr9�����ƵM�ᴫ�� 
	}
}
