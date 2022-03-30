#include<stdio.h>
#include<stdlib.h>
int main(){
    int h1,m1,h2,m2,H,M;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;
        H=h2-h1;
        M=m2-m1;

        if(M<0){    //這裡會先跑M的部分 跑完再去跑H 符合if裡面的條件才會進去執行 不符合就只是經過而已 所以才會先跑M再跑H 
            H=H-1;
            M=M+60;
        }
        if(H<0){
            H=H+24;
        }

        M=M+H*60;
        printf("%d\n",M);
    }
    return 0;
}
