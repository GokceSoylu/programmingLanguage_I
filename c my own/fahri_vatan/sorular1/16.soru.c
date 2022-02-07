/* girilen bir cumleyi morse alfabesiyle yazdırır */
#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char cumle[100];
    printf("cumleyi giriniz lutfen\n");
    gets(cumle);
    for(i=0;i<strlen(cumle);i++)
    {
        switch(cumle[i])
        {
            case 'a':{printf("._"); break;}
            case 'b':{printf("_..."); break;}
            case 'c':{printf("_._."); break;}
            case 'd':{printf("_.."); break;}
            case 'e':{printf("."); break;}
            case 'f':{printf(".._."); break;}
            case 'g':{printf("__."); break;}
            case 'h':{printf("...."); break;}
            case 'i':{printf(".."); break;}
            case 'j':{printf(".___"); break;}
            case 'k':{printf("_._"); break;}
            case 'l':{printf("._.."); break;}
            case 'm':{printf("__"); break;}
            case 'n':{printf("_."); break;}
            case 'o':{printf("___"); break;}
            case 'p':{printf(".__."); break;}
            case 'q':{printf("__._"); break;}
            case 'r':{printf("._."); break;}
            case 's':{printf("..."); break;}
            case 't':{printf("-"); break;}
            case 'u':{printf(".._"); break;}
            case 'v':{printf("..._"); break;}
            case 'w':{printf(".__"); break;}
            case 'x':{printf("_.._"); break;}
            case 'y':{printf("_.__"); break;} 
            case 'z':{printf("__.."); break;}
            default :{printf("yanlıs karakter girisi yapıldı"); break;}
        }
        printf(" | ");
    }

    return 0;
}