#include <stdio.h>
int main()
{
    float tamSayı;
    int sum,a,b,c,d,e;
    printf("bir sayı giriniz");
    scanf("%d",&a);

    printf("arada boşluk bırakarak iki sayı giriniz lutfen");
    scanf("%d %d",&b,&c);

    printf("araya virgul koyarak iki tam sayı giriinz");
    scanf("%d,%d",&d,&e);
    
    printf("bir ondalıklı sayı giriniz");
    scanf("%3f",&tamSayı);
    
    sum=a+b+c+d+e;
    printf("toplam: %d\n",sum);
    printf("girdiğinz ondalıklı sayı %f",tamSayı);
    
    
    return 0;
    // o zmn çiçeğim %d leri koyma şeklimize göre birden fazla tam sayıyı tek scanf fonksiyonunda alabiliriz;)
    //ondalılı sayı alırkende %3F olunca sayıyı abc.000 olarak sınırladı buyuk sayı girinice de 
}