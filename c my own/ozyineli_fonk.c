/* ozyineli fonksiyen ile faktoriyel */
#include <stdio.h>

int faktoriyel(int);
int main()
{
    int number;
    printf("hangi sayının favktoriyellini ogrenmek istersiniz?\n");
    scanf("%d",&number);
    printf("\n%d",faktoriyel(number));


}
int faktoriyel (int x)
{
    if(x==0)
        return 1;
    return x*faktoriyel(x-1);
}