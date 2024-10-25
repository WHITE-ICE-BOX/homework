#include <stdio.h>

int main(){
    char s[4];
    int x;
    scanf("%s", s);
    scanf("%d", &x);

    x %= 26;
    for(int i = 0; i < 3; i++){
        s[i] += x;
        if(s[i] > 'Z') s[i] -= 26;
    }
    
    printf("%s\n", s);
}