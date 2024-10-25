#include<stdio.h>
#include<stdlib.h>
int stair(int a){
 if(a==1||a==0)
  return 1;
 else
  return a*stair(a-1);
}
int main(){
 int x[2],y[2], result;
 scanf("%d %d %d %d",&x[0],&x[1],&y[0],&y[1]);
 result = stair(abs(x[0]-y[0])+abs(x[1]-y[1]))/(stair(abs(x[1]-y[1])) *stair(abs(x[0]-y[0])));
 printf("%d", result);
 return 0;
}