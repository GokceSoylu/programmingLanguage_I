/* klavyeden girilen kelimenin harflerini yanındakşyle degistirme ikinci y0l */
#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;
    char kelime[15];
    printf("bir cumle giriniz lutfen");
    gets(kelime);
    if(strlen(kelime)%2!=0)
        kelime[strlen(kelime)]=' '; 
    printf("\ncumlenizin sifreli hali; ");
    for(i=0;i<strlen(kelime);i++)
    {
        if(i%2==0)
            printf("%c",kelime[i+1]);
        else
            printf("%c",kelime[i-1]);
    }
    return 0;
}