/* klavyeden girilen kelimedeki sesli ve sesssiz harlerle yeni iki kelime oluşturup yazdırma */
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,counter_sesli=0,counter_sessiz=0;
    char kelime[10],sesli[10],sessiz[10],sesli_harfler[9]={"aeıioöuü"},sessiz_harfler[24]={"rtypğsdfghjklşzcvbnmç"};
    printf("bir kelime giriniz lutfen");
    gets(kelime);
    for(i=0;i<strlen(kelime);i++)
    {
        
        for(k=0;k<strlen(sessiz_harfler);k++)
            {
                if(kelime[i]==sessiz_harfler[k])
                {
                    sessiz[counter_sessiz]=kelime[i];
                    counter_sessiz++;
                    break;
                }
            }

        for(j=0;j<strlen(sesli_harfler);j++)
            {
                if(kelime[i]==sesli_harfler[j])
                {
                    sesli[counter_sesli]=kelime[i];
                    counter_sesli++;
                    break;
                }
            }
            
        
    }
    printf("\nsesli hali; %s",sesli);
    printf("\nsessiz hali; %s",sessiz);
    return 0;






}
