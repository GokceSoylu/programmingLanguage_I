/* buyukten kucuge dogru sıralı olan bir diziye sırayı bozmayacak sekilde bir eleman ekler */
#include <stdio.h>

int fonksiyon(int[], int);
int main()
{
    int i,dizi[6]={5,4,3,2,1};
    printf("bir sayı giriniz lutfen\n");
    scanf("%d",&dizi[5]);
    fonksiyon(dizi, 6);
    for(i=0;i<6;i++)
    {
        printf("%d ",dizi[i]);
    }
}
int fonksiyon(int dizi[], int size )
{
    int i,j,gecici;
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(dizi[i]<dizi[j])
            {
                gecici=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=gecici;
            }
        }
        
    }
    return 0;
}