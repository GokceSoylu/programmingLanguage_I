/* 10 elemanlı klavyeden girilen tam sayılardan en buyuk ikisini yazdırıan fonksiyon */
#include <stdio.h>

int max_2(int dizi[]);
int main()
{
    int dizi[10],i;
    printf("dizi icin on aadet sayı giriniz lutfen\n");
    for(i=0;i<10;i++)
    {
        scanf("\n%d",&dizi[i]);
    }
    max_2(dizi);

}
int max_2 (int dizi[])
{
    int i,max_1=dizi[0],max_2=dizi[0];
    for(i=0;i<10;i++)
    {
        if(max_1<dizi[i])
            max_1=dizi[i];
    }
    for(i=0;i<10;i++)
    {
        if(max_1>dizi[i] && max_2<dizi[i])
            max_2=dizi[i];
    }
    printf("diznin en buyuhk degeri; %d, ikinci buyuk degeri; %d",max_1,max_2);
    return 0;
}