/* find the largest of three number a,b and c */
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("ilk sayıyı girimiz");
    scanf("%d",&a);
    
    printf("ikinci sayıyı girimiz");
    scanf("%d",&b);
    
    printf("ucuncu sayıyı girimiz");
    scanf("%d",&c);

    if (a>b)
        printf("en buyuk sayı %d",a);
    else if (b>c)
        printf("en buyuk sayı %d",b);
    else
        printf("en buyuk sayı %d",c);
    return 0;







}


