#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
	while(scanf("%c",&ch)==1){
		if(ch!='\n')printf("%c",ch-7);  //if(ch!='\n') 這個似乎是打完輸入值之後最後的Enter也輸入進去了  
										//所以就代表ASCII碼的10 單引號用來表示字符字面量（編譯到對應的ASCLL碼） 
		else printf("\n");
	}
	
	return 0;
} 
