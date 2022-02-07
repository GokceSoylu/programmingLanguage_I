/* klavyeden girilen cumlede belirtilen harfin degistirilmesi */
#include <stdio.h>
#include <string.h>
int main()

{
    int i;
    char cumle[20],harf,harf_yeni;
    printf("cumleyi giriniz lutfen");
    gets(cumle);
    printf("\ndegistirmek istediginiz harf ve yeni hali yan yana giriniz lutfen\n");
    scanf("%c",&harf);
    scanf("%c",&harf_yeni);
    for(i=0;i<strlen(cumle);i++)
    {
        if(cumle[i]==harf)
        {
            cumle[i]=harf_yeni;
        }
    }
    printf("%s",cumle);
}