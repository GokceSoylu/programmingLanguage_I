/* ozyineli fonksiyon ile faktoriyel hesaplama*/
#include <stdio.h>//fonk return dedigin anda calısmayı birakir ve cagirildigi yere gider

int faktoriyel (int);
int main()
{
    int number;
    printf("hangi sayının faktoriyelini ogrenmek istersiniz?\n");
    scanf("%d",&number);
    printf("\n%d",faktoriyel(number));

}
int faktoriyel(int x)
{
    if(x==0)
        return 1;
    return x*faktoriyel(x-1);
}