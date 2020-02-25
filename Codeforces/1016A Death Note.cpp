#include<bits/stdc++.h>
using namespace std;
long long int ar[200010], ar1[200010];
int main()
{
    long long int i, n, m, sum = 0, cnt = 0, d;
    scanf("%lld %lld", &n, &m);
    for(i = 1; i <= n; i++)
    {
        scanf("%lld", &d);
        sum += d;
        ar[i] = sum;
    }
    for(i = 1; i <= n; i++)
    {
        ar1[i] = ar[i] / m;

    }
    for(i = 1; i <= n; i++)
        printf("%lld ", ar1[i] - ar1[i-1]);

}
