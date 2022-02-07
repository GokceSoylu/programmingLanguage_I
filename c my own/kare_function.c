/* kare alan fonksiyon */
#include <stdio.h>
#define eleman_sayısı 3
int kare(int);
int main()
{
    int numbers[eleman_sayısı],i;
    printf("karesinin ogrenmek istediginiz sayıları giriniz lutfen\n");
    for(i=0;i<eleman_sayısı;i++)
    {
        scanf("\n%d",&numbers[i]);
    }
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("\n%d",kare(numbers[i]));
    }
}
int kare(int x)
{
    return x*x;
}