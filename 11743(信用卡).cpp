#include<stdio.h>
#include<stdlib.h>
int main(){
    int T;
    scanf("%d",&T);    
    while (T--){
        int sum = 0;
        for (int i = 0; i < 4; ++i){
            int num;
            scanf("%d",&num);            
            for (int j = 0; j < 2; ++j){
                sum += num % 10;
                num /= 10;
                sum += num * 2 % 10;
                sum += (num % 10 * 2 / 10);
                num /= 10;
            }
        }        
        if (sum % 10)
            printf("Invalid\n");
        else
            printf("Valid\n");
    }
    return 0;
}
