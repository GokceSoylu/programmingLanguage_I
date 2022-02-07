#include <stdio.h>
int main()
{
    int money,twoHundred,hundred,fifty,twenty,ten;
    printf ("istediginiz para miktarını giriniz lutfen");
    scanf("%d",&money);
    twoHundred=money/200;
    money=money%200;
    hundred=money/100;
    money=money%100;
    fifty=money/50;
    money=money%50;
    twenty=twenty/20;
    money=money%20;
    ten=ten/10;
    printf("%d adet 200₺, %d adet 100₺, %d adet 50₺, %d adet 20₺, %d adet 10₺",twoHundred,hundred,fifty,twenty,ten);
    return 0;





    
}