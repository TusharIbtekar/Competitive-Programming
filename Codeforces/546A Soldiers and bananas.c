#include<stdio.h>
int main()
{
    long long int i, k, n, w, sum = 0;
    scanf("%lld %lld %lld", &k, &n, &w);

    for(i = 1; i <= w; i++)
    {
        sum += k*i;
    }
    if((sum-n) > 0)
        printf("%lld", sum-n);

    else
        printf("0\n");
}
