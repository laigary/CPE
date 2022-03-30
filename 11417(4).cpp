#include<stdio.h>

int GCD(int num1, int num2){
	while(num2 >= 1){
		int tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}
	return num1;
}

int main(){
	int N, sum, i, j;
	
	while(1){
		scanf("%d", &N);
		if(N == 0) break;
		
		sum = 0;
		for(i = 1;i < N;i++){
			for(j = i + 1;j <= N;j++){
				int result = GCD(i, j);
				sum += result;
			}
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
