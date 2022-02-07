/* sayiKontrol isimli fonksiyo a dizsindeki sayıların basamaklarının tumununubirbirine esit olup olmadıgını kontrol eder */
#include <stdio.h>

int sayiKontrol (int);
int main()
{
    int a[]={233, 45, 777, 81, 999999, 36, 90, 88, 11, 61},i;
    for(i=0;i<10;i++)
    {
        if(sayiKontrol(a[i])==1)
            printf("\n%d >> tum basamkları esit degil",a[i]);
        else 
            printf("\n%d >> tum basamkları esit",a[i]);
    }

}
int sayiKontrol (int x)
{
    int n,digit,a,flag=1;
    n=x;
    digit=n%10;
    while(n>0)
    {
        
        //int flag=1;
        a=digit;
        digit=n%10;
        n=n/10;
        if(a!=digit)
        {
            flag=0;
            break;
        }    
    }
    if (flag==0)
        return 0;
    else
        return 1;

}