#include <stdio.h>
int main()
{
    int number,sum=0,digit,n;
    printf("bir sayı giriniz lutfen");
    scanf("%d",&number);
    n=number;
    while(n>0)
    {
        digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    if(number==sum)
        printf("sayınız polindom sayıdır");
    else
        printf("sayınız polindrom degildir");
    return 0;



}