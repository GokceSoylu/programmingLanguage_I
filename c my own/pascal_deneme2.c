#include <stdio.h>
int main()
{
    int satır,x;
    printf("\nsatır sayısını girebilir misiniz?\n");
    scanf("%d",&satır);
    for(int i=0;i<satır;i++)
    {
        for(int j=1;j<satır-i;j++)
            printf("  ");
        for(int k=0;k<=i;k++)
        {
            if(k==0 || i==0)
                x=1;
            else
                x=x*(i-k+1)/k;
            printf("%4d",x);
        }
        printf("\n");
    }

    return 0;
}