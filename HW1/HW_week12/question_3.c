#include <stdio.h>
int main()
{
    int n=0,flag=0;
    char dizi_1[10],dizi_2[10];
    printf("ilk metninizi girniz lutfen");
    gets(dizi_1);
    printf("ikinci metni giriniz lutfen");
    gets(dizi_2);
    while(dizi_1[n]!='\0')
    {
        if(dizi_1[n]!=dizi_2[n])
            flag=1;
        n++;
    }
    if(flag==0)
        printf("same");
    else
        printf("n0t same");

    return 0;
}