#include<stdio.h>

int main(void){
    int number[16];
    int n = sizeof(number)/sizeof(number[0]);
    printf("Total elements the array can hold is: %d\n",n);
    printf("%d\n",sizeof(number)); //��Xnumber�}�C�Ҧ��ڪ��Ŷ��j�p 
    printf("%d\n",sizeof(int)); //��X�@��int���ڪ��j�p 
    printf("%d\n",sizeof(number[0])); //��Xnumber[0]���ڪ��j�p 
    printf("%d",sizeof(number)/sizeof(number[0])); //��X�}�C������ 
}
