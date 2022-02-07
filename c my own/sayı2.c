#include <stdio.h>
int main()
{
    int sayı;
    printf("sayınız");
    scanf("%d",&sayı);
    if (sayı<5 && sayı>2)
        printf("evet");
    else
        printf("hayır");
    return 0;
}