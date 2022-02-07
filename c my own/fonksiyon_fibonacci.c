#include <stdio.h>
int fibonacci(int);
int main()
{
    intx;
    scanf("%d",&x);
    printf("%d",fibonacci(x));

}
int fibonacci(int n)
{
    if(n==0|| n==1)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}