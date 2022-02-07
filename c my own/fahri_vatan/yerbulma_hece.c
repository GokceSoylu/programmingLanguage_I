/* klavyeden girilen metinde istenen hecenin sayısını ve yerini bulma */
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,counter=0,kelime=1;
    char metin[100],hece[10],a[100];
    printf("metni giriniz lutfen\n");
    gets(metin);
    printf("heceyi giriniz lutfen");
    gets(hece);
    for(i=0;i<strlen(metin);i++)
    {
        if(metin[i]==' ')
            kelime++;
        for(j=0;j<strlen(hece);j++)
        {
            a[j]=metin[i+j];
        }
        if(strncmp(a,hece,strlen(hece))==0)
        {
            counter++;
            printf(" %d. kelime,",kelime);
        }    
    }
    printf(" olmak uzere toplamda %d adet bulunmaktadır",counter);
    return 0;
}