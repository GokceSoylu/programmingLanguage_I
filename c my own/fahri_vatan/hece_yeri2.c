#include <stdio.h>
#include <string.h>

int main()
{
    int x,counter=0,kelime=1;;
    char metin[50],hece[10],metin_1[50];
    printf("metni girinz lutfen\n");
    gets(metin);
    printf("heceyi giriniz lutfen");
    scanf("%s",hece);
    for(int i=0;i<strlen(metin);i++)
    {
        if(metin[i]==' ')
            kelime++;
        for(int j=0;j<=strlen(hece);j++)
        {
            metin_1[j]=metin[j+i];
            if(strncmp(hece,metin_1,strlen(hece))==0)
            {
                counter++;
                if(metin[j-1]==' ')
                    printf("%d, kelime, ",kelime);
            }    
                
        }
    
    
    
    }
    printf("\ntoplamda %lu",counter/strlen(hece));
    return 0;

}