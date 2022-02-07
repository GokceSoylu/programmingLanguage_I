#include <stdio.h>
int main()
{
    
    int a,b,c;
    printf("birinci sayıyı giriniz");
    scanf("%d",&a);
   
    printf("ikinci sayıyı giriniz");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("birinci sayı;%d",a);
    printf("ikinci sayı;%d",b);
    return 0;


}