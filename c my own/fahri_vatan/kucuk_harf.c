/* girilen metni tersten ve kucu/buyuk harf yazdırma */
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char metin[50];
    printf("metin giriniz lutfen");
    gets(metin);
    for(i=strlen(metin)-1;i>=0;i--)
    {
        if(metin[i]>=97)
            printf("%c",metin[i]-32);
        else
            printf("%c",metin[i]+32);

    }
    return 0;
}
