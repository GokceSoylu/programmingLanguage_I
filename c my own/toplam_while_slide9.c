#include <stdio.h>
int main()
{
    int sum=0,i=0,numbers;
    printf("sayıları giriniz lutfen. Durmasını isteginiz zaman -1 giriniz");
    scanf("%d",&numbers);
    while(numbers!=-1)
    {
        sum+=numbers;
        i++;
        scanf("%d",&numbers);
    }
    if(i==0)
        printf("sayı girmediniz");
    else
    {
        printf("girilen sayıların toplamı; %d",sum);
        printf("\nortalaması ise; %d",sum/i);
        printf("\n%d adet sayı girdinz",i);
    }
    return 0;

}