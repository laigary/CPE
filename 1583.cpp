#include<stdio.h>
#include<stdlib.h>
int t, n, a, b, ans;  
int main()  
{  
    scanf ("%d", &t);  //t�N��n��J�h�֪��Ʀr 
    while (t--)  
    {  
        scanf ("%d", &n);  //n�O�n��J���Ʀr 
        ans = 0;  
        for (int i = n-50; i < n; ++i)  
        {  
            a = b = i;  
            while (b)  //�|��b���N��O��b=0�ɴN�|���X�owhile�j��]�hif 
            {  
                a += b % 10;  
                b /= 10;  
                //printf("%d %d %d\n",a,b,i); //�o��O�i�H�ݲM�����] 
            } 
			 
            if (a + b == n)  //if�����󪺮ɭԷ|�]�ha=b=i����M��A�i�hwhile 
            {  
                ans = i;  
                break;  
            }  
        }  
        printf ("%d\n", ans);  
    }  
    return 0;  
} 
