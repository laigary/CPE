#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
	while(scanf("%c",&ch)==1){
		if(ch!='\n')printf("%c",ch-7);  //if(ch!='\n') �o�Ӧ��G�O������J�Ȥ���̫᪺Enter�]��J�i�h�F  
										//�ҥH�N�N��ASCII�X��10 ��޸��ΨӪ�ܦr�Ŧr���q�]�sĶ�������ASCLL�X�^ 
		else printf("\n");
	}
	
	return 0;
} 
