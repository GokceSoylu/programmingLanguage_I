/* klavyeden girirlen bir cumlede istenilen kelimeyi arar */
#include <stdio.h>
#include <string.h>
int main()//nasıl yapabiliirm cumlede kelime arrıyıcam aynı hece arar gibi arasamda saysam nolur 
{
    int i,j,counter=0;
    char cumle[100],kelime[20],dizi[20];
    printf("cumleyı giriniz lutfen\n");
    gets(cumle);
    printf("cumle icinde aramak istediginiz kelimeyi giriniz lutfen\n");
    gets(kelime);
    for(i=0;i<strlen(cumle);i++)    
    {
        for(j=0;j<strlen(kelime);j++)
        {
            dizi[j]=cumle[i+j];
            
        }
        if(strncmp(dizi,kelime,strlen(kelime))==0)
            counter++;
    }

    printf("\ncumle içinde \"%s\" kelimesi %d adet bulunmaktadır",kelime,counter);
    return 0;
}