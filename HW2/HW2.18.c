/*
1
01
101*/
#include <stdio.h>
int main()
{
    int kat;
    printf("ucgenin kac katlı olmasını istersiniz?\n");
    scanf("%d",&kat);
    for(int i=1;i<=kat;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((j+i)%2==0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}