#include <stdio.h>
int main ()
{
    for (int i=5;i>=0;i--)
    {
        for (int j=0;j<5-i;j++)
        {
            printf(" ");
        }
        for (int k=1;k<=i+1;k++)
        {
            printf("*");
        }
        printf("\n");
   
    }
//COME ON CANNOT BE PERFECT:) I proud of you
    return 0;
}