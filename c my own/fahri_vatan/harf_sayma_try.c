/* girilen cumlede belirtilen harften kac tane var ve yeri */
#include <stdio.h>
#include <string.h>
//23.23
int main()
{
    char a[200],b;
    int c[100],i,s=0;
    printf("cumleyi giriniz => ");
    gets (a);//bak bak burda 
    scanf("%s",&b);
    printf("\n");
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b)
        {
            s++;
            c[s-1]=i+1;
        }
    }
    printf("belirtilen harften %d tane vardır.\n",s);
    for(i=0;i<s;i++)
        printf("%d\t",c[i]);
        return 0;

}