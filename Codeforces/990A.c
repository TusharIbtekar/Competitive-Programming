#include<stdio.h>
int main()
{
    long long int i, j, a, b, n, m, sum = 0, sum1 = 0;
    scanf("%lld %lld %lld %lld", &n, &m, &a, &b);
    if(n % m != 0)
    {
        if(n < m)
            {
                sum = n*b;
                sum1 = (m - n)*a;
                if(sum1 > sum)
                    printf("%lld\n", sum);
                else
                    printf("%lld\n", sum1);
            }
        else
            {
                sum = a*(m - n%m);
                sum1 = b*(n%m);
                if(sum1 > sum)
                    printf("%lld\n", sum);
                else
                    printf("%lld\n", sum1);
            }

    }
    else
        printf("%lld\n", sum);

}
