#include <stdio.h>
int main()
{
    float f,cm;
    printf("uzunluk degerini giriniz lutfen (feet)");
    scanf("%f",&f);
    cm=30.48*f;
    printf("%f",cm);
    return 0;

}