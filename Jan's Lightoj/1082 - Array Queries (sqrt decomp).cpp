#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000005
#define ll long long
ll block[1005];
ll ar[MAXN];
ll blk_sz;
int query(int l, int r)
{
    ll mn = 1e18;
    while(l < r && l%blk_sz != 0 && l != 0)
    {
        mn = min(ar[l], mn);
        l++;
    }
    while(l+blk_sz <= r)
    {
        mn = min(block[l/blk_sz], mn);
        l += blk_sz;
    }
    while(l <= r)
    {
        mn = min(ar[l], mn);
        l++;
    }
    return mn;
}
int main()
{
    //ios_base :: sync_with_stdio(false);
    int q, t, n, i, mn, l, r;
    cin >> t;
    int cs = 0;
    while(t--)
    {
        int index = -1;
        //memset(ar, 0, sizeof(ar));
        for(i = 0; i < 1002; i++)
            block[i] = 1e18;
        scanf("%d %d", &n, &q);
        for(i = 0; i < n; i++)
        {
            scanf("%lld", &ar[i]);
        }
        blk_sz = sqrt(n);
        for(i = 0; i < n; i++)
        {
            if(i%blk_sz == 0)
                index++;
            block[index] = min(block[index], ar[i]);
        }
        /*for(i = 0; i < n; i++)
            cout << block[i] << " ";*/
        printf("Case %d:\n", ++cs);
        while(q--)
        {
            scanf("%d %d", &l, &r);
            mn = query(l-1, r-1);
            printf("%d\n", mn);
        }


    }
}
