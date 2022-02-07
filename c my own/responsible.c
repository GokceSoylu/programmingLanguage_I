#include <stdio.h>
int main()
    {
        int age;
        printf("How old are you?");
        scanf("%d", &age);
        if (age>20)
            printf("you are reponsible");
        else
            printf("keep calm, those are not your crime");
        return 0;
    }
