#include <stdio.h>
#include <stdlib.h>

int arr[16]; //�}�C�W��[�}�C����] 

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
                arr[k] = abs(arr[k] - arr[(k+1) % n]); //�̫᪺%n�i���i�L�A���v�T   abs�O����Ȫ��N�� 
				//printf("%d %d\n",k,arr[k]); 
                all &= !arr[k];
            }
            arr[n-1] = abs(arr[n-1] - head);
            all &= !arr[n-1]; //�[�F "!" �ܼƴN�|�Q�� bool �ӬݫݡA�ҥH���N�u�� 0 �� 1�C �� C �y�������P�w�O 0 �N�O 0 �A�Ҧ��D 0 ���N�O1 
            //printf("%d\n",arr[n-1]);
            //printf("all=%d\n",all);
            if(all) break;
        }
        if(!all) printf("LOOP\n");
        else printf("ZERO\n");
    }

    return 0;
}
