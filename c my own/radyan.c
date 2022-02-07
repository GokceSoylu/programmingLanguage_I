#include <stdio.h>
int main()
{
    
    int derece,pi=180,radyan,grad;
    printf("derece degerini girniz lutfen");
    scanf("%d",&derece);
    radyan=(derece*pi)/180;
    grad=(derece*200)/180;
    printf("radyan;%d\nGrad;%d",radyan,grad);
    return 0;

}
