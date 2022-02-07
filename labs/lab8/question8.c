#include <stdio.h>
int main()
{
    
    int a,b,c;
    printf("lutfen, ilk sayıyı giriiniz");
    scanf("%d",&a);
    printf("lutfen, ikinci sayıyı giriiniz");
    scanf("%d",&b);
    printf("lutfen, son sayıyı giriiniz");
    scanf("%d",&c);
    if (a>b)
        printf("en buyuk sayı ilk sayı (%d)",a);
    else if (b>c)
        printf("en buyuk sayı ikinci sayı (%d)",b);
    else    
        printf("en buyuk sayı son sayı (%d)",c);
    return 0;




}


