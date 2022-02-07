#include <stdio.h>
int main()
{
    int a;
    int max;
    printf("sayı giriniz");
    scanf("%d",&a);
    max=a;
    int i=1;
    while (i<10)
    {
        
        printf("sayı giriniz");
        scanf("%d",&a);
        if (a>max)
            max=a;
        
        i++;    
    }
   printf("%d",max); 
    return 0;
//gözlerim kamaşıyo...
}