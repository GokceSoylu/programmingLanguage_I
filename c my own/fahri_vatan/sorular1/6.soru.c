/* klavyeden girilen n elemanına gore tek indisli elemanları 0 çift indizli elemanları 1 olarak yazdırıan  n elemanlı a dizisini oluştururu */
#include <stdio.h>

int main()
{
    int n;
    printf("a kümesinin kac elemanlı olmasının istersiniz\n");
    scanf("%d",&n);
    int a[n],i;
    printf("a dizisi;\n");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            a[i]=1;
        else
            a[i]=0;
        printf("%d, ",a[i]);
    }
    return 0;


}