/* dizilerde fonksiyonlarla islemler */
#include <stdio.h>
#define eleman_sayısı 5
int fonksiyon_1(int[], int);
int fonksiyon_2(int);
int main()
{
    int dizi[eleman_sayısı],i;
    printf("dizi icin 5 adet sayı giriniz lutfen\n");
    for(i=0;i<5;i++)
        scanf("%d",&dizi[i]);
    printf("\nolusturdugunuz dizi; ");
    for(i=0;i<5;i++)
        printf("%d ",dizi[i]);
    fonksiyon_1(dizi,eleman_sayısı);
    printf("\ndiznin iki katı hali; ");
    for(i=0;i<5;i++)
        printf("%d ",dizi[i]);
    printf("ilk degerin altı katı; %d",fonksiyon_2(dizi[0]));
    return 0;
    
}
int fonksiyon_1 (int a[], int eleman)
{
    int i;
    for(i=0;i<eleman;i++)
    {
        a[i]*=2;
    }
    return a[i];
}
int fonksiyon_2(int b)
{
    
    b*=3;
    return b;
}