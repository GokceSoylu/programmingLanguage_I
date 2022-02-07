#include <stdio.h>
int main()
{
    int n;
    int flag=0;
    printf("sayı girinz");
    scanf("%d",&n);
    if (n==1 || n==0)
        flag=1;
    else
    {
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
            {
            flag=1;
            break;
            }
    }
    }
    if (flag==0)
        printf("asal sayıdır");
    else
        printf("asal sayı deigildir");
    return 0;

}