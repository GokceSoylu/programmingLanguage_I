/* girilen ay adına gore bulunulan yılın kaçıncı ayında oldugumuzu bulur */
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,ay_num=1;
    char ay_string[]={"ocak subat mart nisan mayis haziran temmuz agustos eylul ekim kasim aralik"},ay[10],dizi[10];
    printf("ayın ismini giriniz lutfen\n");
    gets(ay);
    for(i=0;i<strlen(ay_string);i++)
    {
        for(j=0;j<strlen(ay);j++)
            dizi[j]=ay_string[i+j];
        if(ay_string[i]==' ')
            ay_num++;
        if(strncmp(ay,dizi,strlen(ay))==0)
        {
            printf("\nyılın %d.ayıdır",ay_num);
        }  
    }    
   return 0;

}