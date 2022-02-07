#include <stdio.h>
#include <math.h>
int main()

{
    int binary,i=0,digit,sum=0;
    printf("binary sayı giriniz lutfen");
    scanf("%d",&binary);
    while(binary!=0)
    {
        digit=binary%10;
        sum+=digit*pow(2,i);
        binary=binary/10;
        i++;

    }
    printf("\ndecimal hali; %d",sum);
    return 0;




}


