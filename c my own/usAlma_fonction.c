/* ust alma fonksiyonu */
#include <stdio.h>

int ust_alma (int, int);
int main()
{
    int ust,sayı;
    printf("sayıyı girininiz lutfen\n");
    scanf("%d",&sayı);
    printf("sayının kacıncı kuvvetini ogrenmek istersiniz\n");
    scanf("%d",&ust);
    printf("sonuc; %d",ust_alma(sayı,ust));

}
int ust_alma(int x, int y)
{
    int product=1,i;
    for(i=0;i<y;i++)
    {
        product*=x;
    }
    return product;
}
