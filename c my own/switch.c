#include <stdio.h>
int main()
{
    int not;
    printf("notunuzu giriniz lutfen");
    scanf("%d",&not);
    switch(not)
    {
    case 1:
    
        printf("kaldı"); 
        break;
    
    case 2:
    
            printf("zayıf");
            break;
    
    case 3:
    
            printf("orta");
         break;
    
    case 4:
    
            printf("iyi");
            break;
    
    case 5:
    
            printf("pek iyi");
            break;
    
    default:
    
            printf("gecersiz giris");
            break;
    }
        return 0;
//break lar sorun deil eger iki  staitmen yazicaksan {} kullanılırsın

}