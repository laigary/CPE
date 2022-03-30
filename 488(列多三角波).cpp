#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#define MAX 5000
int main()
{
    int i,j,k,n,a,b;
    while(scanf("%d",&n)!=EOF)
    {
        for(k=1;k<=n;k++)
        {
            char str[MAX],*ptr;
            scanf("%d%d",&a,&b);
            ptr=str;
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=i;j++)
                    *ptr=i+'0',ptr++;
                *ptr='\n',ptr++;
            }
            for(i=a-1;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                    *ptr=i+'0',ptr++;
                *ptr='\n',ptr++;
            }
            *ptr='\0';
            for(i=1;i<=b;i++)
            {
                printf("%s",str);
                if(i!=b)
                    printf("\n");
            }
            if(k!=n)
                printf("\n");
        }
    }
    system("PAUSE");
    return 0;
}
