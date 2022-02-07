#include <stdio.h>
int main()
{
    int note;
    printf("notunuzu giriniz");
    scanf("%d",&note);
    
    if (note<=100 && note>=0)
    {
        if (note>=90)
            printf("AA");
        else
        {   
            if (note>=80)
                printf("BA");
            else 
                if (note>=70)
                    printf("BB");
                else
                    printf("F");
        }
    }
    else
        printf("gecersiz not degeri girdiniz");
    return 0;

}