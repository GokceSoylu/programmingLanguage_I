#include <stdio.h>
int main()
{
    int studentNumber,sıralama,flag;
    printf("ogrenci numaranızı giriniz");
    scanf("%u",&studentNumber);
    sıralama=studentNumber%1000;
    printf("bolume %d. ogrenci olarak giridniz\n",sıralama);
    flag=(sıralama==1)? 1:0;
    if (flag==1)
        printf("woow you are the one");
    return 0;


}
