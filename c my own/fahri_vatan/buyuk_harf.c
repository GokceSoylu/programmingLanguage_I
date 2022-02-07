/* metnin harflerini rastgele buyuk/kucuk yazdırma */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    char metin[50];//başta odaklanamayabilt-rsin ama devam et zamanla açıldık
    int a;
    printf("metin giriniz lutfen");
    gets(metin);
    srand(time(NULL));
    for(int i=0;i<strlen(metin);i++)
    {
        
        a=rand()%100+1;
        if(a%2==0)
            printf("%c",metin[i]-32);
        else
            printf("%c",metin[i]);
    }
    return 0;    

}