#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define terim_sayısı 10
int main()
{
    int number;
    srand(time(NULL));
    printf("\nten numbers randomly in [1-100]");
    for(int i=0;i<terim_sayısı;i++)
    {
        number=rand()% 100+1;
        printf(" %d",number);
    }
    return 0;
    //oww ışıldıyor
}