#include<stdio.h>
#include<stdlib.h>
int main(){
	int sum;
	scanf("%d",&sum);
	while(sum--){ //璶代ぶ掸戈 
		int num;
		int arr[10]={0}; //皚 
		scanf("%d",&num); //硂柑琌块1~num计 
		for(int i=1;i<=num;i++){  
			int a,b;
			a=i;
			while(a){ //计秈暗矪瞶 
				b=a%10; //埃10眔緇计 
				a /= 10; //埃10眔坝计 
				arr[b]++; //р眔緇计秈癸莱皚 
			}				//0秈arr[0] 2秈arr[2] 9秈arr[9] 
		}
		for(int i=0;i<9;i++){ //硂娩琌计1~8Ω计 
			printf("%d ",arr[i]);
		}
		printf("%d\n",arr[9]); //硂娩琌计9Ω计礛传︽ 
	}
}
