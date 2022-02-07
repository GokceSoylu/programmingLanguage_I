/* print all natural numbers in reverse (from 1 to n) */
#include <stdio.h>
int main()
{
    int i=1;
    int n;
    printf("please, type a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d",i);

    }
    return 0;


}