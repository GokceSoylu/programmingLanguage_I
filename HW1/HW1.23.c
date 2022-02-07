/* polindrome */
#include <stdio.h>
int main()
{
    int number,digit;
    int sum=0;
    int n;
    printf("please, type the number is wondered whether palindrome or not");
    scanf("%d",&number);
    n=number;
    for(;number>0;)
    {
        digit=number%10;
        number=number/10;
        sum=sum * 10 + digit;
        

    }
    if(n==sum)
        printf("palindrom sayıdır");
    else
        printf("palindrom sayı degildir");
    return 0;

}