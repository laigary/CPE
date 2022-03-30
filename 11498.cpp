#include <stdio.h>
#include<stdlib.h> 

int main() {
    int n, x, y, a, b;
    while(scanf("%d", &n) == 1 && n) { //這邊&&n的用處是 當n==0時就可以直接結束; 如果不要&&n的話 就要加if
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
