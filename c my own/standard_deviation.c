#include <stdio.h>
#include <math.h>
#define terim_sayısı 10
int main ()
{
    int i,j;
    double dizi[terim_sayısı],sum=0.0,ortalama,standard_deviation;
    printf("\non adet sayı giriniz lutfen");
    for(int i=0;i<terim_sayısı;i++)
    {
        scanf("\n%lf",&dizi[i]);
        sum+=dizi[i];
    }
    ortalama=sum/terim_sayısı;
    for(sum=0.0,j=0;j<terim_sayısı;j++)
    {
        sum+=pow(dizi[j]-ortalama,2.0);
    }
    standard_deviation=sqrt(sum/terim_sayısı);
    printf("\nortalama; %lf \nstandard sapma; %lf",ortalama,standard_deviation);

    return 0;



}

