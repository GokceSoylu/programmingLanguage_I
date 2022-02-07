/* Ekok */
#include <stdio.h>
int main ()
{
    int number1,number2,ekok=1;
    printf("iki adet sayı giriniz lutfen");
    scanf("%d%d",&number1,&number2);
    for(int i=2;i<=number1 || i<=number2;i++)
    {
        if(number1%i==0 || number2%i==0)
            ekok*=i;
    }
    printf("sayıların EKOK degeri; %d",ekok);
    return 0;

}