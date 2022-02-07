/* klavyedn giirlen girilen kelimlerin baştan ve sondan okunusunu aynı olup olmadıgını kontrol eder */
#include <stdio.h>
#include <string.h>
int main()
{
    char kelime[15],kelime_ters[15];
    int i;
    printf("bir kelime giriniz lutfen");
    gets(kelime);
    for(i=0;i<strlen(kelime);i++)
    {
        kelime_ters[strlen(kelime)-i-1]=kelime[i];

    }
    if(strncmp(kelime,kelime_ters,strlen(kelime))==0)//burada ters çevirme olsaydı sayının yarısını alırdık ama tersini baska bir diziye aktarıyoruz aynı degil
        printf("\nkelime palindromik kelimedir");
    else   
        printf("\nkelime palindromik degildir");
    return 0;
}