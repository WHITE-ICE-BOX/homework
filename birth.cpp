#include <stdio.h>
int main(){
    int month[100001] , day[100001] , flag = 0,record;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d",&month[0],&day[0]);
    for(int i=1 ; i<=100000 ; i++){
        if (scanf("%d %d", &month[i], &day[i]) != 2){
            record = i - 1;
            break;
        }
    }
    for (int j = 1 ; j <= record; j++){
        if (month[j] < 1 || month[j] > 12 || day[j] < 1 || day[j] > days_in_month[month[j]]){
                printf("This date is error.\n");
                continue;
            }
        if(flag==0){
            if(((month[j]<month[0])||(month[j]==month[0]&&day[j]<day[0]) ))
                printf("Too early.\n");
            else if((month[j]>month[0]||(month[j]==month[0]&&day[j]>day[0]) ))
                printf("Too late.\n");
            else if(month[j]==month[0] && day[j]==day[0]){
                printf("Yes!\n");
                flag = 1;
                }
        }
        else if(flag==1)
            printf("Are you really not going to wish me a happy birthday?\n");
    }
    return 0;
}