#include <stdio.h>
char cumle[200],cumle2[200];
int main()
    {
        printf("cumleyi giriniz lutfen");
        gets(cumle);
        printf("cümleyi tekrar giriniz lutfen");
        scanf("%s",cumle2);
        printf("gets ile girilen cumle; %s",cumle);
        printf("\nscanf ile alınan cumle; %s",cumle2);
        return 0;
        //scanf ile sadece tek kelime aldı
    }
