#include <stdio.h>
int main()
{
    for (int i=0;i<=10;i++)
    {
        if (i==7)
        {
            break;
        }
        
        
        if (i==3)
            continue;
        printf("\n%d",i);
    
    
    
    }
    return 0;
// continue de altına koydugun adımı atlayıp devam eder
//break ise orada döngüyü bırakır tabiki yzdırıp mı bırakcak yazdırmadan mı bu hangisini önce yazzdığına bağlı (I am sure you got it)

} 