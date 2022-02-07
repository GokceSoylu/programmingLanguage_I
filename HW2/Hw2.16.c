/*1-x^2/2!+x^4/4!-...*/
#include <stdio.h>
int main()
{
    int x,y;
    float sum;
    printf("iki adet sayı girniz lutfen.\nilk sayınız; ");
    scanf("%d",&x);
    printf("\nikinci sayınız; ");
    scanf("%d",&y);
    for(int i=1;i<=y;i=i+2)
    {
        int power=1,factorial=1;
        for(int j=1;j<=i;j++)
        {
            power*=x;
        }
        for(int k=1;k<=i;k++)
        {
            factorial*=k;
        }
        sum+=(float)power/factorial;
    }
    printf("\nsonuc; %f",1-sum);
    return 0;

}