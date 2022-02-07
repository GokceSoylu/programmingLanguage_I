#include <stdio.h>
int main()
{
    int note;
    printf("lutfen notunuzu giriniz");
    scanf("%d",&note);
    switch(note)
    {
        case 1: printf("malesef, kaldınız");
                break;
        case 2: printf("zayıf");
                break;
        case 3: printf("orta");
                break;
        case 4: printf("iyi");
                break;
        case 5: printf("pek iyi");
                break;
        default: printf("yanlıs giriis yapıldı");
    }
    return 0;



}