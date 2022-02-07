#include <stdio.h>
int main()
{
    int terimSayısı,sum=0;
    printf("Bu program 1'den girilen terim sayısnıa kadar olan saıların toplamını vserir\n");
    printf("terim sayısını grirniz\n");
    scanf("%d",&terimSayısı);
    for(;terimSayısı>0;terimSayısı--)
    {
        sum+=terimSayısı;
        
    }
    printf("sonuc; %d",sum);
    return 0;


}