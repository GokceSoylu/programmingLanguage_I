#include <stdio.h>
int main()
{
    float kinetikE,potansiyelE;
    int h,m,v,g=10;;
    printf("cismin poteansiyel ve kinetik enerjisini hesaplamak icin gereken bilgilerii girniz lutfen\nkutlesi; ");
    scanf("%d",&m);
    printf("\nhızı; ");
    scanf("%d",&v);
    printf("\nyerden yukseklıgı");
    scanf("%d",&h);
    kinetikE=0.5*m*v*v;
    potansiyelE=m*g*h;
    printf("cismin kinetik enerjisi; %0.0f\nPotaansiyel enerjisi; %0.0f",kinetikE,potansiyelE);
    return 0;



}