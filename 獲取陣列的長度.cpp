#include<stdio.h>

int main(void){
    int number[16];
    int n = sizeof(number)/sizeof(number[0]);
    printf("Total elements the array can hold is: %d\n",n);
    printf("%d\n",sizeof(number)); //算出number陣列所佔據的空間大小 
    printf("%d\n",sizeof(int)); //算出一個int佔據的大小 
    printf("%d\n",sizeof(number[0])); //算出number[0]佔據的大小 
    printf("%d",sizeof(number)/sizeof(number[0])); //算出陣列的長度 
}
