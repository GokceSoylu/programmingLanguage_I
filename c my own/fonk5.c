/* klavyeden girilen bir tam sayının fonk olup olmadıgını kontrol eden fonksiyon */
#include <stdio.h>

int asal(int);
int main()
{
    int number;
    printf("sayınızı giriniz lutfen\n");
    scanf("%d",&number);
    printf("\n%d",asal(number));
}
int asal(int x)
{
    int i,flag=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            flag=1;
        
    }
    if(flag==0)
        printf("\nasal sayıdır");
    else
        printf("\nasal degildir");
    return 0;
}