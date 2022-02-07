/* klavyeden girilen n tabanında bir sayıyı 10 tabanına cevirir (n 2-9 arasında olmalı)*/
#include <stdio.h>
#include <math.h>
int main()//tabanın ustglerini alıop toplama
{
    int i,number,taban,digit,number_10=0;
    printf("sayınızı giriniz lutfen");
    scanf("%d",&number);
    printf("sayınız kac tabanında");
    scanf("%d",&taban);
    for(i=0;number>0;i++)
    {
        digit=number%10;
        number_10+=digit*pow(taban,i);
        number=number/10;
    }
    printf("sayınızın 10 tabanındaki hali; %d",number_10);
    return 0;
}