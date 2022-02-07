/* klavyeden girilen kelimenin harlerini çiftini tekiyle(yanındakiyle yani)  yer degistirir */
#include <stdio.h>
#include <string.h>
int main()
{
    char kelime[15],gecici;
    printf("bir kelime giriniz lutfen");
    gets(kelime);
    if(strlen(kelime)%2!=0)
    {
        for(int i=0;i<strlen(kelime)-1;i=i+2)
        {
            gecici=kelime[i+1];
            kelime[i+1]=kelime[i];
            kelime[i]=gecici;
        }
    }
    else
    {
        for(int i=0;i<strlen(kelime);i=i+2)
        {
            gecici=kelime[i+1];
            kelime[i+1]=kelime[i];
            kelime[i]=gecici;
        }
    }
    
    printf("%s",kelime);
    return 0;
}