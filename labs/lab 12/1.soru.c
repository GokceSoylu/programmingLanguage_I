/* harf olmayanları stringden cıkartıp yazdırır */
#include <stdio.h>
#include <string.h>
int main()
{
    char kelime[20],kelime_new[20];//yeni dizi zaten yaıpılır ama yeni dizi olmada nasıl yapılır 
    int i,counter=0;
    printf("kelimenizi giriniz lutfen");
    gets(kelime);
    for(i=0;i<strlen(kelime);i++)
    {
        if(kelime[i]<123 && kelime[i]>96 || kelime[i]<91 && kelime[i]>64 )
        {
            kelime_new[counter]=kelime[i];
            counter++;
        }    
    }
    
    printf("\n%s",kelime_new);
    return 0;

}