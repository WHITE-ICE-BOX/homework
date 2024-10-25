#include <stdio.h>
int main(){
    int n,k,sum=1;
    scanf("%d %d",&n,&k);
    int x[n];
    for(int i=0 ; i<n ; i++)
        scanf("%d",&x[i]);
    for(int i=0 ; i<n ; i++)
        sum *= x[i];
    printf("%d\n",sum % k); 
    return 0;
}