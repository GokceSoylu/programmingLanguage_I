/* fibonacci serisini istenilen teri sayısı kadar yazdırıan fonksiyon */
#include <stdio.h>
int fibonacci (int);
int main()
{
    int terim_sayısı;
    printf("fibonacci dizisi icin terim sayısını giriniz lutfen\n");
    scanf("%d",&terim_sayısı);   
    fibonacci(terim_sayısı);
}
int fibonacci(int x)
{
    int a=1,b=1,c,i;
    printf("%d %d ",a,b);
    for(i=2;i<x;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}