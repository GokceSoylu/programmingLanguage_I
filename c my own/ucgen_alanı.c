#include <stdio.h>
int main()
{
    int taban,yukseklık,alan;
    printf("alanını hesaplamak istediginiz ucgenin taban uzunlugunu ve yüksekligini girniz lutfen\n");
    printf("tban uzunlugu\n");
    scanf("%d",&taban);
    printf("yukseklıgı");
    scanf("%d",&yukseklık);
    alan=(taban*yukseklık)/2;
    printf("ucgenin alanı; %d",alan);
    return 0;
}