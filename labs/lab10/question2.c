/* -1 girilene kadar girilen sayıları diziye aktar ve karesini yazdır */
#include <stdio.h>
#include <math.h> 
#define terim_sayısı 10
int main()
{
    int n,dizi[terim_sayısı],i=0;
    printf("karesini ogrenmek istedigin sayıları giriniz, sayılar bittiginde -1 e basiniz");
    scanf("%d",&n);
    while(n!=-1)
    {
        dizi[i]=n;
        i++;
        scanf("%d",&n);
    }
    for(int j=0;j<i;j++)
    {
        printf("\n%.0lf",pow(dizi[j],2.0));
    }
    return 0;
    //çiçek gibi oldu ;)
}