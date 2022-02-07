#include <stdio.h>
 #define SAT 2 
 #define SUT 3
int main()
{
int a[SAT][SUT] = {5, 3, 7, 0, 1, 2};
int b[SAT][SUT] = {1, 2, 3, 4, 5, 6}; 
int c[SAT][SUT];
int i, j;
puts("A Matrisi:"); 
for(i=0; i<SAT; i++)
{
    for(j=0; j<SUT; j++) 
    printf("%d",a[i][j]);
    printf("\n");
}
return 0;
}