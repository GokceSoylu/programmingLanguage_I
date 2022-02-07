#include <stdio.h>
#define sutun 10
#define satır 2
int main()
{
   int sayı1,sayı2;
    double dizi[satır][sutun];
    printf("\ndegerleri giriniz lutfen");
    for(int i=0;i<satır;i++)
    {
        for(int j=0;j<sutun;j++)
        {
            scanf("\n%lf",&dizi[i][j]);

        }
    }
    printf("\ncarpım toblosundan iki deger giriniz lutfen");
    scanf("%d%d",&sayı1,&sayı2);
    printf("\n%dx%d=%lf",sayı1,sayı2,dizi[sayı1-1][sayı2-1]);
    return 0;
    //çiçeğim diziler 0 dan başlar
}