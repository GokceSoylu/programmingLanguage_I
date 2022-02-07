/* klavyeden girilen girilen a dizisinin elemanlarının karesinin b kare kokunu c dizisine aktarıp b ve c dizisinin scaler çarpımının bulur */
#include <stdio.h>
#include <math.h>
#define eleman_sayısı 10
int main()
{
    int a[eleman_sayısı],b[eleman_sayısı],c[eleman_sayısı],i;
    printf("a dizisi için 10 adet eleman giriniz lutfen");
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("\n%d. eleman; ",i+1); 
        scanf("%d",&a[i]);
    }
    for(i=0;i<eleman_sayısı;i++)
    {
        b[i]=pow(a[i],2);
        c[i]=sqrt(a[i]);
    }
    printf("a dizisi elemanlarının karekoklerinin ve karelerinin skler çcarpımı;\n ");
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("%d, ",b[i]*c[i]);
    }
    return 0;
}