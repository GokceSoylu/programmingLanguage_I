/*diziyi kucukten buyuge siralama */
#include <stdio.h>
#define terim_sayısı 5
int main()
{
    int dizi[terim_sayısı]={5,1,3,2,4},gecici_terim;
    for (int i=0;i<terim_sayısı;i++)
    {
        for(int j=i+1;j<terim_sayısı;j++)
        {
            if(dizi[i]>dizi[j])
            {
                gecici_terim=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=gecici_terim;
            }
        }
    }
    
    for(int k=0;k<terim_sayısı;k++)
    {
        printf("%2d",dizi[k]);
    }
    return 0;
}