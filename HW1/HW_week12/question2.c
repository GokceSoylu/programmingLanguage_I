#include <stdio.h>
int main()
{
    int eleman_1,eleman_2,ü;
    char dizi_1[30], dizi_2[30],dizi_3[60];
    printf("ilk metninizi giriniz lutfen\n");
    scanf("%s",dizi_1);
    printf("ikinci metninizi alsak :)");
    scanf("%s",dizi_2);
    for( eleman_1=0;dizi_1[eleman_1]!='\0';eleman_1++);
    for( eleman_2=0;dizi_2[eleman_2]!='\0';eleman_2++);
    for(int i=0;i<eleman_1+eleman_2-1;i++)
    {
        if(i<eleman_1)
            dizi_3[i]=dizi_1[i];
        else
            dizi_3[i]=dizi_2[i-eleman_1+1];
    }
    printf("%s",dizi_3);
    return 0;
}