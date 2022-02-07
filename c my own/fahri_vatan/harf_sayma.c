/* klavyeden girilen metinde kac tane kelime oldugunu bulan program */
#include <stdio.h>//space sayısını cıkartırım ama o zaman harf sayarım speca den space ye kadar saymalıyım
#include <string.h>
int main()
{
    int counter=0;
    char metin[100],a;
    printf("metni girniz lutfen");
    gets(metin);
    a=' ';
    for(int i=0;i<strlen(metin);i++)
    {
        if(metin[i]==a)
                counter++;
    }
    printf("girilen metinde %lu adet harf vardir",strlen(metin)-counter);
    return 0;
}