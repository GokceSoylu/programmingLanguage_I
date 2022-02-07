/* convert decimal to binary without using an array */
#include <stdio.h>
int main()
{
    int number,basamak=1,digit,binary=0;
    printf("please, enter a decimal number\n");
    scanf("%d",&number);
    while(number!=0)
    {
        digit=number%2;
        binary+=digit*basamak;
        number=number/2;
        basamak=basamak*10;
    }
    printf("binary; %d",binary);
    return 0;
}