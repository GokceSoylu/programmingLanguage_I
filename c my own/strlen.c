#include <stdio.h>
#include <string.h>
int main()
{
    int counter=0;
    char metin[100],harf;
    printf("metin giriniz lutfen\n");
    gets(metin);
    printf("\ntaramak istedigin harfi giriniz lutfen\n");
    scanf("%c",&harf);
    for(int i=0;i<strlen(metin);i++)//harf taramak için sayyya ihtiyacımız var strlen() fonk bu işi goruyor
    {
        if(metin[i]==harf)
            counter++;
    }
    printf("girilen metinde %d adet %c harfi bukunmaktadır",counter,harf);
    return 0;
}