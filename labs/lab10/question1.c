/* 8 elamamlı diziyi oku ve ortalamayı yazdır */
#include <stdio.h>
#define terim_sayısı 8
int main()
{
    double dizi[terim_sayısı],sum=0;
    printf("sekiz adet sayı giriniz lutfen\n");
    for(int i=0;i<terim_sayısı;i++)
    {
        scanf(" %lf",&dizi[i]);
        sum+=dizi[i];
    }
    printf("ortalama; %.2lf",sum/8);
    return 0;
}