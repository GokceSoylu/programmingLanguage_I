#include <stdio.h>
int main()
{
    int i=1;
    int n,sum;
    while(n!=-1)
    {
        printf("sayı giriniz");
        scanf("%d",&n);
       if(n==-1)
             break;
        //zaten -1 olduğunda döngüden çıkıcak neden break kullandın?-->-1 i toplama dahil etmemesi için
        sum+=n;
        i++;

        
    
    }
    printf("%d",sum/i);
    return 0;



}


