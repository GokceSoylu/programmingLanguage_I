#include <stdio.h>
int main()
{
    int numbers,sum=0,i=0;
    printf("sayıları giriniz lutfen");
    scanf("%d",&numbers);
    for(;numbers!=-1;)
    {
        sum+=numbers;
        i++;
        scanf("%d",&numbers);
    }
    if(i==0)
        printf("sayı girilmedi");
    else
    {   
        printf("girilen sayıların toplamı; %d",sum);
        printf("ortalamsı ise; %d",sum/i);
        printf("\n%d adet sayı girdiniz",i);
    }
    return 0;
//well done :)
}
