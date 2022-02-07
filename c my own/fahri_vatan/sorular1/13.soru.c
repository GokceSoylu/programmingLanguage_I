/* klavyeden girilen cumlede kac adet a ile biten kelime oldugunu hesaplar */
#include <stdio.h>
#include <string.h>
int main()
{
    int i,counter=0;
    char cumle[200];
    printf("cumleyı giriniz lutfen");
    gets(cumle);
    for(i=0;i<strlen(cumle);i++)
    {
        if(cumle[i]==' ' && cumle[i-1]=='a')
            counter++;
    }
    if(cumle[strlen(cumle)-1]=='a')
        counter++;
    printf("cumlede %d tane a ile biten kelime bulunmaktadır",counter);
    return 0;
}