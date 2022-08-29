/* 10 elemanlı klavyeden girilen tam sayılardan en buyuk ikisini yazdırıan fonksiyon */
#include <stdio.h>

int max_2(int dizi[]);
int main()
{
    int dizi[10],i;
    printf("dizi icin on aadet sayi giriniz lutfen\n");
    for(i=0;i<10;i++)
    {
        scanf("\n%d",&dizi[i]);
    }
    max_2(dizi);

}
int max_2 (int dizi[])
{
    int i,max_1=dizi[0],max_2, index=0;
    for(i=0;i<10;i++)
    {
        if(max_1<dizi[i])
        {
            max_1=dizi[i];
            index=i;
        }   
    }
    for(i=index;i<9;i++) dizi[i]=dizi[i+1];
    //max elemanı diziden çıkartıyoruz
    //bu şekilde diziden çıkartılmadığında 
    //büyükten küçüğe sıralı olan dizilerde hatalı sonuç bulunuyor. 
    max_2=dizi[0];                         
    for(i=0;i<9;i++)
    {
        if(max_2<dizi[i])
            max_2=dizi[i];
    }
    printf("diznin en buyuk degeri; %d, ikinci buyuk degeri; %d",max_1,max_2);
    return 0;
}