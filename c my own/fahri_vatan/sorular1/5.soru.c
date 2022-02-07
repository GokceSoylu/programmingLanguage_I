/* klavyeden girilen a dizisi elemanlarının ters sıra ve işarette b dizisine aktarır */
#include <stdio.h>
#define eleman_sayısı 10
int main()
{
    int a[eleman_sayısı],b[eleman_sayısı],i;

    printf("a dizisi icin 10 adet eleman giriniz lutfen");
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("\n%d.eleman; ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<eleman_sayısı;i++)
    {
        b[i]=-a[eleman_sayısı-i-1];
    }
    printf("girilen dizinin ters isaretli ve tersten yazılmıs hali;\n");
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("%d, ",b[i]);
    }
    return 0;
}