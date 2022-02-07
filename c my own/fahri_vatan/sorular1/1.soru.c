/* klavyeden girilen n elemanlı bir dizide her elemandan kac adet oldugunu bulur */
#include <stdio.h>
#include <string.h>
#define eleman_sayısı 10
int main()
{
    int dizi[10],counter,i,j;
    printf("dizi on adet sayı giriniz lutfen\n");
    for(i=0;i<eleman_sayısı;i++)
    {
        scanf("%d",&dizi[i]);
    }
    for(i=0;i<eleman_sayısı;i++)
    {
        counter=1;
        for(j=i+1;j<eleman_sayısı;j++)
        {
            if(dizi[i]==dizi[j])
                counter++;
        }
        for(j=i-1;j>=0;j--)
        {
            if(dizi[i]==dizi[j])
                counter++;
        }
        printf("\n%d.elemandan %d adet bulunmaktadır.",i+1,counter);
    }
    return 0;
}