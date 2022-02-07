/*1+11+111+...*/
#include <stdio.h>
int main()
{
    
    int n,sum=0,sayı=0;
    printf("terim sayısını girniz lutfen\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sayı=sayı*10+1;
        sum+=sayı;
    }
    printf("\nsouc; %d",sum);
    return 0;
}