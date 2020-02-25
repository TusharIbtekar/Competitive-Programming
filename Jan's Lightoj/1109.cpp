#include<bits/stdc++.h>
using namespace std;
 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define eb emplace_back
#define ll long long
#define nl '\n'
#define in() ( { int a ; scanf("%d",&a); a; } )
 
const int N = 1e4;
const int mod = 1e9 + 7;
//int dx[]={1,0,-1,0,1,-1,-1,1};
//int dy[]={0,1,0,-1,1,1,-1,-1};
ll prime[N];
bitset<N>chk;
int a;
vector< pii > v;
void sieve()
{
    int i, j, m;
    m = sqrt(N);
    chk.reset();
    for(i = 2; i <= m; i++){
        if(!chk[i]){
            for(j = i*i; j <= N; j += i){
                chk[j] = 1;
            }
        }
    }
    prime[a++] = 2;
    for(i = 3; i <= N; i += 2){
        if(!chk[i]){
            prime[a++] = i;
        }
    }
}
void divisor()
{
    ll rem, koybar, tot, i, j, temp;
    for(i = 2; i < 1001; i++){
        tot = 1;
        temp = i;
        for(j = 0; j <= a && prime[j] <= sqrt(temp); j++){
            koybar = 0;
            if(temp%prime[j] == 0){
                while(temp%prime[j] == 0){
                    temp /= prime[j];
                    koybar++;
                    if(temp < 2) break;
                }
                tot *= (koybar+1);
            }
        }   
        if(temp > 1){
            tot *= 2;
        }

        //cout << i << " " << tot << endl;
        v.eb(make_pair(i, tot));
    }
}
int main()
{
    int t, n, cs = 0, i, j;
    sieve();
    divisor();
    //for(i = 0; i < 1000; i++) cout << prime[i] << " ";
    sort(v.begin(), v.end());
    //for(i = 0; i < 1000; i++) cout << v[i].first << " " << v[i].second << endl;
    //cout << a << endl;
    //cout << v.size() << nl;
    vector<int>ans;
    ans.eb(0); ans.eb(1);
    for(i = 2; i <= 32; i++){
        for(j = 1000; j > 0; j--){
            if(v[j-1].second == i){
                ans.eb(j+1);
                //cout << i << " " << j+1 << endl;
            }
        }
    }
    t = in();
    while(t--){
        n = in();
        cout << "Case " << ++cs << ": " << ans[n] << endl;
    }
    
}