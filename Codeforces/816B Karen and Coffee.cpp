#include<bits/stdc++.h>
using namespace std;
long long int ar[200005], n, k, q, i, cnt, a, j, b, chk[200005];
int main()
{
    scanf("%lld %lld %lld", &n, &k, &q);
    while(n--)
    {
        scanf("%lld %lld", &a, &b);
        chk[a]++, chk[b+1]--;
    }
    for(i = 0; i < 200005; i++)
        chk[i] += chk[i-1];
    for(i = 0; i < 200005; i++)
    {
        if(chk[i] >= k)
            ar[i] = 1;
        ar[i] += ar[i-1];
    }
    while(q--)
    {
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", ar[b] - ar[a-1]);
    }
}
