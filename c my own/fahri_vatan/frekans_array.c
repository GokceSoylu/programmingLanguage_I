/* dizinin her bir elamanından kaç taane oldugunu bulma */
#include <stdio.h>//yine olmadı
#define terim_sayısı 6
int main()
{
    int dizi[terim_sayısı],k,i,j;
    printf("altı adet sayı giriniz lutfen");
    for (i=0;i<terim_sayısı;i++)
    {
        scanf("%d",&dizi[i]);
    }
    for(i=0;i<terim_sayısı;i++)
    {
        int counter=1, flag=0;
        for(j=i+1;j<terim_sayısı;j++)//bide geriye saycak bakam coccum
        {
            if(dizi[i]==dizi[j])
            {
                counter++;
            }
            
        }
        for(j=i-1;j>=0;j--)
        {
            if(dizi[i]==dizi[j])
            {
                counter++;
            }
            
        }
        printf("%d. elemandan %d adet bulunmaktadır",i+1,counter);
    }
    return 0;
}
