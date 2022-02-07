/* convert the length in feet to cm */
#include <stdio.h>
int main()
{
    float cm;
    int f;
    printf("please type the length");
    scanf("%d",&f);
    cm=f*30.48;
    printf("%f",cm);
    return 0;

}