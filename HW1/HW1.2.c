/* the program calculating are of a circle with given radius*/
#include <stdio.h>
int main()
{
    
    float pi=3.14,r,area;
    printf("alanını hesaplamak istediiginiz dairenin yarıcap degerini girniz lutfen");
    scanf("%f",&r);
    area=(float)pi*r*r;
    printf("alan; %f",area);
    return 0;



}