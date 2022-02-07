/* klavyeden girilen sayıların bagdasık olup olmadıgnı bulur. bagdasık sayı birler basamgındaki rakamların toplamı 10 olan ve onlar basamagı esit olan iki basamaklı ıkı dogal sayıdir */
#include <stdio.h>

int main()
{
    int number1,number2,birler,onlar1,onlar2;
    printf("sayılarınızı giriniz lutfen.\nilk sayınız; ");
    scanf("%d",&number1);
    printf("\nikinci sayınız; ");
    scanf("%d",&number2);
    birler=number1%10+number2%10;
    onlar1=number1/10;
    onlar2=number2/10;
    if(birler==10 && onlar1==onlar2)
        printf("sayılar bagdasık sayıdır");
    else
        printf("sayılar bagdasık degildir");
    return 0;

}