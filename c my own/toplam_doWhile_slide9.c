#include <stdio.h>
int main()
{
    
    int i=0,sum=0,numbers;
    printf("sayıları giriniz lutfen. Bitirmek istedeiginizde -1 girinz\n");
    scanf("%d",&numbers);
    if(numbers==-1)
        printf("sayı girisi yapılmadı");
    else
    {
        do
        {
            sum+=numbers;
            i++;
            scanf("%d",&numbers);
        }
        while(numbers!=-1);
   
    //nasıl da belli hiç do while yazmadığın
    
    printf("%d adet sayı girdniz\ngirlen sayıların toplamı %d\nortalaması ise %d",i,sum,sum/i);
    }
    return 0;




}