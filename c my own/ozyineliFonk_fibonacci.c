/* ozyineli fonksiyon ile fibonacci */
#include <stdio.h>

int fibonacci(int);
int main()
{
    int terim_sayısı;
    printf("fibonacci dizisinin kacıncı terimini ogrenmek istersiniz?\n");
    scanf("%d",&terim_sayısı);
    printf("%d ",fibonacci(terim_sayısı));//şimdi boyle yaptıgımızda donduruyo donduruyo kendi durdugunda bize sonucu yazdırıyo
}
int fibonacci(x)
{
    if(x==0 || x==1)
        return 1;
    return fibonacci(x-1)+fibonacci(x-2);
}