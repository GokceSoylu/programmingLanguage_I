/* print all numbers  between low and high that are divisible by number */
#include <stdio.h>
int main()
{
    
    int number;
    int low,high;
    printf("please, type the low number");
    scanf("%d",&low);
    
    printf("please, type the high number");  
    scanf("%d",&high);

    printf("please, type the deviser number");
    scanf("%d",&number);
    
    for(;low<=high;low++)
    {
        if(low%number==0)
            printf("\n%d",low);

    }

    
    return 0;


}