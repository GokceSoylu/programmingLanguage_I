#include<stdio.h>
int main()
{
    int taban,yükseklik,alan;
    
    printf ("taban giriniz ");
    scanf("%d",&taban);
    
    printf("yükseklik giriniz");
    scanf("%d",&yükseklik);
    
    alan=(taban*yükseklik)/2;
    
    printf("ücgenin alanı %d",alan);
   
    return 0;
}