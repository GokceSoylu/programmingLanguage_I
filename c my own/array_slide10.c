#include <stdio.h>
#define terim_sayısı 5
int main()
{
    double dizi[terim_sayısı];
    printf("5 adet sayı giriniz");
    for(int i=0;i<terim_sayısı;i++)
    {
        scanf("%lf",&dizi[i]);
    }
    return 0;
}