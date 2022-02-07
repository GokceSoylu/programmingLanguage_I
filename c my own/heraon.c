#include <stdio.h>
#include <math.h>
int main()
{
    float u,alan;
    int kenar1,kenar2,kenar3;
    printf("ucgenin kenar uzunluklarını giriniz lutfen");
    scanf("%d%d%d",&kenar1,&kenar2,&kenar3);
    u=(kenar1+kenar2+kenar3)/2;
    alan=sqrt(u*(u-kenar1)*(u-kenar2)*(u-kenar3));
    printf("\nucgenin alanı; %f",alan);
    return 0;


}