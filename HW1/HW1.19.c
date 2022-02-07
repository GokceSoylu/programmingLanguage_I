/* print multipication table of any number */
#include <stdio.h>
int main()
{
    int product;
    int n; 
    printf("bir sayı giriniz");
    scanf("%d",&n);
    
    
        for (int i=1;i<=10;i++)
        {
            product=i*n;
            printf("\n%d",product);
        }
    /*şimdi çiçeğim eğer bizden tüm çarpım tablosunu isteseydi iç içe döngü yapardık 
    çünkü çarpılacak sayıyıda değiştirmemiz gerekirdi.
    ancak burada çarpılacak sayıyı değişitirmiyoruz tek döngü yeterli :)
    */
    return 0;


}