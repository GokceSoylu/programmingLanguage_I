#include <stdio.h>
int main()
{
    int ty,tm,td,by,bm,bd,y,d,m;
    
    printf("bu günün tarihi");
    printf("yıl");
    scanf("%d",&ty);
    printf("ay");
    scanf("%d",&tm);
    printf("gun");
    scanf("%d",&td);
    
    
    printf("doğum tarihininz");
    printf("yıl");
    scanf("%d",&by);
    printf("ay");
    scanf("%d",&bm);
    printf("gun");
    scanf("%d",&bd);

    y=ty-by;
    m=tm-bm;
    d=td-bd;

    if (m>=0 && d>=0)
        printf("yasınız %d",y);
    else 
        printf ("yasınız %d",--y);
    return 0;
    \\off yakıyosun kızım
    
    
    
    }