/* iki farklı string alma yolu */
#include <stdio.h>
int main()
{
    char string_scanf[100],string_gets[100];
    printf("lutfen metni giriniz");
    gets(string_gets);//new line a kdr girilen tum metni alır
    printf("tekrar girmenizi rica etsek:)");
    scanf("%s",string_scanf);//yazıdan sonraki ilk basluga kadar aldıgı için tek kelime alır
    printf("gets ile; %s",string_gets);
    printf("scanf ile; %s",string_scanf);
    return 0;
}
