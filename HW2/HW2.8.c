/* sum of prime numbers*/
#include <stdio.h>
int main ()
{
    int number,flag,sum=0;
    printf("bir sayı giriniz lutfen");
    scanf("%d",&number);
    for(;number>2;number--)
    {
        flag=0;
        for(int i=2;i<number;i++)
        {
            if (number%i==0)
                flag=1;
        }
        if (flag==0)
            sum+=number;
    }
    if(number!=1)
        printf("\nsonuc; %d",sum+2);
    else
        printf("\n0");
    return 0;
    //son kısımdaki eklemeri 2 nin asal sayı olmasından dolayı ekledim
}