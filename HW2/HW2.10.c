/* 1 ile n arası tum armstrong sayılar */
#include <stdio.h>
int main()
{
    int number,digit,n;
    printf("bir sayı girniz lutfen");
    scanf("%d",&number);
    for(;number>0;number--)
    {
        int sum=0,
        n=number;
        while(n>0)
        {
            digit=n%10;
            n=n/10;
            sum+=digit*digit*digit;
        }
        if(sum==number)
            printf("%d ",sum);
        
    }
    return 0;
}