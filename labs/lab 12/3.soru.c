/* girlen kelimede kac adet sesli harf bukundugunu tespit eder */
#include <stdio.h>
#include <string.h>

int main()
{
    char kelime[20],sesli_harfler[]={"euıoi"};
    int i,j,counter=0;
    printf("kelimeyi giriniz lutfen");
    gets(kelime);
    for(i=0;i<strlen(kelime);i++)
    {
        for(j=0;j<strlen(sesli_harfler);j++)
        {
            if(kelime[i]==sesli_harfler[j])
                counter++;
        }
    }
    printf("girilen kelşmede %d adet sesli harf bulunmaktadır",counter);
    return 0;
}