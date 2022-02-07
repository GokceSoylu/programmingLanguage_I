/* klavyedn girilen metinde girilen harfin yerini bulma */
#include <stdio.h>
#include <string.h>
int main()
{
    int i,counter=0;
    char metin[30],harf;
    printf("metni giirniz lutfen");
    gets(metin);
    printf("aramak istedigin harfi girinz lutfen");
    scanf("%c",&harf);
    
    for(i=0;i<strlen(metin);i++)
    {
        if(metin[i]==harf)
        {
            counter++;
            printf(" %d. harf,",i+1);
        }    
    }
    
    if(counter==0)
        printf("metinde belirtilen harf bukunmamaktadır");
    return 0;



    

}