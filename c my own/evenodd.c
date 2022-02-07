#include <stdio.h>
int main()
{
    int n;
    printf("please, type the number");
    scanf("%d",&n);
    if (n==0)
        printf("it's even");
    else
        if (n%2==0)
            printf("it's even");
        else    
            printf("it's odd");
    return 0;

}