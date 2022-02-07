/* asal sayı */
#include <stdio.h>
int main ()
{
    int number,flag;
    printf("bir sayı giriniz lutfen");
    scanf("%d",&number);
    for(;number>2;number--)
    {
        flag=0;
        for(int i=2;i<number;i++)
        {
            if (number%i==0)
            {
                flag=1;
                break;
            }    
        }
        if  (flag==0)
            printf("\n%d",number);
    
    }
    if(number!=1)
        printf("\n2");
    else
        printf("asal sayı yok");
    return 0;
}