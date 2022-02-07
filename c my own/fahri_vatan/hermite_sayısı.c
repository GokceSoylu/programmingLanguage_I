/* hermite sayısı --> Hk=-2*(k-1)Hk-2 */
#include <stdio.h>
int main()
{
    int eleman,k,j,sonuc;
    printf("eleman sayısını girinz lutfen");
    scanf("%d",&eleman);
    int hermite[eleman];
    hermite[0]=1;
    hermite[1]=0;
    for(k=2;k<eleman;k++)
    {
        hermite[k]=-2*(k-1)*hermite[k-2];
    }
    for(j=0;j<eleman;j++)
    {
        printf("\n%d",hermite[j]);
    }
    return 0;
}