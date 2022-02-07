#include <stdio.h>
int main()
{
    //tramam ters cevirmede işe yaramadi ama binary mantiğini anladim ;)
    int number,basamak=1,sum=0,digit;
    printf("sayı giriniz lutfen");
    scanf("%d",&number);
    while(number!=0)
    {
        digit=number%10;
        sum+=digit*basamak;
        basamak*=10;
        number=number/10;
    }  
    printf("%d",sum);
    return 0;

}