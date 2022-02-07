/* fonksiyon --> tek boyutlu bir dizi içerisinde karabuk sehrine ait bir yıllık gunluk ortalama sıcaklık bilgileri tutulmaktadır[-25,35]. [-25,-10),[-10,5),[5,20),[20,35] */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sıcaklık(int [], int);
int main()
{
   int i,ort_sıcaklık[365];
    srand(time(NULL));
    for(i=0;i<365;i++)
    {
        ort_sıcaklık[i]=rand() % 60  -25;
    }
    sıcaklık(ort_sıcaklık,365);
}
int sıcaklık (int dizi[], int size) //fonksiyon dizi için tanımlamalrda parntezi [ unutmayınız!]
{
    int i,counter_1=0, counter_2=0, counter_3=0, counter_4=0;
    for(i=0;i<size;i++)
    {
        if(dizi[i]>=-25 && dizi[i]<-10)// yada || yapınca patlıyor :)
            counter_1++;
        else if(dizi[i]>=-10 && dizi[i]<5)
            counter_2++;
        else if(dizi[i]>=5 && dizi[i]<20)
            counter_3++;
        else if(dizi[i]>=20 && dizi[i]<=35)
            counter_4++;
    }
    printf("\n[-25,-10):%d\n[-10,5):%d\n[5,20):%d\n[20,35]:%d",counter_1,counter_2,counter_3,counter_4);
    return 0;

}

