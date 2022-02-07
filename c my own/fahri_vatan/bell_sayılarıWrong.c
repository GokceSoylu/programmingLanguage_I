/* bell sayıalrı*/
#include <stdio.h>
int main()
{
    int eleman,i,m,k,sum=0,factorial=1;
    printf("eleman sayısını giriniz lutfen");
    scanf("%d",&eleman);
    int bell[eleman];
    bell[0]=1;
    bell[1]=1;
    for(k=1;k<eleman;k++)
    {
        for(i=0;i<k;i++)
        {
            for(int j=1;j<=(k-i);j++)
            {
                factorial*=j;
            }
            sum+=factorial;
        }
        bell[k+1]=sum*bell[i];
    }
    for(int n=0;n<eleman;n++)
    {
        printf("\n%d",bell[n]);
    }
    return 0;
}