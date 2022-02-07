#include <stdio.h>
int main()
{
    int number;
    printf("bir sayı giriinz lutfen\n");
    scanf("%d",&number);
    if (number>=0)
        printf("sayınız pozitif");
    else 
        printf("sayınız negatif");
    return 0;

}