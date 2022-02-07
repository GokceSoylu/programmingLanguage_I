/* n elemanlı a,b ve c dizilerini kullanarak d=a+b-c dizsinini buyukten kucuge yaazdırır */
#include <stdio.h>
#define eleman_sayısı 10
int main()
{
    int a[eleman_sayısı],b[eleman_sayısı],c[eleman_sayısı],d[eleman_sayısı],i,j,k,m,gecici[1],n,s;
    printf("sizden herbiri 10 elemanlı uc dizi olustmanızı rica edicez\na dizisi");
    
    for(i=0;i<eleman_sayısı;i++)
    {
        printf("\n%d.eleman ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nb dizisi\n");
    for(j=0;j<eleman_sayısı;j++)
    {
        printf("\n%d.eleman ",j+1);
        scanf("%d",&b[j]);
    }
    printf("\nc dizisi\n");
    for(k=0;k<eleman_sayısı;k++)
    {
        printf("\n%d.eleman ",k+1);
        scanf("%d",&c[k]);
    }
    for(m=0;m<eleman_sayısı;m++)
    {
        d[m]=a[m]+b[m]-c[m];
    }
    for(n=0;n<eleman_sayısı;n++)
    {
        for(s=0;s<eleman_sayısı;s++)
        {
            if(d[n]<d[s])
            {
                gecici[0]=d[n];
                d[n]=d[s];
                d[s]=gecici[0];
            }
            
            
        }
    }
    printf("a+b-c dzisi kucukten buyuge dogru; ");
    for(i=0;i<eleman_sayısı;i++)
        printf(" %d",d[i]);
    return 0;

}