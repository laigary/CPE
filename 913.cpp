#include<stdio.h>
#include<stdlib.h> 
int main()
{
    long long int a,n;
    while(scanf("%lld",&n)==1)
    {
        a=(((n*(n+2)/2)*3)-6);
        printf("%lld\n",a);
    }
    system("PAUSE");
    return 0;
}

