#include<bits/stdc++.h>
using namespace std;
long long int dsu[500002], cnt[500002];
int find(int a)
{
    if(dsu[a] == a)
        return a;
    else
        return dsu[a] = find(dsu[a]);
}
int main()
{
    long long int n, m, u, v, q, i, j, x, y;
    scanf("%lld %lld", &n, &m);
    for(i = 1; i <= n; i++)
    {
        dsu[i] = i;
        cnt[i] = 1;
    }
    while(m--)
    {
        scanf("%lld", &q);
        if(q == 0)
            continue;
        scanf("%lld", &u);
        for(i = 1; i < q; i++)
        {
            scanf("%lld", &v);
            x = find(u);
            y = find(v);
            if(x == y)
                continue;
            dsu[y] = dsu[x];
            cnt[x] += cnt[y]; //for x's rank is higher therefore is parent
            u = v;
        }
    }
    for(i = 1; i <= n; i++)
        printf("%lld ", cnt[find(i)]);
}
