#include<bits/stdc++.h>

using namespace std;

/***template***/
#define ll                   long long
#define dd                   double
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define pi                   pair<ll,ll>
#define pb                   push_back
#define mp                   make_pair
#define uu                   first
#define vv                   second
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define FOOR(i,a,b)          for(ll i=a;i<=b;i++)
#define LOP(i,a,b)           for(ll i=a;i<b;i++)
#define sorted(s)            sort(s.begin(),s.end())
#define reversed(s)          reverse(s.begin(),s.end())
#define contains(a,b)        (find((a).begin(), (a).end(), (b)) != (a).end())
#define MAXN                 100004
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define mstt(a,b)            memset((a),(b),sizeof (a))

//priority_queue<ll, vector<ll>, greater<ll> >q

vector<ll>graph[MAXN];
set<ll>s;
bool vis[MAXN];
void bfs(ll src)
{
    //cout << src << " ";
    s.emplace(src);
    vis[src] = 1;
    while(!s.empty())
    {
        ll ma_src = *s.begin();
        cout << ma_src << " ";
        s.erase(s.begin());
        LOOP(i, graph[ma_src].size())
        {
            ll adj = graph[ma_src][i];
            if(!vis[adj])
            {
                //cout << adj << " ";
                s.emplace(adj);
                vis[adj] = 1;
            }
        }
    }
}
int main()
{
    ll n, m, u, v;
    scl(n);
    scl(m);
    LOOP(i, m)
    {
        scl(u);
        scl(v);
        graph[u].pb(v);
        graph[v].pb(u);
    }
    FOR(i, n)
    {
        if(!vis[i])
            bfs(i);
    }
}
