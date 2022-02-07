/* iki boyutlu diziyi fonksiyona gonderme */
#include <stdio.h>

int fonksiyon(int m[2][3]);
int main()
{
    int matris_1[2][3]={{1,2,3},{1,2,3}}, matris_2[2][3]={{1,2,3},{1,2,3}}, matris_3[2][3]={{1,2,3},{1,2,3}}; 
    printf("ilk matris\n");
    fonksiyon(matris_1);
    printf("ikinci matris\n");
    fonksiyon(matris_2);
    printf("ucuncu matris\n");
    fonksiyon(matris_3);
}
int fonksiyon(int m[2][3])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",m[i][j]);
        }
        printf("\n");
    }
    return m[i][j];
}