#include <stdio.h>
int main() {
	char s[27] = "22233344455566677778889999";
	char str[50];
	while(scanf("%s", str) == 1) {
		int i;
		for(i = 0; str[i]; i++) {
			if(str[i] >= 'A' && str[i] <= 'Z')
				printf("%c", s[str[i]-'A']);
			else
				printf("%c", str[i]);
		}
		printf("\n"); //另一個寫法  puts(""); 
	}
    return 0;
}
