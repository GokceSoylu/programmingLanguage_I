/* bilgisayar 1-49 arası ratgele 6 sayı tutar kullanıcının bu altı rakamdan kaç tanesini doğru bildigini sorgular */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int number, tahmin[6], counter=0;
    printf("altı adet sayı giriniz lutfen");
    for(int i=0;i<6;i++)
    {
        scanf("\n%d",&tahmin[i]);
    }
    srand(time(NULL));
    for(int j=0;j<6;j++)
    {
        number=rand()%49+1;
        for(int k=0;k<6;k++)
        {
            if(tahmin[k]==number)
                counter++;
        }

    
    }
    printf("\ntahminlerinizden %d tanesi duğrudur",counter);
    return 0;
}