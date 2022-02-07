/* sezar sifreleme metodu= verilen anahatar deger kadar harf harf otenmiş haliyle degistirilir. eger anahtar 2 is a-->c olur. */
#include <stdio.h>
#include <string.h>
int main()// eger buyukse diye kontrol ederiz
{
    char kelime[20],harf;
    int i,anahtar;
    printf("sifrelemek istediginiz cumlenin tumunu buyuk harflerle gırınız lutfen");
    gets(kelime);
    printf("lutfen anahtar degeri giriniz");
    scanf("%d",&anahtar);
    anahtar=anahtar%26;
    for(i=0;i<strlen(kelime);i++)
    {
        if(kelime[i]+anahtar>90)
            printf("%c",kelime[i]+anahtar-26);
        else
            printf("%c",kelime[i]+anahtar);
    }
    return 0;
}
