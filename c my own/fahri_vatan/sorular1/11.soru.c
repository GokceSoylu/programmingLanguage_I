/* klavyeden girilen bir kelimenin harfleri arasına birer bosluk koyarak tekrar yaazdırır */
#include <stdio.h>
#include <string.h>
int main()
{
    char cumle[200];
    int i;
    printf("cumleyi giriniz lutfen\n");
    gets(cumle);
    printf("\n");
    for(i=0;i<strlen(cumle);i++)
    {
        printf("%c",cumle[i]);
        printf(" ");
    }
}