/* klavyeden girilen metindeki sesli harflerin sayısını ve yerini bulmak */
#include <stdio.h>
#include <string.h>
int main()
{
    int i,counter=0;
    char metin[20];
    char sesli_harfler[8]={"aeıioöuü"};
    printf("metni giriniz lutfen");
    gets(metin);
    for(i=0;i<strlen(metin);i++)
    {
        for(int j=0;j<strlen(sesli_harfler);j++)
        {
            if(metin[i]==sesli_harfler[j])
            {
                counter++;
                printf("%d. harf, ",i+1);
            }
        }
    }
    printf("olmak uzere toplamda %d adet sesli harf bukunmaktadır",counter);
    return 0;


}