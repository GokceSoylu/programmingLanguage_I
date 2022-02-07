/* klavyeden girilen iki basamaklı sayıyı yazıyla yazdırma */
#include <stdio.h>
#define terim_sayısı 10
#define terim_sayısı2 10
int main()
{
    int number,n_birler,n_onlar;
    char *birler[terim_sayısı]={"sıfır","bir","iki","uc","dort","bes","altı","yedi","sekis","dokuz"};
    char *onlar[terim_sayısı2]={" ","on","yirmi","otuz","kırk","elli","atmıs","yetmis","sekse","doksan"};
    printf("ikik bir sayı giriniz lutfen");
    scanf("%d",&number);
    n_birler=number%10;
    n_onlar=number/10;
    if(number<0)
        {
            printf("eksi ");
            printf("%s",onlar[-n_onlar]);
            printf(" %s",birler[-n_birler]);
        }
        
    
    else
    {
        printf("%s",onlar[n_onlar]);
        printf(" %s",birler[n_birler]);
    }
   //off mukummel çok sukur:)
    return 0;

}