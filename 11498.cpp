#include <stdio.h>
#include<stdlib.h> 

int main() {
    int n, x, y, a, b;
    while(scanf("%d", &n) == 1 && n) { //�o��&&n���γB�O ��n==0�ɴN�i�H��������; �p�G���n&&n���� �N�n�[if
	//if (n==0)
	//break;
    scanf("%d %d", &x, &y);
        while(n--) {
            scanf("%d %d", &a, &b);
            if(a == x || b == y)
                printf("divisa");
            else if(a > x && b > y)
                printf("NE");
            else if(a < x && b > y)
                printf("NO");
            else if(a < x && b < y)
                printf("SO");
            else
                printf("SE");
        }
    }
    return 0;
}
