/*  count number of digits in a number */
#include <stdio.h>
int main ()
{
    int i=1;
    int number,digit;
    printf("sayı ver parçalayalım:)");
    scanf("%d",&number);
    
    for(;number>0;)
    {
        digit=number%10;
        printf("\nsondan %d. rakam= %d",i,digit);
        i++;
        number=number/10;
    }
    


    return 0;
}

