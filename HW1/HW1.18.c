/* convert a decimal number to binary */
#include <stdio.h>
#include <math.h>
int main()
{
    int number,i=0,dizi[100];
    printf("bir sayı girinz lutfen");
    scanf("%d",&number);
    while (number>0)
    {
        if(number%2==0)
            dizi[i]=0;
        else 
            dizi[i]=1;
        i++;
        number=number/2;
        //printf("%d\n",number);
    }
    for(int j=i;j>0;j--)
        printf(" %2d",dizi[j-1]);
    return 0;
}