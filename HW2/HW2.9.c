/* Armstrong sayı */
#include <stdio.h>
int main()
{
    
    int number,n,digit,sum=0;
    printf("bir sayı giriniz lutfen");
    scanf("%d",&number);
    n=number;
    while(number>0)
    {
        digit=number%10;
        number=number/10;
        sum+=digit*digit*digit;
    }
    if(sum==n)
        printf("sayı bir armstrong sayıdır");
    else
        printf("sayı armtrong degildir");
    return 0;
}