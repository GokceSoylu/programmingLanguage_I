#include <stdio.h>
int main()
{
    int decimal,digit,basamak=1,binary;
    printf("bir adet sayı giriniz lutfen");
    scanf("%d",&decimal);
    while(decimal!=0)
    {
        digit=decimal%2;
        binary+=digit*basamak;
        decimal=decimal/2;
        basamak*=10;
    }
    printf("sayının binary hali; %d",binary);
    return 0;
}