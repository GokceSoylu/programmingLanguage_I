/*change first and last digit */
#include <stdio.h>
int main()
    {
        int n=0;
        char metin[100],gecici[1];
        printf("metni giriniz lutfen");
        gets(metin);
        while(metin[n]!='\0')
        {
            n++;
        }
        gecici[0]=metin[0];
        metin[0]=metin[n-1];
        metin[n-1]=gecici[0];
        printf("%s",metin);
        return 0;
    }
