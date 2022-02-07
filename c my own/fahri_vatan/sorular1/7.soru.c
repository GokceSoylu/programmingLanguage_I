/* klavyeden kucuk harflerle girilen bir cumlenin sasdece kelimelerini ilk harfinin buyutup yazdiriri */
#include <stdio.h>
#define eleman_sayısı 200
int main()
{
    int i;
    char cumle[eleman_sayısı];
    printf("cumleyi giriniz lutfen\n");
    gets(cumle);
    for(i=0;i<eleman_sayısı;i++)
    {
        if(cumle[i]==' ')
        {
            cumle[i+1]=cumle[i+1]-32;
        }
    }
    printf("%s",cumle);
    return 0;
}