#include<stdio.h>
int main ()
{
    int a,b;
    double x;
    scanf("%d %d",&a,&b);
    x=(double)a/(double)b;
    printf("%.1lf",x);
    return 0;
}
