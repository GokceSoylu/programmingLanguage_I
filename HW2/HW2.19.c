#include <stdio.h>
int main()
{
    float sum;
    int x,y;
    printf("iki adet sayı giriniz lutfen\nilk sayınız; ");
    scanf("%d",&x);
    printf("\nikinci sayınız;");
    scanf("%d",&y);
    for(int i=1;i<=y;i++)
    {
        int power=1,factorial=1;
        for(int j=1;j<=i;j++)
        {
            power*=x;
        }
        for(int k=1;k<=i;k++)
        {
            factorial*=i;
        }
        sum+=(float)power/factorial;
    
    }
    printf("\nsonuc; %f",sum);
}
