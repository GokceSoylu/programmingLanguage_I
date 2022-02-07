/* klavyeden girilen barkod kodunun dogru olup olamadıgını kontrol eder */
#include <stdio.h>

int main()
{
    int number,tek=0,cift=0,control,sonuc,rakam;
    printf("barkod numarsını sondan basa dogru giriniz lutfen");
    scanf("\n%d",&control);
    for(int i=0;i<12;i++)
    {
        scanf("\n%d",&number);
        if(i%2==0)
        {
            
            tek+=number;
        }
        else
        {
            
            cift+=number;
        }
    }
    sonuc=3*tek+cift;
    rakam=10-sonuc%10;
    if(control==rakam)
        printf("\nbarkod numarası dogrudur");
    else
        printf("\nbarkod numarası dogru degildir :(");
    return 0;
}