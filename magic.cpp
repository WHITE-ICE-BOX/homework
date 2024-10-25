#include <stdio.h> 
#include <stdlib.h> 

int main(){
    int t, n, k, count, choose;
    scanf("%d", &t);  // 測試案例數
    for (int i = 0; i < t; i++) {
        int count1 = 100000, count2 = 100000, max = 0;
        scanf("%d %d", &n, &k);  // 讀取 n 和 k
        int *a = (int *)malloc(n * sizeof(int));
        if (a == NULL) {  // 檢查記憶體分配是否成功
            printf("Memory allocation failed!\n");
            return 1;
        }

        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);  // 讀取數列 a
        }

        // 遍歷數列 a，計算 count1 和 count2
        for (int j = 0; j < n; j++) {
            if (a[j] > k) {
                choose = a[j] % k;
                if (choose > max) {
                    max = choose;
                    count1 = k - max;
                }
            } else if (a[j] < k) {
                choose = k - a[j];
                if (choose < count2) {
                    count2 = choose;
                }
            }
        }

        // 選擇 count1 和 count2 中的較小值
        if (count1 > count2) {
            count = count2;
        } else {
            count = count1;
        }

        printf("%d\n", count);  // 輸出結果
        free(a);  // 釋放記憶體
    }
    return 0;
}