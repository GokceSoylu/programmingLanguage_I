#include <stdio.h>
int main()
{
    float hacim,alan;
    int pi=3,r;
    printf("yuzey alanını ve hacmini hesaplanamsını istediginiz kurenın yarıcao degerini giriniz lutfen");
    scanf("%d",&r);
    hacim=0.75*(pi*r*r*r);
    alan=4*pi*r*r;
    printf("\nhacim; %f\nyuzey alan; %f",hacim,alan);
    return 0;

}