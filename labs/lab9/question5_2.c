#include <stdio.h>
int main()
{
    int i,x,y,power,function,result=0;
    printf("lutfen iki adet sayı giriniz");
    scanf("%d",&x);
    scanf("%d",&y);
    for(i=0;i<=y;i++)
    {
        power=1;
        function=1;
        for(int j=1;j<=i;j++)
        {
            power*=x;
        }
        for(int k=1;k<=i;k++)
        {
            function*=k;
        }
        result+=power/function;
    
    }
    printf("denklemin sonucu; %d",result);
    return 0;
    //yup! it works ;)
}