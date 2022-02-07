/* highest common factor */
#include <stdio.h>
int main()
{
    int a,b,d;
    printf("ilk sayınız");
    scanf("%d",&a);

    printf("ikinci sayınız");
    scanf("%d",&b);
    d=a%b;
    
    while(d!=0)
    
    {
        
        a=b;
        b=d;
        d=a%b;
    }
    //ilk yazdıgında burda d=a%b;ifaesini a=b... ifadelerinden once yazdın 
    //bu yuzden dogru ifadeyı bulsa da sonradan a=b b=d diyerek degeri degistirdin ;)
    printf("ebob %d ",b);
    return 0;



}