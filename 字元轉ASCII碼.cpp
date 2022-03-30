#include <stdio.h>
int main(){
	//宣告字元
	char c;
	//讓使用者輸入
	printf("請輸入字元：");
	scanf("%c", &c);
	//祥祥哥資訊 轉載請標註來源
	//輸出字元轉ASCII
	printf("字元 %c 轉ASCII為 %d\n", c, c);
	return 0;
}
