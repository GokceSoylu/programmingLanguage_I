/* saklama sınıfları */
#include <stdio.h>
int fonksiyon_1();
int fonksiyon_2();
int fonksiyon_3();
int x=1;
int main()
{
    int x=5;
    printf("\nmain fonksiyonun icinde %d",x);
    {
        int x=10;
        printf("\nmain fonksiyonun icinde blokta %d",x);
    }
    printf("\nmain fonksiyonun icinde bloktan sonra %d",x);
    fonksiyon_1();
    fonksiyon_2();
    fonksiyon_3();
    printf("\nmain fonksiyonun icinde fonksiyonlardan sonra %d",x);
}
int fonksiyon_1()
{
    int x=3;
    printf("\nfonksiyon 1 de %d",x++);
}
int fonksiyon_2()
{
    int x=20;
    printf("\nikinci fonksiyonun icinde %d",++x);
}
int fonksiyon_3()
{
    int x=8;
    printf("\nucuncu fonksiyonun icinde %d",x--);
}