#include <stdio.h>
#define sat 2
#define sut 2
int main()
{
    int satır,sutun;
    int dizi [sat][sut]={1,2,3,4};
    printf("sıarsıyla satır ve sutun degerlerini giriniz lutfe");
    scanf("%d%d",&satır,&sutun);
    printf("\n%d",dizi[satır-1][sutun-1]);
    return 0;
    //sadece biraz dikkatli ol n-1 muhabbetini unutmuyoruz!
}
