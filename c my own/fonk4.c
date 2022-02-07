/* klavyeden girilen cumledeki sesli harfleri * ile degistirip yazdıran fonk */
#include <stdio.h>
#include <string.h>

char degistirici(char[], int);
int main()
{
    char cumle[200];
    printf("cumlenizi giriniz lutfen\n");
    gets(cumle);
    degistirici(cumle,200);

}
char degistirici(char dizi[],int size)
{
    char sesli_harfler[6]={"euoiau"};
    int i,j;
    for(i=0;i<strlen(dizi);i++)
    {
        for(j=0;j<strlen(sesli_harfler);j++)
        {
            if (dizi[i]==sesli_harfler[j])
                dizi[i]='*';
        }
    }
    for(i=0;i<strlen(dizi);i++)
    {
        printf("%c",dizi[i]);
    }
   
    return 0;
}

