#include<stdio.h>
#include <stdlib.h> 
int main(){
    int n , check[100001][2];
    scanf("%d",&n);
    int **a = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
        a[i] = (int*)malloc(2 * sizeof(int));
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<2 ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0 ; i<n-1 ; i++ ){
        if(a[i+1][0]<a[i][0]){
            int temp = a[i][0];
            a[i][0] = a[i+1][0];
            a[i+1][0] = temp;
        }
    }
    int i=0;
    check[i][0] = a[0][0];
    check[i][1] = a[0][1];
    for(int j = 0 ; j < n-1 ; j++){
        if((a[j+1][0]<=a[j][1]+1)&&(a[j+1][1]>a[j][1]))
            check[i][1] = a[j+1][1];
        if((a[j+1][0]>a[j][1]+1)){
            i += 1;
            check[i][0] = a[j+1][0];
            check[i][1] = a[j+1][1];
        }
    }
    for(int k=0 ; k<=i ; k++ )
        printf("%d %d\n",check[k][0],check[k][1]);
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);
    return 0;
}