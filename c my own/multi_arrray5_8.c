/* 5 ogrenci 8 test */
#include <stdio.h>
#define ogr_say 5
#define test_say  8
int main()
{
    int a,b;
    int test[ogr_say][test_say];
    for(int i=0;i<ogr_say;i++)
    {
        printf("\n%d.ogrencinin ",i+1);
        for(int k=0;k<test_say;k++)
        {
            printf("%d.test sonucu; ",k+1);
            scanf("%d",&test[i][k]);
        }
    
    }
    printf("ogrenmek istediginiz not icin sırasıyla ogrenci numarası ve test numarası degerlerini giriniz lutfen");
    scanf("%d%d",&a,&b);
    printf("%d",test[a-1][b-1]);
    //yup that's great
    return 0;

}