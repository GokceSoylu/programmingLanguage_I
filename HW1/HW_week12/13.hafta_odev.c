/* klavyeden alınan integer tipinde bir boyutlu dizide kac adet çift sayı oldugunu bulan fonksiyon */
#include <stdio.h>
#define eleman_sayısı 5
int fonksiyon(int[]);
int main()
{
    int dizi[eleman_sayısı],i;
    printf("dizi icin  bes adet sasyı giriniz lutfen");
    for(i=0;i<5;i++)
    {
        scanf("%d",&dizi[i]);
    }
    printf("dizide %d adet cift sayı bulunmaktadır",fonksiyon(dizi));



}
int fonksiyon(int dizi[])
{
    int i,counter=0;
    for(i=0;i<eleman_sayısı;i++)
    {
        if(dizi[i]%2==0)
            counter++;
    }
    
    return counter;
}