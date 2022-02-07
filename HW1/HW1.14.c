/* computing factorial N */
#include <stdio.h>
int main()
{
    int number;
    int f=1;
    printf("please type a number");
    scanf("%d",&number);
    for(;number>1;number--)
    {
        f*=number;
        
    }
    printf("fatoriyeli %d",f);
    return 0;

}