#include <stdio.h>
int main()
{
    int d=10;
    int a,b,c,sum;
    printf("uc adet sayı giriniz");
    printf("\nilk sayınız");
    scanf("%d",&a);
    printf("\nikinci sayınız");
    scanf("%d",&b);
    printf("\nson sayınız");
    scanf("%d",&c);
    sum=a+b+c;
    printf("%d+%d+%d=%d",a,b,c,sum);
    return 0;
}