/* girilen stringi alfabetik sıraya sokan fonksiyon */
#include <stdio.h>
#include <string.h>

int alfabetik(char dizi[]);
int main()
{
    char cumle[200];
    int i;
    printf("cumleyi giriniz lutfen\n");
    gets(cumle);
    alfabetik(cumle);


}
int alfabetik (char cumle[])
{
    char gecici;
    int i,j;
    for(i=0;i<strlen(cumle);i++)
    {
        for(j=i;j<strlen(cumle);j++)
        {
            if(cumle[i]>cumle[j])
            {
                gecici=cumle[i];
                cumle[i]=cumle[j];
                cumle[j]=gecici;
            }
        }
        
    }
    printf("\n%s",cumle);
    return 0;
}