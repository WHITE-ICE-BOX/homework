#include <stdio.h>

int main(){
    int t, n, k, x, count, a[200000];
    
    printf("input a positive number t: ");
    scanf("%d", &t); // 有幾筆測試資料

    for(int i = 0; i < t; i++) {
        // 重置變數
        count = 0;
        x = 1;

        // 輸入 n 和 k
        scanf("%d %d", &n, &k);
        printf("input %d numbers: ", n);
        
        // 輸入 n 個數字
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        // 計算初始乘積
        for(int j = 0; j < n; j++) {
            x *= a[j];
        }

        // 如果乘積已經可以被 k 整除，則直接輸出 0
        if(x % k == 0) {
            printf("0\n");
            continue;
        }

        // 嘗試通過改變 a[i] 的值使得乘積可被 k 整除
        while(1) {
            for (int l = 0; l < n; l++) {
                a[l] += 1;  // 將當前元素加 1
                
                // 重置乘積
                x = 1;
                for(int j = 0; j < n; j++) {
                    x *= a[j];
                }

                // 如果新乘積可以被 k 整除，則停止
                if(x % k == 0) {
                    goto END;
                }

                // 如果不行，則恢復這個元素
                a[l] -= 1;
            }
            // 增加操作次數
            count++;
        }

    END:
        printf("%d\n", count);
    }
    
    return 0;
}
