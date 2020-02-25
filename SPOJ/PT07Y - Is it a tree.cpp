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
ll vis[MAXN], lvl[MAXN];

void bfs(ll src)
{
    deque<ll>q;
    q.pb(src);
    lvl[src] = 1;
    vis[src] = 1;

    while(!q.empty())
    {
        ll ma_src = q.front();
        q.pop_front();
        LOOP(i, graph[ma_src].size())
        {
            ll adj = graph[ma_src][i];
            if(vis[adj] == 0)
            {
                vis[adj] = 1;
                //lvl[adj] = lvl[ma_src] + 1;
                q.pb(adj);
            }
        }
    }
}

int main()
{
    ll i, u, v, edges, n, j;
    scl(n);
    scl(edges);
    FOR(i, edges)
    {
        scl(u);
        scl(v);
        graph[u].pb(v);
        graph[v].pb(u);
    }
    bfs(1);
    FOR(i, n)

        {
            if(vis[i])
            {
                //printf("%lld\n", i);
                //printf("YES");
                //return 0;
                continue;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
    if(n != edges + 1)
        printf("NO");
    else
        printf("YES");
}
