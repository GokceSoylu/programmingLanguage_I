/* strong number-->145=1!+4!+5! */
#include <stdio.h>
int main()
{
    int number,n,digit,factorial,sum=0;
    printf("bir adet sayı giriniz lutfen");
    scanf("%d",&number);
    n=number;
    while(number>0)
    {
        factorial=1;
        digit=number%10;
        for(int i=1;i<=digit;i++)
        {
            factorial*=i;
        }
        sum+=factorial;
        number=number/10;
    }
    if(n==sum)
        printf("sayı guclu sayıdır");
    else
        printf("sayı guclu sayı degildir");
    return 0;


}