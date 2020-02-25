#include<stdio.h>
int main()
{
    int i,n,x[100];
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<12)
            {
                if(x[i]%3==0||x[i]%7==0||x[i]%10==0)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        else
            printf("YES\n");
    }


    return 0;
}
