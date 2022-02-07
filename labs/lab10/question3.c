/* max bes masamaklı sayını rakamlarını diziye aktar ve yazdır */
#include <stdio.h>
#define terim_sayısı 5
int main()
{
    int number,dizi[terim_sayısı],digit,i=0;
    printf("basamka sayısı en fazla bes olan bır adet sayı giriniz lutfen\n");
    scanf("%d",&number);
    while(number>0)
    {
        digit=number%10;
        dizi[i]=digit;
        number=number/10;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        printf(" %d",dizi[j]);

    }
    return 0;
    //çok şukur
}