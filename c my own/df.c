#include <stdio.h>
int main()
{
    int a;
    float pi=3.14;
    printf("%d",(int)pi);
// float bir sayıyı %d ile basına (int) yazarak bastırdık
    a=5*pi;
    printf("\n%d",a);
// bastaki int oldugu için devamı int almak istedi ve sadece tam kısmıyla işlme yaptı
    pi+=7;
    printf("\n%f",pi);
// unutma soldan sağa okur devamını da aynı bekler float  yazdırdı!


    return 0;
} 