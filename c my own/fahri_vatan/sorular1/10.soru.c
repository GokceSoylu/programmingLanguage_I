/* klavyeden girilen bir cumlenın tum harflerini iki kez yazdırır */
#include <stdio.h>
#include <string.h>
int main()
{
    char cumle[100];
    int i;
    printf("cumleeyi giriniz lutfen\n");
    gets(cumle);
    for(i=0;i<strlen(cumle);i++)
    {
        printf("%c",cumle[i]);
        if(cumle[i]!=' ')
            printf("%c",cumle[i]);
    }
    return 0;
}