#include <stdio.h>
int main()
{
    int i=0;
    char string[100];
    printf("metin giriniz lutfen");
    gets(string);
    while(string[i]!='\0')//karakteri '' ile alıyoruz :) tabi akıllarda soru bunu nasıl saydıı, aldıktan sonra saymıs olamaz mı? 0 karakterine kadar krktr sayısını sayar 
    {
        i++;
    }
    printf("girdiginiz metinde %d adet karakter bulunmaktadir",i);
    return 0;

}