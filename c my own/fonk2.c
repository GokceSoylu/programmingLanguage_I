/* klavyeden girilen sayılar aarasındsa rasgele sayılar uretir */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sayı();
int main()
{
    int ust_sınır, alt_sınır;
    printf("girdiginiz ıkı sayı arasında rasgele 5 sayı yazılacaktır\nsayılarınızı giriniz lutfen\n");
    scanf("%d",&ust_sınır);
    scanf("%d",&alt_sınır);
    sayı(ust_sınır,alt_sınır);

}
int sayı(int x,int y)
{
    int i,z,number;
    z=x-y;
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
        number=rand()%z+y;
        printf("%d ",number);
    }
    return 0;
}