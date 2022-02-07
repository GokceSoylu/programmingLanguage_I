/* klavyeden girilen kelimenin harflerini iki buyuk iki kucuk yaparak ayazdırır */
#include <stdio.h>
#include <string.h>
int main()
{
    char kelime[10];
    int i,j,k;
    printf("bir kelime giriniz lutfen");
    gets(kelime);
    for(i=0;i<strlen(kelime);i++)
    {
        if(i%4==0 || i%4==1)//baktık ki çiftlik teklikten gidemiyoruz o zaman 4'e modunu aldık.--> dikkat  dort sayıda tekarra ediyor periyod 4 ;)
            printf("%c",kelime[i]-32);
        else
            printf("%c",kelime[i]);
    }
    return 0;
}