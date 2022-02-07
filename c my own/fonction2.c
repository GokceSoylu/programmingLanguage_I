/* fonksiyonlarla doert islem */
#include <stdio.h>

int toplama(int,int);
int cikarma(int, int);
int bolme(int,int);
int carpma(int,int);

int main()
{
    char operator;
    int number_1,number_2,i;
    printf("operator; ");
    scanf("%c",&operator);   
    printf("ilk sayınız; ");
    scanf("%d",&number_1);
    printf("ikinci saysınız; ");
    scanf("%d",&number_2);
    switch(operator)
    {
        case '+':
            printf("%d",toplama(number_1,number_2));
            break;
        case '-':
            printf("%d",cikarma(number_1,number_2));
            break;
        case 'x':
            printf("%d",carpma(number_1,number_2));
            break;
        case '/':
            printf("%d",bolme(number_1,number_2));
            break;
        default:
            printf("operator girisi hatalı");   
            break;
    }
}
int toplama(int x,int y)
{
    return x+y;
}
int cikarma(int x, int y)
{
    return x-y;
}
int carpma(int x, int y)
{
    return x*y;
}
int bolme(int x, int y)
{
    return x/y;
}
