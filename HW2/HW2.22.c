/* numbers between 100_200 which are divisible by 9 */
#include <stdio.h>
int main()
{
    for(int i=100;i<=200;i++)
    {
        if(i%9==0)
            printf("\n%d",i);
    }
    return 0;
}