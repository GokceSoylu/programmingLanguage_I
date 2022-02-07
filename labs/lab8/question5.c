#include <stdio.h>
int main()
{
    float c;
    int f;
    printf("llutfen, sıcaklık degerini giriniz(f)");
    scanf("%d",&f);
    c=(32*f-32)*0.55;
    printf("%f",c);
    return 0;


}