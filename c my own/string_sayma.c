/* girilen metinde karakter sayma */
#include <stdio.h>
int main()
{
    int i=0;
    char metin[100];
    printf("metin girmenizi rica edebilir miyiz? :)");
    gets(metin);
    while(metin[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;



}