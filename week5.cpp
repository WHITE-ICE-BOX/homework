#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        int dif = k; // dif用來記錄最接近目標數字的差
        int mod2 = 0, mod3 = 0, mod4 = 0; // 先記錄2 3 4 的倍數，等等可能會用到
        int tmp;
        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);
            tmp %= k;
            if(tmp % 2 == 0) mod2++;
            if(tmp % 3 == 0) mod3++;
            if(tmp % 4 == 0) mod4++;
					
            if(dif == 0) continue;
            if(tmp > 0){
                if(k - tmp < dif) dif = k - tmp;
            }
            else dif = 0;
        }

        if(n == 1 || dif == 0 || k == 1 || k == 2 || k == 3 || k == 5) printf("%d\n", dif);
        else if(k == 4){
            if(mod2 >= 2) printf("0\n");
            else if(mod2 == 1 || dif == 1) printf("1\n");
            else printf("2\n");
        }
        else if(k == 6){
            if(mod2 > 0 && mod3 > 0) printf("0\n");
            else if(dif == 1 || mod3 > 0) printf("1\n");
            else if(mod2 - mod4 > 0 && mod2 >= 2) printf("1\n");
            else if(dif == 5) printf("3\n");
            else printf("2\n"); 
        }
    }
}