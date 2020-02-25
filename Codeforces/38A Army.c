#include<stdio.h>
int main()
{
    int i,n,ar[100],x,sum=0,a,b;
    scanf("%d",&n);

    for(i = 0;i < (n - 1);i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d %d",&a, &b);
    x=b-a;
    for(i = a-1;i < b-1;i++)
        sum=sum + ar[i];
    printf("%d\n",sum);
}
