#include <stdio.h>
int main()
{
    int note;
    printf("notunuzu giriniz lutfen\n");
    scanf("%d",&note);
    if (note>=90)
        printf("Gecti notunuz; A\n");
    else if (note>=80)
        printf("gecti notunuz; A-\n");
    else if (note>=75)
        printf("gecti notunuz; B+\n");
    else if (note>=70)
        printf("gecti notunuz; B-\n");
    else if (note>=55)
        printf("gecti notunuz; C\n");
    else 
        printf("malesef kaldı :(\n");
    return 0;

}