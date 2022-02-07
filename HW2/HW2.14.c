/* 1 den n sayısına kadarki tum guclu sayıları(145=1!+4!+5!) yazdırma */
#include <stdio.h>
int main()
{
    int n,number,digit,factorial,sum;
    printf("bir sayı giriniz llutfen\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=0;
        number=i;
        while(number>0)
        {
            factorial=1;
            digit=number%10;
            for(int j=1;j<=digit;j++)
            {
                factorial*=j;
                
            }
            number=number/10;
            sum+=factorial;
        }
        if(sum==i)
            printf("\n%d",i);
    }
    return 0;
} 