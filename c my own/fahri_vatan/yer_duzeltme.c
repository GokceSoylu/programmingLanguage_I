/* yer_degistirme.c programının olusturdugu sifreli cumleyı duzeltır */
#include <stdio.h>
#include <string.h>
int main()
{
    char sifre[20];
    int i; 
    printf("sifrenizi giriniz lutfen");
    gets(sifre);
    for(i=0;i<strlen(sifre);i++)
    {
        if(i%2==0)
            printf("%c",sifre[i+1]);
        else   
            printf("%c",sifre[i-1]);
    }
        return 0;

}