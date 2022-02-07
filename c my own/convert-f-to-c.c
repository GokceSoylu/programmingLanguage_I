#include <stdio.h>
int main()
{
    float c;
    int f;
    printf("please, type the teprature (f)");
    scanf("%d",&f);
    c=(f-32)*(5/9);
    printf("the teprature is %d",c);
    return 0;
}