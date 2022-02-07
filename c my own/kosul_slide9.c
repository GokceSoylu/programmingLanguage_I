#include <stdio.h>
int main()
{
    int number,sonuc,a,b,max;
    printf("mutlak degerini ogrenmak istediginiz sayıyı gırınız lutfen\n");
    scanf("%d",&number);
    printf("iki sayı girinz lutfen\n");
    scanf("%d%d",&a,&b);
    sonuc=(number>=0) ? number : -number;
    max=(a>b) ? a : b;
    printf("sayınızın mutlak degeri; %d",sonuc);
    printf("\nbuyuk olan sayı; %d",max);
    return 0;
}