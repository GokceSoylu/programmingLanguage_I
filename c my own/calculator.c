#include <stdio.h>
int main()
{
    int num, num2;
    char process;
    printf("\nprocess ");
    scanf("%c",&process);
    printf("\nnumbers ");
    scanf("%d",&num);
    scanf("%d",&num2);
    
    switch(process)
    {
        case 'x': printf("= %d",num*num2); break;
        case '/': printf("= %d",num/num2); break;
        case '+': printf("= %d",num+num2); break;
        case '-':printf("= %d",num-num2); break;
        default: printf("\nentered wrong caracter ");
    }
    return 0;
}