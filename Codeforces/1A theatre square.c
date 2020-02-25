#include<stdio.h>
int main()
{
    long long int n,m,a,x,xr,xc;
    scanf("%llu %llu %llu",&n,&m,&a);
    {
    xr=n/a;
    if(n%a!=0)
    {
        xr=xr+1;
    }
    else
        xr=xr;
    }
    {
    xc=m/a;
    if(m%a!=0)
        xc=xc+1;
    else
        xc=xc;
    }
    x=xr*xc;
    printf("%llu",x);

    return 0;
}
