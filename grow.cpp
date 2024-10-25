#include<stdio.h>
int main(){
    int n,result[30],k;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        if(i==0)
            result[i] = 2;
        else if(i==1)
            result[i] = 4;
        else{
            result[i] = result[i-1]+result[i-2];
            if(i>10)
                result[i] = result[i-1]+result[i-2]-result[i-11];
        }
        k = i;
    }
    printf("%d",result[k]);
    /*
        2
        4 2+2
        6 4+2
        10 6+4
        16 10+6
        26 16+10
        42 26+16
        68 42+26
        110 68+42
    */
    return 0;
}