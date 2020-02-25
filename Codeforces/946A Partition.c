#include<stdio.h>
int main()
{
    int a[500],i,x,n,sum=0,C=0,B=0;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i] > 0)
        {
            C = C + a[i];
        }
        else
            B = B + a[i];
    }
    sum = C-B;
    printf("%d\n",sum);
}
