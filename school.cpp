#include<stdio.h>
int main(){
    int n,k,result;
    scanf("%d %d",&n,&k);
    if(n%2!=0)
        result = n-k+2;
    else
        result = n-k+1;
    printf("%d",result);
    return 0;
}