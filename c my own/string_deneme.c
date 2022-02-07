/* dort ayrı şekilde strinng yazdırma */
#include <stdio.h>
int main()
{
    char string[]={"Necmiye Soylu"};
    puts(string);
    printf("\n");
    printf("%s",string);
    printf("\n");
    printf("%20s",string);
    printf("\n");
    printf("%-15s gordugum en guzel kızdır :))",string);
    return 0;
}
