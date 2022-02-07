/* s= 1/2+1/3+. . . + 1/n */
#include <stdio.h>
int main()
{
    float sum;
    int n;
    printf("bir sayı giriniz");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
    {
        sum+=(float)1/i;
    }
    printf("sonuc %f",sum);
    return 0;




}