#include <stdio.h>
int main()
{
    int t,a,v;
    int c=1;
    t=0;
    printf("sayı giriniz");
    scanf("%d",&a);
    t=a;
    
    while (a!=-1)
    {
        
        printf("sayı giriniz");
        scanf("%d",&a);
        t+=a;
        c++;
        
    }
    t++;
    c--;
    /* burda -1 i de ssayarak toplamı bir azaltmis counteri da bir arttirmis buggy
    *  biz kolay yoldan enson toplama bir ekleyip counteri bir azaltarak bu işi çözdük:)
    */ 
    v=t/c;
    printf("%d",v);
    return 0;

}