/* klavyeden girilen ust sınıra kadarki tum ikiz asalları yadırı. ikiz asallar aralarındaki fark 2 olan asllardır */
#include <stdio.h>
#include <string.h>
int main()//tek tek ASALLARI KONTROL ET SONRA BİDE FARKA BAK İŞLER KARİŞİR ONUN YERİNE TEMİZİNDEN ONCE UST SINIRA KADARKİ ASLLARI BULUP  SONRA FARKI KONTROL ETMEK DAH MANTIKLI ;)
{
    int sınır,i,k,j,eleman=0,flag,asallar[10000];
    printf("ust dınırı giriniz lutfen");
    scanf("%u",&sınır);
    
    for(i=2;i<=sınır;i++)
    {
        flag=0;
        for(k=2;k<i;k++)
        {
            if(i%k==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            asallar[eleman]=i;
            eleman++;
        }
    }
    printf("ikiz asallar; ");
    for(j=0;j<sınır;j++)
    {
        if(asallar[j+1]-asallar[j]==2)
            printf("  %d-%d",asallar[j],asallar[j+1]);
    }
    return 0;
}
