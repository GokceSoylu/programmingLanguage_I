/* fonksiyon--> ogrenci numaranın rakamları toplamı boyutuna sahip bir dizi klavyeden alınan degerlerle 3 bolunenler diznin basından itibaren bolunmeyenler sonundan baslanarak doldururlur ve son hali ekrana yaazdırılır */
#include <stdio.h>

int fonksiyon(int[], int);
int main()
{
    int size,i;
    size=2+0+1+0+2+1+3+0+0+1;
    int dizi[size];
    for(i=0;i<size;i++)
    {
        printf(" %d.eleman; ",i+1);
        scanf("%d",&dizi[i]);
        
    }
    fonksiyon(dizi, size);
    for(i=0;i<size;i++)
    {
        printf("%d ",dizi[i]);
    }




}
int fonksiyon(int dizi[], int size)
{
    int i,counter_bolunur=0, counter_bolunmez=0;
    for(i=0;i<size;i++)
    {
        if(dizi[i]%3==0)
        {
            dizi[counter_bolunur]=dizi[i];
            counter_bolunur++;
        }
        else
        {
            dizi[size-1-counter_bolunmez]=dizi[i];
            counter_bolunmez++;
        }    
    }
    return 0;

}