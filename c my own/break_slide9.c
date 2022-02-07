#include <stdio.h>
int main()
{
    int numbers,sum=0,i=0;
    printf("Bu program verdiginiz pozitif sayıları toplayıp ortalamsını alır");
    printf("sayıları giriniz lutfen. Bitirmek icin -1 giriniz\n");
    while(1)
    {
        scanf("%d",&numbers);
        if(numbers==-1)
            break;
        sum+=numbers;
        i++;
        
    }
    printf("\nsayıların topalmı; %d\nortlaması ise; %d",sum,sum/i);
    //sonsuz donguden break komutu ile çıktık
}