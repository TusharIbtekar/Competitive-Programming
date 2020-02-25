#include<stdio.h>
int main()
{
    long long int x,n;
    scanf("%llu",&x);
    n=x/5;
    if(x%5!=0)
    {
        n++;
        printf("%llu",n);
    }
    else
        printf("%llu",n);
    return 0;
}
