#include <stdio.h>


int fonksiyon(int[], int);
int main()
{
    int eleman_sayısı;
    printf("dizinin eleman sayısını giriniz lutfen\n");
    scanf("%d",&eleman_sayısı);

    int dizi[eleman_sayısı],i;
    printf("\ndizinin elemanlarını giriniz lutfen\n");
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("%d.eleman= ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\nsu anki dizniz; ");
    fonksiyon(dizi, eleman_sayısı);
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("%d ",dizi[i]);
    }
    eleman_sayısı=eleman_sayısı+1;
    printf("yeni elemanı giriniz lutfen");
    scanf("%d",&dizi[eleman_sayısı-1]);
    fonksiyon(dizi, eleman_sayısı);
    printf("dizinini yenihali; ");
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("%d ",dizi[i]);
    }

}
int fonksiyon(int dizi[], int size)
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