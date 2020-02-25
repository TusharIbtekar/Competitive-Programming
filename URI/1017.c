#include<stdio.h>
int main()
{
    int t,s,d;
    double f;
    scanf("%d %d",&t,&s);
    d=s*t;
    f=d/12.0;
    printf("%.3lf\n",f);
    return 0;
}
