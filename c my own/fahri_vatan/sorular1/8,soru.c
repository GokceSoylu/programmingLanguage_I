/* klavyeden tum harfleribuyuk harflerle girilen cumleyı buyu_harf/kucuk_harf seklinde yazdırır */
#include <stdio.h>
#include <string.h>
int main()
{
    char cumle[70];
    int i;
    printf("bir cumle giriniz lutfen\n");
    gets(cumle);
    printf("\n");
    for(i=0;i<strlen(cumle);i++)
    {
        if(cumle[i]==' ')
        {
            printf("%c",cumle[i]);
            continue;

        }
        if(i%2==0)
            printf("%c",cumle[i]+32);
        else
            printf("%c",cumle[i]);
    }
    return 0;
}