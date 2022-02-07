#include <stdio.h>
int main()
{
    int i=1,t=0,n;
    printf("bir tek sayı giriniz lutfen");
    scanf("%u",&n);
    do
    {
        t+=i;
        i+=2;
    } while (i<=n);
    printf("\nsonuc; %d",t);
    return 0;
}