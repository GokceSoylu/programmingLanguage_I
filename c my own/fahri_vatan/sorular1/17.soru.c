/* girilen bir tam sayıyı tersten yazdirir */
#include <stdio.h>
#include <string.h>

int main()
{
    int number,digit,sum=0;
    printf("bir tam sayı giriniz lutfen\n");
    scanf("%d",&number);
    while(number>0)
    {
        digit=number%10;
        sum=sum*10+digit;
        number=number/10;
    }
    printf("\n%d",sum);
    return 0;


}