#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float delta,x1,x2;
    printf("bu program ikinci derecen denklemlerin kok degerlerini hesaplamaktadır\ndenkleminizin katsayı degerlerini sırasıyla giriniz lutfen");
    scanf("%d%d%d",&a,&b,&c);
    delta=b*b-4*a*c;
    if(delta<0)
        printf("reel kok yoktur");
    else if(delta==0)
        {
            delta=sqrt(delta);
            a=(a<0)? -a:a;
            x1=(-b-delta)/2*a;
            printf("denklemin koku cift katlı kok; %0.0f",x1);
        }
    else
        {
            delta=sqrt(delta);
            a=(a<0)? -a:a;
            x1=(-b-delta)/2*a;
            x2=(-b+delta)/2*a;
            printf("denklemin iki reell koku var kok degerleri, %0.0f\n%0.0f",x1,x2);
        }
    return 0;


}