/* kalvyeden girilen sayıyı roma rakamlarıyla yazdırır */
#include <stdio.h>
#include <string.h>//romadan sayıya ceviriken roma rakamlarının degeri zaten belli topluyoduk. bunda nasıl yaopabiliriz tam tersten gitsek
int main()
{
    char roma[10];
    int deger,i,sum=0,gecici;
    printf("roma rakamlarıyla sayınızı giriniz lutfen\n");
    gets(roma);
    for(i=0;i<strlen(roma);i++)
    {
        switch(roma[i])
        {
            case 'I':{deger=1; break;}
            case 'V':{deger=5; break;}
            case 'X':{deger=10; break;}
            case 'L':{deger=50; break;}
            case 'C':{deger=100; break;}
            case 'D':{deger=500; break;}
            case 'M':{deger=1000; break;}
            default :printf("yanlıs giris yapıldı");
        }
        sum+=deger;
        if(deger>gecici)
            sum=sum-2*gecici;
        gecici=deger;
    }
    printf("\n%d",sum);
    return 0;
}