#include <stdio.h>
#include <math.h>
int main()
{
    float h,b,c;
    int p,k,a;
    printf("yuksekligin boldugu kenarın uzunları girniz lutfen.");
    printf("\ndık kenarın sol tarafı;");
    scanf("%d",&p);
    printf("dik kenarın sag tarafı;");
    scanf("%d",&k);
    a=k+p;
    h=sqrt(p*k);
    b=sqrt(a*k);
    c=sqrt(a*p);
    printf("sag kenarın uzunlugu; %f\nsol kenarın uzunlugu; %f\nyukseklıgın uzunlugu ise %f",b,c,h);
}