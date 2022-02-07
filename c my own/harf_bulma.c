/* girilen metinde yine kullanıcının verdiiği harften kaç tane var */
#include <stdio.h>
int main ()
{
    int i,counter=0;
    char string[50],harf;
    printf("metni giriniz lutfen\n");
    gets(string);
    printf("bir adet har giriniz llutfen\n");
    scanf("%c",&harf);
    for(i=0;string[i]!='\0';i++);//strlen(sting) fonksiyonuda aynı işi yapar
    for(int j=0;j<i;j++)
    {
        if(string[j]==harf)
            counter++;
    }
    printf("\ngirilen metinde %d adet %c harfi bulunmaktadır",counter,harf);
    return 0;

}