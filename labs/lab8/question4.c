#include <stdio.h>
int main()
{
    int c;
    printf("sıcaklık degerini cgiriniz(c)");
    scanf("%d",&c);
    if(c==0)
        printf("donma noktasında");
    else if (c<0)
        printf("sıcaklık donma noktasının altında");
    else
        printf("sıcaklık donma noktasını üstünde");
    return 0;
}