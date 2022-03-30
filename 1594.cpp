#include <stdio.h>
#include <stdlib.h>

int arr[16]; //陣列名稱[陣列長度] 

int main() {
    int t,n,head;
    int all;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        for (int j = 0; j < 50; j++) {
            all = 1;
            head = arr[0];
            for (int k = 0; k < n-1; k++) {
                arr[k] = abs(arr[k] - arr[(k+1) % n]); //最後的%n可有可無，不影響   abs是絕對值的意思 
				//printf("%d %d\n",k,arr[k]); 
                all &= !arr[k];
            }
            arr[n-1] = abs(arr[n-1] - head);
            all &= !arr[n-1]; //加了 "!" 變數就會被當成 bool 來看待，所以它就只有 0 跟 1。 而 C 語言中的判定是 0 就是 0 ，所有非 0 的就是1 
            //printf("%d\n",arr[n-1]);
            //printf("all=%d\n",all);
            if(all) break;
        }
        if(!all) printf("LOOP\n");
        else printf("ZERO\n");
    }

    return 0;
}
