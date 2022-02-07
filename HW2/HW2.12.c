/*all perfect numbers*/
#include <stdio.h>
int main ()
{
    int number,n,i;
    printf("lutfe bir sayı giriniz\n");
    scanf("%d",&number);
    printf("belirtilen aralıktaki mukemmel sayılar; ");
    for (;number>0;number--)
    {
        n=number;
        int sum=0;
        for(int i=1;i<number;i++)
        {
            if(number%i==0)
                sum+=i;
        }
        if(sum==number)
            printf("\n%d ",number);
        
    }
}