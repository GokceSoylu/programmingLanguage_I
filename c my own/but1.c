/* iki maaş tarifesi var saattlik işci(1) ilk 40 saat fazla mesaide her saate 1,5 kat, işci(2) 500₺ ek satişlarin %5,5 i*/
#include <stdio.h>

float hesaplaSaatlikIsci (float);
float hesaplaKomisyonIsci (float);//sonradan değişilik yaptıpın yerlere ozellikle dikkat et
int main()
{
    int kod;
    float mesai_saati,satıs_miktarı;
    printf("odeme kodunu giriniz (1:Saatlik calısan, 2:Komisyon calısanı\n");
    scanf("%d",&kod);
    if(kod==1)
    {
        printf("toplam calısma saatini giriniz\n");
        scanf("%f",&mesai_saati);
        printf("maasınız %f",hesaplaSaatlikIsci(mesai_saati));
    }
    else if(kod==2)
    {
        printf("satis miktarınızı giriniz lutfen\n");
        scanf("%f",&satıs_miktarı);
        printf("maasınız %f",hesaplaKomisyonIsci(satıs_miktarı));
    }
    else
    printf("yanlıs giris yaptınız");

}
float hesaplasaatlikIsci (float x)
{
    float maas;
    maas=40-(x-40)*50+(x-40)*50*1.5;
    return maas;
}
float hesaplaKomisyonIsci (float x)
{
    float maas;
    maas=500+(float)x/100*5.5;
    return maas;
}