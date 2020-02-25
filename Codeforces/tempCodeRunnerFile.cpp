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

int main()
{
    int t, n, i, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        ll ar[n], tot = 0, ans = 9999999999999;
        for(i = 0; i < n; i++){
            cin >> ar[i];
            if(x%ar[i] == 0){
                ans = min(ans, x/ar[i]);
            }
        }
        //cout << ans << nl;
        sort(ar, ar+n, greater<int>());
        ll lage = 0, f = 0;
        for(i = 0; i < n; i++){
            tot += ar[i];
            lage++;
            if(tot >= x){
                break;
            }
        }
        if(tot < x){
            ll rem = (x/double(ar[0]))+1;
            cout << min(ans, rem) << nl;
        }
        else if(lage == 1) cout << min(ans, lage+1) << nl;
        else cout << min(ans, lage) << nl;
    }
}