/* 1/1+1/2+1/3....1/n */
#include <stdio.h>
int main()
{
    float sum;
    int number,i;
    printf("bir sayı giriniz lutfen");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        sum+=(float)1/i;
    }
    printf("sonuc; %f",sum);
    return 0;
}