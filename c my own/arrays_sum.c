#include <stdio.h>
#define terim_sayısı1 3
#define terim_sayısı2 2
#define terim_sayısı3 3
#define terim_sayısı4 2
#define terim_sayısı5 3
#define terim_sayısı6 2


int main ()
{
    int dizi1[terim_sayısı1][terim_sayısı2]={1,2,3,4,5,6};
    int dizi2[terim_sayısı3][terim_sayısı4]={1,2,3,4,5,6};
    int dizi_sum[terim_sayısı5][terim_sayısı6];
    for(int i=0;i<terim_sayısı1;i++)
    {
        for(int j=0;j<terim_sayısı2;j++)
        {
            printf("%2d",dizi1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int k=0;k<terim_sayısı3;k++)
    {
        for(int l=0;l<terim_sayısı4;l++)
        {
            printf("%2d",dizi2[k][l]);
        }
        printf("\n");
    }
    printf("\nsimdi toplamları\n");
    for(int n=0;n<terim_sayısı5;n++)
    {
        for(int m=0;m<terim_sayısı6;m++)
        {
            dizi_sum[n][m]=dizi1[m][n]+dizi2[m][n];           
            printf("%2d",dizi_sum[n][m]);

        }
        printf("\n");
    }

    return 0;
    //çiçeğim tanımlamazsa dizi dizi değerlerini ne yazdırıcak :)) evet evet 0 ;)
    //guxzel guzel ;)



}