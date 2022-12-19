#include <stdio.h>
int main()
{
    int i, j, x, y, power;
    float result=0, factorial;
    printf("lutfen bir adet sayi giriniz");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        power=1;
        factorial=1;
        for(j=1;j<=i;j++)
        {
            power*=x;
        }
        for(j=1;j<=i;j++)
        {
            factorial*=j;
        }
        result+=(float)power/factorial;
    }
    printf("denklemin sonucu = %f",result);
    return 0;
    //yup! it works ;)
}