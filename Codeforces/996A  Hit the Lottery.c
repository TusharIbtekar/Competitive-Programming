#include<stdio.h>
int main()
{
    long long int n, mod, i, div = 0;
    scanf("%lld", &n);
    if(n >= 100)
    {
        div += n/100;
        n = n % 100;

    }
    if(n >=20)
    {
        div += n/20;
        n = n % 20;

    }
    if(n >=10)
    {
        div += n/10;
        n = n % 10;

    }
    if(n >= 5)
    {
        div += n/5;
        n = n % 5;

    }
    if(n >= 1)
    {
        div += n;
    }
    printf("%lld", div);
}
