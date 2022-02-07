/* find first and last digit of a number */
#include <stdio.h>
int main()
{
    int number,firstDigit,lastDigit;
    printf("bir sayı giriniz");
    scanf("%d",&number);
    
    firstDigit=number%10;
    for(;number>0;)
    {
        lastDigit=number%10;
        number=number/10;
    }

    printf("en kucuk basamak; %d\nen buyuk basak; %d",firstDigit,lastDigit);
    return 0;

}
