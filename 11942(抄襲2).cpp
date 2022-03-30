#include <stdio.h>
int main()
{
    int t,n,max,min,maxflag,minflag;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while (t--)
    {
        max=100;
        min=0;
        maxflag=1;
        minflag=1;
        int i=10;
        while (i--)
        {
            scanf("%d",&n);
            if (min>n) minflag=0;
            if (max<n) maxflag=0;
            min=n;
            max=n;
        }
        if (maxflag!=minflag) printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
