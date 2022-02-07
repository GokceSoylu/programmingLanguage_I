/* kombinasyon hesaplayan fonksiyon */
#include <stdio.h>
int faktoriyel(int);
float kombinasyon (int, int);
int main()
{
    int number_1,number_2;
    printf("kombinasyonunu hesaplamak istediginiz sayıları giriniz lutfen");
    scanf("%d%d",&number_1,&number_2);
    printf("\n%.0f",kombinasyon(number_1, number_2));

}
int faktoriyel(int x)
{
    int i,product=1;
    for(i=1;i<x+1;i++)
    {
        product*=i;
    }
    return product;
}
float kombinasyon(int n, int r )//gordugun ana fonksiyonun altında oldugunda kendinden sonra olan fonksiyonuda kullnılabilir
{
    float result;
    result=faktoriyel(n)/(faktoriyel(n-r)*faktoriyel(r));
    return result;
}