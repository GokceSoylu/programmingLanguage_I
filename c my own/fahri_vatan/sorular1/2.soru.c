/* klavyeden girilen bir a dizisiinn atritmetik ortalamsını hesaplayıp bundan buyukleri b kucuk ve eşitleri c dizisine aktarır */
#include <stdio.h>
#define eleman_sayısı 10
int main()

{
    int a[eleman_sayısı],b[eleman_sayısı],c[eleman_sayısı],i,sum=0,ort,j,counter_b=0,counter_c=0,k,m;
    printf("a dizisi için on adet eleman giriniz lutfen");
    for(i=0;i<10;i++)
    {
        printf("\n%d.eleman; ",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];   
    }
    ort=sum/eleman_sayısı;
    for(j=0;j<eleman_sayısı;j++)
    {
        if(a[j]>ort)
        {
            b[counter_b]=a[j];
            counter_b++;
        }
        else
        {
            c[counter_c]=a[j];
            counter_c++;
        }

    }
    printf("\naritmetik ortalamadan buyuk elemanlar;\n");
    for(k=0;k<counter_b;k++)
    {
        printf(" %d",b[k]);
    }
     printf("\naritmetik ortalamadan kucuk ve esit elemanlar;\n");
    for(m=0;m<counter_c;m++)
    {
        printf(" %d",c[m]);
    }
    return 0;
}