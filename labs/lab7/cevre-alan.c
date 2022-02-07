#include <stdio.h>
int main()
{
    
    int r,p,s;
    
    //FISH!!!
    printf("yarıçap değerini giriniz");
    scanf("%d",&r);
    printf("istediginiz islem turunu giriniz");
    scanf("%d",&p);
    //FISH!!!
    if (p==1)
        s=2*3*r;
    else
    {
        if (p==2)
            s=3*r*r;
        else
            printf("yanlıs giris yaptınız");
    }
    printf("sonuc;%d",s);
    
    return 0;

}