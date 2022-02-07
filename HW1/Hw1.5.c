/* the code wwhic converts Temprature from fahrenheit to celsius */
#include <stdio.h>
int main()
{
    int f;
    float c;
    printf("please type the temprature");
    scanf("%d",&f);
    c=(f-32)*(0.55);
    printf("%f",c);
    return 0;
}