#include <stdio.h>
int main()
{
    
    int max;
    int a;
    printf("sayı giriniz");
    scanf("%d",&a);
    max=a;

    for(int i=1;i<10;i++)
    {
        printf("sayı giriniz");
        scanf("%d",&a);
        if (a>max)
            max=a;
    }
    printf("%d",max);



}