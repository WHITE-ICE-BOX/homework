#include <stdio.h>
#include <math.h>
typedef long long int llt;

int main()
{
    llt x, y;
    scanf("%lld%lld", &x, &y);

    llt Max=-1;

    for(llt i=x;i>=1;i--)
    {
        if(x%i==0 && y%i==0)
        {
            if(Max==-1)
            {
                Max=i;
            }
            else
            {
                printf("%lld\n", i);
                return 0;
            }
        }
    }

    printf("-1\n");
}