#include <stdio.h>
int main()
{
    float s;
    int no,v,f;
    printf("öğrenci numaranızı giriniz");
    scanf("%d",&no);

    printf("vize notunuzu giriniz");
    scanf("%d",&v);

    printf("final notunuzu giriniz");
    scanf("%d",&f);

    s=v*0.4+f*0.60;
    printf("%d nolu ogrencinin gecme notu %f",no,s);
    //good
    
    return 0;
}