#include <stdio.h>
int main()
{
    int satır,x=1;
    printf("satır sayısını giriniz lutfen\n");
    scanf("%d",&satır);
    for(int i=0;i<satır;i++)
    {
        for(int j=1;j<=satır-i;j++)
            printf("  ");
        for(int k=0;k<=i;k++)
        {
            if(i==0 || k==0)
                x=1;
            else
                x=x*(i-k+1)/k;
            printf("%4d",x);
        }
        printf("\n");
    }
    return 0;

}