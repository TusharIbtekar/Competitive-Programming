#include<stdio.h>
int main()
{
    int n,x,y,i;
    double d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(y!=0)
        {
            d=(double)x/(double)y;
            printf("%.1lf\n",d);
        }
        else
        {
            printf("divisao impossivel");
        }


    }


    return 0;
}
