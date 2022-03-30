#include<stdio.h>
#include<stdlib.h>
int t, n, a, b, ans;  
int main()  
{  
    scanf ("%d", &t);  //t代表要輸入多少的數字 
    while (t--)  
    {  
        scanf ("%d", &n);  //n是要輸入的數字 
        ans = 0;  
        for (int i = n-50; i < n; ++i)  
        {  
            a = b = i;  
            while (b)  //會放b的意思是當b=0時就會跳出這while迴圈跑去if 
            {  
                a += b % 10;  
                b /= 10;  
                //printf("%d %d %d\n",a,b,i); //這行是可以看清楚怎麼跑 
            } 
			 
            if (a + b == n)  //if不等於的時候會跑去a=b=i那行然後再進去while 
            {  
                ans = i;  
                break;  
            }  
        }  
        printf ("%d\n", ans);  
    }  
    return 0;  
} 
