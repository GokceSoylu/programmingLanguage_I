/* faktoriyel hesaplayan fonksiyon */
#include <stdio.h>
#define eleman_sayısı 5
int factorial(int);
int main()
{
    int dizi[eleman_sayısı],i;
    printf("factoriyelini hesaplamak istediginiz bes sayıyı giriniz lutfen\n");
    for(i=0;i<eleman_sayısı;i++)
    {
        scanf("\n%d",&dizi[i]);
    }
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("%d ",factorial(dizi[i]));
    }

}
int factorial(int n)
{
    int i,product=1;
    for(i=1;i<n+1;i++)
    {
        product*=i;
    }
    return product;
}