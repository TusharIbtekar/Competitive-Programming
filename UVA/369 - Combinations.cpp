#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define pll pair<ll,ll>
#define eb emplace_back
#define ll long long
#define nl '\n'
#define in() ( { int a ; scanf("%d",&a); a; } )

const int N = 3e5 + 9;
const int mod = 1e9 + 7;
ll dp[101][101];
ll ncr(ll n, ll r)
{
    if(n == r)
        return 1;
    if(r == 1)
        return n;
    if(!dp[n][r])
        dp[n][r] = (ncr(n-1, r-1)+ncr(n-1, r));
    return dp[n][r];
}
int main()
{
    ll n, r;
    while(1)
    {
        n = in();
        r = in();
        if(!n && !r)
            return 0;
        cout << n << " things taken " << r << " at a time is "<< ncr(n, r) << " exactly." << endl;
    }
}
