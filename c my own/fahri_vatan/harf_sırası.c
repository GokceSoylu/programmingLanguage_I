/* klavyeden girilen kelimenin  her harfiini yanına sırasını koyarak yazdırır  */
#include <stdio.h>
#include <string.h>
int main()
{
    char kelime[10];
    int i;
    printf("bir keime giriniz lutfen");
    gets(kelime);
    for(i=0;i<strlen(kelime);i++)
    {
        printf("%c%d",kelime[i],i+1);
    }
    return 0;
}
