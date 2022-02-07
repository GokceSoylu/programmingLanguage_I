#include <stdio.h>
#define terim_sayısı 5
int main()
{
    double dizi[terim_sayısı],max;
    printf("5 adet sayı giriniz lutfen");
    for(int i=0;i<terim_sayısı;i++)
    {
        scanf("%lf",&dizi[i]);

    }
    max=dizi[0];
    for(int j=0;j<5;j++)
    {
        if(max<dizi[j])
            max=dizi[j];

    }
    printf("maximum sayı; %.3lf",max);
    return 0;

}