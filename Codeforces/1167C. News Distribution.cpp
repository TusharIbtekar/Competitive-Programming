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
#define MAXN                 500004
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define mstt(a,b)            memset((a),(b),sizeof (a))

//priority_queue<ll, vector<ll>, greater<ll> >q

ll vis[MAXN], cnt, lvl[MAXN];
ll pos[MAXN];
vector<ll>graph[MAXN];
void dfs(ll src, ll adj)
{
    if(vis[src])
    {
        return;
    }
    cnt++;
    vis[src] = 1;
    pos[src] = adj;
    for(ll i = 0; i < graph[src].size(); i++)
    {
        dfs(graph[src][i], adj);
    }

}
int main()
{
    ll n, m, u, v, q;
    scl(n);
    scl(m);
    FOR(k, m)
    {
        scl(q);
        if(!q)
            continue;
        scl(u);
        for(ll i = 1; i < q; i++)
        {
            scl(v);
            graph[v].pb(u);
            graph[u].pb(v);
            u = v;
        }
    }
    FOR(i, n)
    {
        if(!vis[i])
        {
            dfs(i, i);
            lvl[i] = cnt;
            cnt = 0;
            //cout << cnt << " ";
        }
        //memset(vis, 0, sizeof(vis));
        cnt = 0;
    }
    FOR(i, n)
        cout << lvl[pos[i]] << " ";
}
