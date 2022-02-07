#include <stdio.h>
int main()
{
//  mesai uceti 10 5₺, 11-20 3₺, >20 2₺ saat başı
    int maas,shift;
    
    printf("maasınız");
    scanf("%d",&maas);

    printf("kac saat mesai yaptınız?");
    scanf("%d",&shift);

    if (shift<10)
        maas+=shift*5;
    else 
    { 
        if (shift<20)
            maas+=45+(shift-9)*3;
        else
            maas+=45+27+(shift-19)*2;
    }
/* burda sadeleştirme yaptik->9*5 yerine 45 yazdık, ortada 10>shift<20 demedik 
*zaten 10 dan buyuk olma durumda bu adıma geti shhift<20 yeterli 
*/
    
    printf("maasınız; %d",maas);
    return 0;
    






}