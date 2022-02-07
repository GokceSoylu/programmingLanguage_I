/* 10 elamanlı diziyi okuyan ve tersten yazdıran program */
#include <stdio.h>
#define terim_sayısı 10
int main()
{
    int dizi[terim_sayısı];
    printf("diznin elamanlarını(10) giirniz lutfen\n");
    for(int i=0;i<terim_sayısı;i++)
    {
        scanf("%d",&dizi[i]);

    }
    for(int j=terim_sayısı-1;j>=0;j--)
    {
        printf(" %d",dizi[j]);

    }
    return 0;
    //çok şukur
}