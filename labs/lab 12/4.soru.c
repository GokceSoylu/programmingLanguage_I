/* kkucukten buyuge dogru sıralı olan bir diziye sırayı bozmayacak sekilde bir eleman ekler */
#include <stdio.h>

void fonksiyon(int dizi[], int size, int number);
int main()
{
    int i, number, dizi[6]={1,3,5,7,9};
    printf("bir sayi giriniz lutfen\n");
    scanf("%d",&number);
    fonksiyon(dizi, 6, number);
    for(i=0;i<6;i++)
        printf("%d ",dizi[i]);
    return 0;
}
void fonksiyon(int dizi[], int size, int number )
{
    int i, temp, index;
    for(i=0;i<6 && dizi[i]<number;i++);
    index=i; 
    for(i=size-2;i>=index;i--) dizi[i+1]=dizi[i];   
    dizi[index]=number;
}