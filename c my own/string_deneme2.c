/* uc farklı string yazdırma şekli */
#include <stdio.h>
int main()
{
    char string[]="bu benim ilk stringim";//normal diziden farlı olarak burada '{}' kullanmadık; 
    printf("%.2s",string);
    printf("\n");
    printf("%30.8s",string);
    printf("\n");
    printf("%-30.12s",string);
    printf("\n");
    puts(string);
    return 0;
    //wuhuuu great
}