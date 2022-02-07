/* Is the teprature above the fereezing point or below */
#include <stdio.h>
int main()
{
    int T;
    printf("sıcaklık degerini(c) giriniz lufen");
    scanf("%d",&T);
    if(T>0)
        printf("sıcaklık donma noktasının uzerindedir");
    else if(T<0)
        printf("sıcaklık donma noktasının altındadır");
    else
        printf("sıcaklık donma noktası uzerindedir");
    return 0;
}