/* diziyi matrise cevirme beninm anladığım tek boyutulu diziyi iki boyuta donusturuyoz*/
#include <stdio.h>
int main()
{
    
    int terim_sayısı;
    printf("diziniz kac elamanlı olacak? ");
    scanf("%d",&terim_sayısı);
    printf("terimleri girniz lutfen");
    int dizi[terim_sayısı];
    for(int i=0;i<terim_sayısı;i++)
    {
        scanf(" %d",&dizi[i]);

    }
    int satır,sutun;
    printf("matrisin sutun ve satır degerlerini giriniz lutfen\nsatır; ");
    scanf("%d",&satır);
    printf("\nsutun; ");
    scanf("%d",&sutun);
    
    int matris [satır][sutun],counter=0;
    if(terim_sayısı%sutun==0 && terim_sayısı%satır==0)
    {
        
        for(int j=0;j<satır;j++)
        {
            for(int k=0;k<sutun;k++)
            {
                matris[j][k]=dizi[counter];
                counter++;
                printf("%4d",matris[j][k]);
        
            }
            printf("\n");
        }
    }
   
    else
        printf("terim sayı sutun ve satır sayısına bolunmelidir");

    return 0;
    //harika mı oldu ne ;))




}




//dizideki elaman sayısı tabi ki satır ve sutun sayısına bolunmeli çünkü 
//zaten satır ve sutun sayısını çarpıp buluruz elaman sayısısnı ;))