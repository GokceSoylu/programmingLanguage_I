/* 1 den klavyeden girilen sayıya kadarki sayıların toplamınınhesaplayar */
#include <stdio.h>

int toplam (int);
int main()
{
    int number;
    printf("bir sayı giriniz lutfen\n");
    scanf("%d",&number);
    printf("birden girdiginiz sayıya kadarki sayıların toplamı; %d",toplam(number));

}
int toplam(int x)
{
    if(x==0)
        return 0;
    return x+toplam(x-1);
}//bak bak bak hareketlere bak bide recursive fonk kullanıyo