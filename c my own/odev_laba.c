#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    int n,one=0,two=0,three=0,four=0,five=0,six=0;
    srand(time(NULL));
    for(int c=0;c<100;c++)
    {
        n=rand() % 6+1;
        if(n==1)
            one++;
        else if(n==2)
            two++;
        else if(n==3)
            three++;
        else if (n==4)
            four++;
        else if(n==5)
            five++;
        else
            six++;
    }
    printf("zar \n%d kez 6\n%d kez 5\n%d kez 4\n%d kez 3\n%d kez 2\n%dkez 1 geldi",six,five,four,three,two,one);
    return 0;



}