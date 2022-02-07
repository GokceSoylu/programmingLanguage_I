/*polindrome*/
#include <stdio.h>
int main()
{
    int number,n,digit,sum=0;
    printf("bir sayı giriniz lutfen\n");
    scanf("%d",&number);
    n=number;
    while(n>0)
    {
        digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    if(number==sum)
        printf("\nsayınız polindrom sayıdır");
    else    
        printf("\nsayı polindrom degildir");
    return 0;



}