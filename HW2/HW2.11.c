/*mukemmel sayı=kendis haric pozitif bolenleri tolamına esit olan sayı*/
#include <stdio.h>
int main ()
{
    int number,n,sum=0;
    printf("if you wonnder whether a number is perfect or not, just type it :)\nnumber please; ");
    scanf("%d",&number);
    n=number;
    for(int i=1;i<number;i++)
    {
        if(number%i==0)
            sum+=i;

    }
    if(sum==n)
        printf("it's perfect");
    else
        printf("it's not");
    return 0;
}