/* prints product and sum of ten numbers entered by user */ 
#include <stdio.h>
int main()
{
    int number,sum=0,product=1;
    printf("on adet sayı giriniz lutfen");
    for(int i=0;i<10;i++)
    {
        scanf("\n%d",&number);
        sum+=number;
        product*=number;
    }
    printf("sayıların toplamı; %d\ncarpımı; %d",sum,product);
    return 0;
}