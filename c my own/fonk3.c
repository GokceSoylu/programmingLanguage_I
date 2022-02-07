/* girilen cumledeki kelimelerin sadece son harfini yazdıran fonksiyon */
#include <stdio.h>
#include <string.h>

char son_harf(char[], int );
int main()
{
    char cumle [200];
    
    printf("cumleyi giriniz lutfen");
    gets(cumle);
    son_harf(cumle,200);

}
char son_harf (char string[], int size)
{
    int i;
   
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]==' ')
            printf(" %c",string[i-1]);
        if (i==strlen(string)-1)
            printf("%c",string[i]);
    }
    return 0;
}