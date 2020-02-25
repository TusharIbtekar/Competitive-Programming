#include<stdio.h>
int main()
{
    int i,k,n,m[1000],j,count = 0;
    scanf("%d %d",&k,&n);
    for(i = 0;i < k;i++)
    {
         scanf("%d",&m[i]);

    }
    for(i = 0;i < k;i++)
    {
        if(m[i] >= m[n-1]&&m[i]>0)
         {
             count++;
         }
    }
    printf("%d\n",count);

    return 0;
}
