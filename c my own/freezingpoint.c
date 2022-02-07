#include <stdio.h>
int main()
{
    int c;
    printf("please, type the temprature (c)");
    scanf("%d",&c);
    if (c==0) 
        printf("it's on the freezing point");  
    else    
        if (c>0)
            printf ("it' above the freezing point");
        else 
            printf("it's below the freezing point");
    return 0;
 }   