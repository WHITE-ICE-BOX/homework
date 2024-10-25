#include <stdio.h>
#include <math.h>
int isprime(int n){
    if(n<1)
        return 0;
    else if(n==1)
        return 1;
    for(int i=2 ; i<=sqrt(n) ; i++){
        if (n % i == 0) 
            return 1;
    }
    return 2;
}
int main(){
    int integer,result;
    scanf("%d",&integer);
    result = isprime(integer);
    if(result==0)
        printf("ERROR");
    else if(result==1)
        printf("No");
    else if(result==2)
        printf("Yes");
    return 0;
}