#include <stdio.h>
#include <math.h>
int main ()
{
    float hipotenus;
    int kenar1,kenar2;
    printf("dik kenarların uzunlugunu giriniz lutfen\nbirinci kenar");
    scanf("%d",&kenar1);
    printf("\nikinci kenar");
    scanf("%d",&kenar2);
    hipotenus=sqrt(kenar1*kenar1+kenar2*kenar2);
    printf("ucgenın hipotenus degeri; %f",hipotenus);
    return 0;
    //o zaman anladık kök almak için --> X=sqrt();
}