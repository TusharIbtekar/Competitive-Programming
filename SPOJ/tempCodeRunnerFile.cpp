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
//int dx[]={1,0,-1,0,1,-1,-1,1};
//int dy[]={0,1,0,-1,1,1,-1,-1};

ll bigmod(ll a, ll p){
    if(!p) return 1;
    ll x = bigmod(a, p/2);
    x = (x*x)%mod;
    if(p%2){
        x = (x*a)%mod;
    
    }
    return x;
}

int main()
{
    ll n, t;
    cin >> t;
    while(t--){
        cin >> n;
        ll ans;
        ll cnt = n/3;
        ll rem = n%3;
        if(rem < 3 && rem > 0){
            cnt--;
            rem += 3;
        }
        ans = bigmod(3, cnt);
        //cout << rem << endl;
        if(rem) ans = (ans*rem) % mod; 
        cout << ans << endl;
    }
}