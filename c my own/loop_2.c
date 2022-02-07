#include <stdio.h>
int main()
{
    int n,i=1,t=0;
    printf("bir adet tek sayı giriniz lutfen");
    scanf("%d",&n);
    while(i<=n)
    {
        t+=i;
        i=i+2;
    }
    printf("\nsonuç%d",t);
    return 0;
}
