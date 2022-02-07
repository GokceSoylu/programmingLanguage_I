#include <stdio.h>
int main()
{
    int boy_kilo[10][2],boy=0,kilo=0;
    printf("ogrencilerin sırasıyla boy ve kilo degerlerini girniz");
    for(int i=0;i<10;i++)
    {
        printf("\n%d. ogrenci; ",i+1);
        for(int j=0;j<2;j++)
        {
            scanf("%d",&boy_kilo[i][j]);
            if(j%2==0)
                kilo+=boy_kilo[i][j];
            else
                boy+=boy_kilo[i][j];
        }
    }
    printf("\nortalama kilo; %d\nortalama boy; %d",kilo/10,boy/10);
    return 0;


}