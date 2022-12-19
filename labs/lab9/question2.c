#include <stdio.h>
int main()
{
    int number;
    int factorial=1;
    printf("faktoriyeliini hesaplamak istediginiz sayıyı giriniz lutfen");
    scanf("%d",&number);
    for(;number>0;number--)
    {
        factorial*=number;
    }
    printf("foktoriyel; %d",factorial);
    return 0;

}