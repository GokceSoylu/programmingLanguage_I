#include <stdio.h>
int main()
{
    int age;
    printf("are you young? what do you think? say me your age");
    scanf("%d",&age);
    if  (age<40 && age>18)
        printf ("you are young!");
    else
        if (age<18)
            printf("you are still a child");
        else
            printf("you are not young maybe a bit older");
    return 0;
    }