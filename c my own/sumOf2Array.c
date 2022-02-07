#include <stdio.h>
#define terim_sayısı1 7
#define terim_sayısı2 7
int main ()
{
    int i,j,k,k2;
    double dizi1[terim_sayısı1],dizi2[terim_sayısı2],c[terim_sayısı1];
    printf("\nilk dizi icin yedi adet sayı giriniz lutfen");
    for(int i=0;i<terim_sayısı1;i++)
    {
        scanf("\n%lf",&dizi1[i]); 

    } 
    printf("\nikinci dizi icin yedi adet sayı giriniz lutfen");
    for(int j=0;j<terim_sayısı2;j++)
    {
        scanf("%lf",&dizi2[j]);
    }
    for(int k=0;k<terim_sayısı1;k++)
    {
        k2=k+1;
        c[k]=dizi1[k]+dizi2[k];
        printf("\n%d.%lf",k2,c[k]);
    }
    return 0;
    //off of of of yakıyosun



}