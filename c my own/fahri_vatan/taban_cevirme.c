/* klavyeden 10 tabanında girilen bir sayıyı istenilen tabandaki degerine cevirir */
#include <stdio.h>

int main()//istenilen tabanda elde etmek için taban degerine surekli bolup kalanları tersten yazdırmek gerkir
{
    int number,taban,digit,number_taban=0,place=1;
    printf("sayınızı giriniz lutfen");
    scanf("%d",&number);
    printf("sayıyı kac tabanına cevirmemizi istersiniz");
    scanf("%d",&taban);
    while(number>0)
    {
        digit=number%taban;
        number_taban+=place*digit;
        place*=10;
        number=number/taban;
    
    }
    printf("\n%d",number_taban);
    return 0;
}