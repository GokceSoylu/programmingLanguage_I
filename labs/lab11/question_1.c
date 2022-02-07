#include <stdio.h>
int main()
{
    int p,n=0;
    while(1)
    {
        p=n*(3*n-1)/2;
        if(p>100)
            break;
        else
            printf(" %d",p);
        n++;
    }
    
    
    return 0;


}



