/* klavyeden bir dizide her bir elemandan kaç tane olduğnu bul */
#include <stdio.h>
int main()
{
    int dizi[10],j,k,i,counter=1;
    
    for(i=0;i<10;i++)
    {
        printf("\n%d.eleman; ",i+1);
        scanf("%d",&dizi[i]);
    }
    for(j=0;j<10;j++)
    {
        for(k=j+1;k<10;k++)
        {
            if(dizi[j]==dizi[k])
                counter++;
        }
        printf("\n%d adet %d.eleman ",counter,dizi[j]);
        counter=1;
    }
    
    return 0;
}