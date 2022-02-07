#include <stdio.h>
#include <string.h>
int main()
{
    char metin[20],gecici;//artık daha dikkatli olabilir misin!! dizi tanimlarken [] onemli!!!
    int i;
    printf("metni giriniz lutfen");
    gets(metin);
    for(i=strlen(metin)-1;i>=0;i--)
    {
        printf("%c",metin[i]); //neden %c? cunku burada tum stringi degil tek bir karakter yazdiriyosun ;)   
    }
    
    return 0;

}