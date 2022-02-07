#include <stdio.h>
#define pi 3.14
int main()

{
    //define kullandım off cool --> undef ile de iptal edebilirsin
    float area;
    int r;
    printf("lutfen, yarıcapı giriniz");
    scanf("%d",&r);
    area=2*pi*r*r;
    printf("alan %f",area);
    return 0;

}