/* frequencny of each digit in a given integer */
#include <stdio.h>
int main()
{
    int i=0;
    int number,digit;
    printf("sayıyı giriniz lutfen");
    scanf("%d",&number);
    while(number!=0)
    {
        int counter=0;
        digit=number%10;
        number=number/10;
        for(;i<10;i++)
        {
            if(digit==i)
                counter++;
        }
        if (counter!=0)
            printf("%d adet %d rakamı var",counter,digit);
    
    
    }
    return 0;


}