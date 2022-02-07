/* klavyeden girilen metindeki hafrfelfden kaç tanesinde A jharfi bulunduğunu hesaplama */
#include <stdio.h>
#include <string.h>
int main()
{
    char metin[100],harf[1]={'A'};
    int i,counter=0,counter_reel=0;
    printf("buyuk harflerle metninizi giriniz lutfen");
    gets(metin);
    for(i=0;i<strlen(metin);i++)
    {
        if(metin[i]==harf[0])
        {
            counter++;

        }
        if(metin[i]==' ')
        {
            if(counter!=0)
            {
                counter_reel++;
                counter=0;
            }
        }
    }
    printf("\ncumlede %d adet A harfi bulunan kelime vardır",counter_reel);
    return 0;
}