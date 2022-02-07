/* girilen sayının ekokunu bulan fonk */
#include <stdio.h>

int ekok (int, int);
int main()
{
    int number_1,number_2;
    printf("ekoklarının bulmak istediginiz sayıları giriniz lutfen\n");
    scanf("%d",&number_1);
    scanf("%d",&number_2);
    printf("%d",ekok(number_1, number_2));
}
int ekek(int x, int y)
{
    int i=2,ekok=1;
    while(i!=x || i!=y)
    {
        if(x%i==0 || y%i==0)
            ekok*=i;
    i++;
    }
    return ekok;
}