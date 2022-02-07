/* ozyineli fonksiyon ike fibonacci dizisi yazdirir */
#include <stdio.h>//evet evet recursive ile fibonacci baya guzel ama hafizayı kotu kullanır biginize

int fibonacci(int);
int main()
{
    int terim_sayısı,i;
    printf("fibonacci dizisinin kac terimini ogrenmek istersiniz?\n");
    scanf("%d",&terim_sayısı);
    for(i=1;i<terim_sayısı+1;i++)
    {
        printf("%d ",fibonacci(i));
    }
}
int fibonacci(int x)
{
    if(x==1 || x==2)
        return 1;
    return fibonacci(x-1)+fibonacci(x-2);
}