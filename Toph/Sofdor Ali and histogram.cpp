#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ar[100000], mx;
    int i, n, m, area, tot, t, c = 1;
    scanf("%d", &t);
    while(t--)
    {
        mx = -1;
        scanf("%d", &n);
        for(i = 1; i <= n; i++)
        {
            scanf("%lld", &ar[i]);
        }
        for(i = 1; i <= n; i++)
        {
            mx = max(mx, ar[i] * (n-i+1));

        }
        printf("Case %d: %lld\n", c, mx);
        c++;

    }
}

