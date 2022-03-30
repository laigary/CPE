#include<stdio.h>
#include<stdlib.h> 

int GCD(int a, int b){
    return b == 0 ? a : GCD(b, a % b); //if b==0 is true , return 冒號前面的a ; else return 冒號後面的 GCD(b, a % b)
}
int main(){

    int G;
    int N;
    int i, j;

    while(scanf("%d", &N)){
        if(N == 0){
            break;
        }
        else{

            G = 0;

            for(i = 1; i < N; i++){
                for(j = i + 1; j <= N; j++){
                    G = G + GCD(i, j);
                }
            }

            printf("%d\n", G);
        }
    }

    return 0;
}
