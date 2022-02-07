/*the program swapping first and last digit */
#include <stdio.h>
#include <math.h>
int main()
{
    int number,i=0,digit,basamak,gecici_eleman;
    printf("bir sayı giriniz lutfen\n");
    scanf("%d",&number);
    while(1)
    {
        if(pow(10,i)>number)
            break;
        else 
            i++;
    }
    basamak=i;
    int dizi[basamak],j=0;
    while (number>0)
    {
        digit=number%10;
        dizi[j]=digit;
        number=number/10;
        j++;
    }
    gecici_eleman=dizi[0];
    dizi[0]=dizi[basamak-1];
    dizi[basamak-1]=gecici_eleman;
    for (int k=basamak;k>0;k--)
    {
        printf("%d",dizi[k-1]);
    }
    return 0;

}