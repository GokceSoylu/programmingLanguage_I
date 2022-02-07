#include <stdio.h>
int main()
{
    char operator;
    int a,b,result,c;
    printf("iki adet sayı giriniz lutfen\n");
    printf("ilk sayınız");
    scanf("%d",&a);
    printf("\nikinci sayınız");
    scanf("%d",&b);
    printf("\nyapılmasını istediginiz islem turunu griniz lutfen");
    scanf("%s",&operator);
    //scanf("%d",&c);
    //operator=getchar();
    //gets(operator);
    switch(operator)
    {
        case 'x': 
                result=a*b;
                break;
        case '+': 
                result=a+b;
                break;
        case '-': 
                result=a-b;
                break;
        case '/': 
                result=a/b;
                break;
        case '%': 
                result=a%b;
                break;
        default: 
                printf("\nyanlıs giris yaptınız, lutfen tekrar deneyiniz");
    }
    printf("%d",result);
    return 0;

}