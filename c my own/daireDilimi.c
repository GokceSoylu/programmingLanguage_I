#include <stdio.h>
int main()
{
    float alan;
    int acı,r,pi=3;
    printf("daire diliminin alanını hesaplayabilmek icin yarıcap ve acı degerlerini giriniz\nyarıcap;");
    scanf("%d",&r);
    printf("acı;");
    scanf("%d",&acı);
    alan=(float)acı/360*pi*r*r;
    printf("\nalan; %f",alan);
    return 0;
}