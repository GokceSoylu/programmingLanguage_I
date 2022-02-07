/* klavyeden girilen metinde kac adet kelime oldugunu bulma */
#include <stdio.h>//evet evet yine space sayıcaz ;)
#include <string.h>
int main()
{
    int counter=0;//bu öalılıyor ama speca sayma dişinda başka yontem var mıdıre burada kalleşlik yapmak mumkun
    char metin[20],a;
    a=' ';
    printf("meetninizi giriniz lutfen");
    gets(metin);
    for(int i=0;i<strlen(metin);i++)
    {
        if(metin[i]==a)
            counter++;
    }
    printf("girilen metinde %d adet kelime bulunmaktadır",counter+1);
    return 0;

}
