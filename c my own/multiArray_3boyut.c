/* ogrencilerin birinci ve ikinic donem vize ve final notlari oku yzdır*/
#include <stdio.h>
#define ogr_say 5
#define donem_say 2
#define sınav_say 2
int main ()
{
    int not[ogr_say][donem_say][sınav_say];
    for(int i=0;i<ogr_say;i++)
    {
        printf("\n%d.ogrenci",i+1);
        for(int j=0;j<donem_say;j++)
        {
            printf(" %d.donem",j+1);
            for(int k=0;k<sınav_say;k++)
            {
                printf(" %d.sınav;",k+1);
                scanf("%d",&not[i][j][k]);
            }
        }
    }
    printf("\nogrenmek istediginiz not icin sırasıyla ogrenci sayısı, donem ve sınav bilgilerini giriniz lutfen");
    scanf("%d%d%d",&ogr,&don,&sınav);
    printf("%d",not[ogr-1][don-1][sınav-1]);
    //iyi iş çıkradık
    return 0;

}