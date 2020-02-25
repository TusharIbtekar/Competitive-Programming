#include<stdio.h>
int main()
{
    int j,i,n,x=0;
    char m[1000];
    scanf("%d",&n);
    if(n>0)
    for(i = 0;i < n;i++)
    {
        scanf("%s",m);
        if(m[1] == '+')
            x++;
        if(m[1] == '-')
            x--;

    }
    printf("%d\n",x);
    return 0;
}
