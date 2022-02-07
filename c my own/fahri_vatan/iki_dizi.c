/* a dizisindeki negatif elamanları b, pozitif elamanlari c dizine aktarma*/
#include <stdio.h>
#define terim_sayısı 7
int main()
{
    //burda a ve b dizileerinde elaman sayıs sorunu var ya sonda treim sayısı kadar deil x  y kadar yazdır :)
    int dizi_a[terim_sayısı],dizi_b[terim_sayısı],dizi_c[terim_sayısı],x=0,y=0;
    printf("yedi elamanlı bir dizi giriniz lutfen(sıfırdan farklı) \n");
    for(int i=0;i<terim_sayısı;i++)
    {
        scanf(" %d",&dizi_a[i]);
    }
    for(int j=0;j<terim_sayısı;j++)
    {
        if(dizi_a[j]<0)
        {
            dizi_b[x]=dizi_a[j];
            x++;
        }
        else
        {
            dizi_c[y]=dizi_a[j];
            y++;    
        }
    
    }
    printf("b dizisi;");
    for(int k=0;k<x;k++)
    {
        printf("%3d",dizi_b[k]);
    }
    printf("\nc dizisi;");
    for(int m=0;m<y;m++)
    {
        printf("%3d",dizi_c[m]);
    }
    return 0;
}