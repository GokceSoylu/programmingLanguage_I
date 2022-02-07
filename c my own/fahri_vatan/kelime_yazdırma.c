/* klavyeden girilen -9 ile 9 arasındakı rakamı yaazıyla yazdırma */
#include <stdio.h>
#define terim_sayısı 10
int main()
{
    int n;
    char *dizi[terim_sayısı]={"sıfır","bir","iki","uc","dort","bes","altı","yedi","sekiz","dokuz"};
    //yani dizimiz int turunde değil char as you see ;))
    printf("istedigininz bir rakamı giriniz lutfen\n");
    scanf("%d",&n);
    if(n<0)
        printf("eksi %s",dizi[-n]);
    
    else
        printf("%s",dizi[n]);
    return 0;

}