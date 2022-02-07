#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m,n,sayı,kernel_matrix[3][3],x,y;
    printf("ilk matrisin boyutlarını giriniz lutfen");
    scanf("%d%d",&m,&n);
    int image_matrix[m][n],output_matrix[m][n];
    srand(time(NULL));
    for(int i=0;i<m*n;i++)
    {
        sayı=rand()% 250+1;
        image_matrix[i]=sayı;
    }
    printf("\nfiltre için 9 adet sayı giriniz lutfen");
    for(int j=0;j<3;j++)
    {
        for(int k=0;k<3;k++)
        {
            scanf("\n%d",&kernel_matrix[j][k]);

        }
    }
    
        for(int a=0;a<m;a++)
        {
            for(int b=0;b<n;b++)
            {
                x=imagine_matrix[a][b];
                y=kernel_matrix[a%3][b%3];
                output_matrix[a][b]=x*y;
            
            }
            
        }
    for(int r=0;r<m;r++)
    {
        
    }
    
    return 0;

}