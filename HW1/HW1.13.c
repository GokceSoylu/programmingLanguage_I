/* print the multiplication table for 6's */
#include <stdio.h>
int main()
{
    
    int product;
    for (int i=1;i<=10;i++)
    {
        product=i*6;
        printf("\n%d",product);
    }

    return 0;

}