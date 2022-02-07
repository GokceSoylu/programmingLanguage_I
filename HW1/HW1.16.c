/* even numbers between 1000 and 2000 */
#include <stdio.h>
int main()
{
    int sum=0;
    int i=1;
    for (;i<=2000;i++)
    {
        if (i%2!=0)
        {   
            printf("\n%d",i);
            sum+=i;
        
        }
    }
    printf("toplamları %d",sum);
    return 0;




}