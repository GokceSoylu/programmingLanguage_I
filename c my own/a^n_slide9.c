#include <stdio.h>
int main()
{
    int number,power,result=1;
    printf("sayıyı giriniz lutfen");
    scanf("%d",&number);
    printf("sayının kacıncı kuvvetini hesaplamak istersiniz");
    scanf("%d",&power);
    while(power>0)
    {
        result=result*number;
        power--;
    }
    printf("sonuc; %d",result);
    return 0;
//Good



}