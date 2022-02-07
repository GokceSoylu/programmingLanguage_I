/* count and print all numbers from low to high by steps of step -> low= 0 high=100 step=5 */
#include <stdio.h>
int main()
{
    int low=0;
    
    for(;low<=100;low=low+5)
    {
        printf("\n%d",low);
    }
    return 0;

}