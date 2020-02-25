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
#define MAXN                 10004
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define mstt(a,b)            memset((a),(b),sizeof (a))

//priority_queue<ll, vector<ll>, greater<ll> >q
vector<ll>graph[MAXN];
ll lvl[MAXN], vis[MAXN];

int bfs(ll src)
{
    mstt(lvl, 0);
    mstt(vis, 0);
    deque<int>dq;
    vis[src] = lvl[src] = 1;
    dq.pb(src);
    while(!dq.empty())
    {
        ll ma_src = dq.front();
        dq.pop_front();
        LOOP(i, graph[ma_src].size())
        {
            ll adj = graph[ma_src][i];
            if(!vis[adj])
            {
                lvl[adj] = lvl[ma_src]+1;
                vis[adj] = 1;
                dq.pb(adj);
            }
            else if(adj == src)
                return lvl[ma_src];
        }
    }
    return -1;
}
int main()
{
    ll n, i, u, j;
    scl(n);
    FOR(i, n)
    {
        FOR(j, n)
        {
            scl(u);
            if(u)
            {
                graph[i].pb(j);
            }
        }
    }
    FOR(i, n)
    {
        if(bfs(i) == -1)
            printf("NO WAY\n");
        else
            printf("%d\n", bfs(i));
    }
}
