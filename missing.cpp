#include <stdio.h>
int main(){
    int N,flag=0;
    scanf("%d",&N);
    int x[N];
    for(int i=0 ; i<N-1 ; i++)
        scanf("%d",&x[i]);
    while(1){
        for(int i=0 ; i<N-1 ; i++)
            if(N == x[i])
                flag = 1;
        if(flag==0)
            break;
        N--;
        flag=0;
    }
    printf("%d\n",N);
}