/* 145=1!+4!+5! -->fartorion sayı*/
#include <stdio.h>
int main()
{
    int number,factorial,digit,n,i,sum=0;
    printf("bir sayı giriniz lutfen");
    scanf("%d",&number);
    n=number;
    for(i=0;n>0;i++)
    {
        digit=n%10;
        factorial=1;
        for(;digit>0;digit--)
        {
            factorial*=digit;
        }
        sum+=factorial;
        n=n/10;
        
    }
    if(sum==number)
        printf("sayı faktorion sayıdır");
    else
        printf("sayı faktorion sayı degildir");
    return 0;
}