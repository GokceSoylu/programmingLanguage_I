/* klavyeden girielen sayının basamaklarının rakam degerlerini sayıs şle yazar or 1975= bir dokuz yedi bes */
#include <stdio.h>
int main()
{
    int number,digit,sum=0;

    printf("sayınızı giriniz lutfen\n");
    scanf("%d",&number);
    while(number>0)//iyiydi güzel düştüm :)
    {
        digit=number%10;
        sum=sum*10+digit;
        number=number/10;
    }
    while(sum>0)
    {
        digit=sum%10;
        switch(digit)
        {
            case 0:{printf("sıfır "); break;}
            case 1:{printf("bir "); break;}
            case 2:{printf("iki "); break;}
            case 3:{printf("uc "); break;}
            case 4:{printf("dort "); break;}
            case 5:{printf("bes "); break;}
            case 6:{printf("altı "); break;}
            case 7:{printf("yedi "); break;}
            case 8:{printf("sekiz "); break;}
            case 9:{printf("dokuz "); break;}
            default : printf("\nyanllıs karakteer girisi yapıldı ");
        }
        sum=sum/10;
    }
    return 0;
}
