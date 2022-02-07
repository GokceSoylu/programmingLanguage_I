#include <stdio.h>
int main()
{
    float result=0;
    int a,b,factorial=1,power=1;
    printf("lutfen iki adet sayı girinmiz");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
       for(int j=1;j<=i;j++)
       {
           factorial*=j;

       }
        for(int k=0;k<=i;k++)
        {
            power*=a;
        }
    
        result+=(float)power/factorial;
    
    }
    printf("%f",result+1);
    return 0;
}