#include <stdio.h>
int faktoriyel(int);
int main ()
{
    
    int n;
    printf("sayı giriniz");
    scanf("%d",&n);
    printf("%d sayısını faktoriyeli %d",n,faktoriyel(faktoriyel(n+1)));

}
// bildiğin fonksiyon işlemlerini kullanabilirsin ;)
int faktoriyel(n)
{
    int sonuc=1;
    for(;n>0;n--)
    {
        sonuc*=n;
    }
    return sonuc;
}
