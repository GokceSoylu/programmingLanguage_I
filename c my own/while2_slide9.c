#include <stdio.h>
int main()
{
    int terimSayısı,sum=0;
    printf("terim sayısını giriniz lutfen");
    scanf("%d",&terimSayısı);
    while(terimSayısı>0)
    {
        sum+=terimSayısı;
        terimSayısı--;
    }
    printf("sonuc; %d",sum);
    return 0;
//:)
}