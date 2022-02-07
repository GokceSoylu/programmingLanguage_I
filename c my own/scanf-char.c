#include <stdio.h>
char name1[20], name2[20];
int main()
{
    printf("anne adınızı giriniz lutfen");
    scanf("%s",name1);

    printf("baba adınızı giriniz lutfen");
    scanf("%s",name2);
    printf("annenizin adı; %s \nbabanızın adı; %s\n işte sihir :))",name1,name2);
    return 0;
    //ilginç %s kullandiğimizda & kullanmıyoruz woow!
    // işte yine %5s yaparsan 5 harfle sınırlarsın.
}