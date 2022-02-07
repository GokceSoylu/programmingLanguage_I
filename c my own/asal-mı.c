//evet yazdiğima eminim ama tekrar maksat flag ı hatırlamak:))
#include <stdio.h>
int main()
{
    int sum=0;
    for (int number=1;number<=100;number++)
    {
        int flag=0;
        for(int i=2;i<number;i++)
        {
            if (number%i==0)
            {   flag=1;
                break;
            }
                
        }
    if (flag==0)
    {   printf("\n%d",number);
        sum += number;
    }
    
    }
    printf("toplam %d",sum);
    return 0;


}
