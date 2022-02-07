/* a dizisnin aritmatik ortalamsından kucuk olan elmaanlarini b dizsine buyuk elamanlarını c dizsine atama */
#include <stdio.h>
#define terim_sayısı 7
int main()
{
    int i=0;
    float a[terim_sayısı],b[terim_sayısı],c[terim_sayısı],sum=0.0,ortalama;
    printf("a dizisi icin yedi adet sayı giriniz lutfen\n");
    for(;i<terim_sayısı;)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
        i++;
    }
    ortalama=(float)sum/i;
    for(int j=0;j<terim_sayısı;j++)
    {
        if(a[j]<ortalama)
            b[j]=a[j];
        else 
            c[j]=a[j];
    }
    printf("\nb dizisinin (aritmatik ortalamadan kucuk a dizisi elamanları) elamanları \n");
    for(int k=0;k<terim_sayısı;k++)
    {
        printf(" %0.0f",b[k]);

    }
    printf("\nc dizisi elemanları (a dizisnin ortalamadan buyuk elemanları\n)");
    for(int m=0;m<terim_sayısı;m++)
    {
        printf(" %0.0f",c[m]);
    }
    return 0;
}