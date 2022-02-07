/* x-x^1+x^2+... */
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("bir sayı giriniz lutfen");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        int power=1;
        for(int k=1;k<=i;k++)
        {
            power*=n;
        }
        sum+=power;
    }
    printf("\nsonuc; %d",n-sum);
    return 0;
}