#include<bits/stdc++.h>
using namespace std;
long long int ar[100005], que[100005];
int main()
{
    long long int i, n, q, pos = 0, d, po = 0;
    scanf("%lld", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%lld", &d);
        ar[d] = i;
    }
    scanf("%lld", &q);
    for(i = 1; i <= q; i++)
    {
        scanf("%lld", &d);
        pos += ar[d];
        po += n-ar[d]+1;
    }
    printf("%lld %lld", pos, po);
}
