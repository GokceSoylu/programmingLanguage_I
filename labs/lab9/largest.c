#include <stdio.h>
int main()
{
    int a,b,c;
    printf("lutfen uc adet sayı giriniz\nilk sayınız; ");
    scanf("%d",&a);
    printf("\nikinci sayınız; ");
    scanf("%d",&b);
    printf("\nucuncu satınız; ");
    scanf("%d",&c);
    if (a>b)
    {
        if(a>c)
            printf("en buyuk sayı;%d",a);
        else    
            printf("en buyuk sayı; %d",c);
    }
    else if (b>c)
        printf("en buyuk sayı; %d",b);
    else    
        printf("en buyuk sayı; %d",c);
    return 0;



}