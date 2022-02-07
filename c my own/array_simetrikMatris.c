#include <stdio.h>
int main()
{
    int satır,sutun,flag=0;
    int matris[satır][sutun];
    
    printf("bu program girdiginz matrisin simetrik olup olmadıgını kontrol eder\nmatrisin satır degerini giriniz llutfen");
    scanf(" %d",&satır);
    printf("suutun degerini; ");
    scanf(" %d",&sutun);
    printf("matrisin degerlerini girniz lutfen\n");
    for(int i=0;i<satır;i++)
    {
        for(int j=0;j<sutun;j++)
        {
            scanf(" %d",&matris[i][j]);

        }
        printf("\n");
    }
    for (int m=0;m<satır;m++)
    {
        for (int n=0;n<sutun;n++)
        {
            if (matris[m][n]!=matris[n][m])
                flag=1;
                break;
        }
    }
    if(flag==0)
        printf("\ngirdiginiz matris simetriiktir");
    else
        printf("\ngirilen matris simetrşk degildir");    
    return 0;
    //yaa bu bu gerçekten çok güzel oldu

}