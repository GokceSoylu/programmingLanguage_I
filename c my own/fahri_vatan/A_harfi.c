/* klavyeden buyuk harflerle girilen metinde kac tane içinde A bulunan kelime oldugunu bulmak */
#include <stdio.h>
#include <string.h>
int main()
{
    char metin[100],harf[1]={'A'};
    int i,counter=0,counter_reel=0;
    printf("metninizi buyuk harflerle giriniz lutfen");
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
    printf("girdiginiz metinde %d adet \"A\" bulunmaktadır",counter_reel);
    return 0;


}
