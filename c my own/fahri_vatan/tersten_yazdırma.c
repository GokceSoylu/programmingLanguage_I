#include <stdio.h>
int main()
{
    int i;
    char metin[50],gecici;
    printf("metni girniz lutfen");
    gets(metin);
    for(i=0;metin[i]!='\0';i++);
    for(int j=0;j<i/2;j++)
    {
        gecici=metin[j];
        metin[j]=metin[i-j-1];
        metin[i-j-1]=gecici;
    }
    printf("\n%s",metin);
    return 0;
}