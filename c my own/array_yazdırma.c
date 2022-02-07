#include <stdio.h>
#define terim_sayısı 5
int main()
{
    double dizi[terim_sayısı]= {1.2,2.3,3.4,4.5,5.6};
    for(int i=0;i<terim_sayısı;i++)
    {
        printf("\n%.2lf",dizi[i]);
    }
    return 0;
    //nasıl ya 1, 2, 3, yazmadiğim halde nassil oyle yazaadirabikilyosun
    //haahhaahha yok artik necmiyecim yazdiğin sayı sıralı olabil mi acaba ;)))
}