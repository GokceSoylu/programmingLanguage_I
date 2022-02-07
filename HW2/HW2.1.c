#include <stdio.h>
int main()
{
    int kenar1,kenar2,area,cevre;
    printf("dikdortgenin kenar uzunlukların giriniz lutfen");
    scanf("%d",&kenar1);
    scanf("%d",&kenar2);
    area=kenar1*kenar2,
    cevre=(kenar1+kenar2)*2;
    printf("diktortgenin alanı; %d\ncevresi; %d",area,cevre);
    return 0;
}