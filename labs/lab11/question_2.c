#include <stdio.h>
int main()
{
    int matrix[3][3],matrix_2[3][3],matrix_sum[3][3];
    printf("ilk matrixin degerlerini giriniz lutfen");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);

        }
    }
    for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            scanf("%d",&matrix_2[k][l]);
        }
    }
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            matrix_sum[a][b]=matrix[a][b]+matrix_2[a][b];
            printf("%4d",matrix_sum[a][b]);
        }
    }
    return 0;

}