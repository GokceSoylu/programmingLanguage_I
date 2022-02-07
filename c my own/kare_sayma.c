/* nxn lik bir tabloda kac tane kare oldugunu sayma */
#include <stdio.h>

int kare(int);
int main()
{
    int n;
    printf("tablonuzun boyutlarını giriniz lutfen\n");
    scanf("%d",&n);
    printf("x\n");
    scanf("%d",&n);
    printf("%d",kare(n));
}
int kare(int x)
{
    if(x==1)
        return 1;
    
    return kare(x-1)*4+1;
}