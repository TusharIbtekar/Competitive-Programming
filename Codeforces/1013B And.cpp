#include<bits/stdc++.h>
using namespace std;
#define ll  long long
ll ar[100001];
ll chk[100001];
ll nd[100001];
int main()
{
    ll i, x, n, flag = 3, vlu;
    scanf("%lld %lld", &n, &x);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
        chk[ar[i]]++;
        if(chk[ar[i]] >= 2)
        {
            flag = min(0LL, flag);
        }
        vlu = ar[i] & x;
        nd[vlu]++;
        if(nd[vlu] >= 2)
        {
            flag = min(2LL,flag);
        }
    }
    for(i = 0; i < n; i++)
    {
        if(chk[ar[i]] >= 1 && nd[ar[i]] >= 1)
        {
            if(ar[i] == (ar[i] & x) && nd[ar[i]] == 1)
                continue;
            flag = min(1LL, flag);
        }
    }
    if(flag == 3)
        printf("-1");
    else
        printf("%lld", flag);
}
