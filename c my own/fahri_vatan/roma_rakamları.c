/* roma rakamlarını normal sayıya çeviriri */
#include <stdio.h>
#include <string.h>
int main()//roma rakamlarının herbirnin zaten kendi degeri var bu degerleri toplarız sadece sayı kendinden oncekinden buyukse IV=4 durumu olur
{
    int i,sayı=0,deger,deger_gecici;
    char sayı_roma[10];
    printf("sayınızı giriniz lutfen");
    gets(sayı_roma);
    for(i=0;i<strlen(sayı_roma);i++)
    {
        switch (sayı_roma[i])
        {
            case 'I':
            {
                deger=1;
                break;
            }
            case 'V': 
            {
                deger=5;
                break;
            }
            case 'X': 
            {
                deger=10;
                break;
            }
            case 'L': 
            {
                deger=50;
                break;
            }
            case 'C': 
            {
                deger=100;
                break;
            }
            case 'd': 
            {
                deger=500;
                break;
            }
            case 'M': 
            {
                deger=1000;
                break;
            }
        }
        sayı+=deger;
        if(deger_gecici<deger)
            sayı=sayı-(2*deger_gecici);
        deger_gecici=deger;    
    }
    printf("\nsayınız; %d",sayı);
    return 0;


}