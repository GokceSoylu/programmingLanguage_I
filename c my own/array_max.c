#include <stdio.h>
#define terim_sayısı 5
int main()
{
    double dizi[terim_sayısı]={12.23,12.24,12.25,12.26,12.27},max=dizi[0];
    for(int i=0;i<terim_sayısı;i++)
    {
        if(max<dizi[i])
            max=dizi[i];   

    }
    printf("%.3lf",max);
    return 0;
}