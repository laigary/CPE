#include<stdio.h>
#include<stdlib.h>
#define MAX 1010 
int main(){
	int t, n, a[MAX], ans = 0;
	scanf("%d",&t); //�h�ֵ���� 
	while(t--){
		ans=0; //�̫᪺���� 
		scanf("%d",&n); //��Ƥ����h�ּƦr 
		for(int i=0;i<n;i++){ //�x�s�Ʀr 
			scanf("%d",&a[i]);
		} 
		for(int i=1;i<n;i++){  //��j�p a[1]  //ex:n=4
			for(int j=0;j<i;j++){ //a[0]	//��j�p���� 
				if(a[j]<=a[i]) ans++;		//a[1]a[0] 
			}								//a[2]a[0] a[2]a[1]
		}									//a[3]a[0] a[3]a[1] a[3]a[2]			
				
		printf("%d\n",ans);
	}
	return 0;
}
