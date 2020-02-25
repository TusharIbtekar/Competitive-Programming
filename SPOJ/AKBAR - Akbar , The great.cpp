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
#define MAXN                 1000004
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define mstt(a,b)            memset((a),(b),sizeof (a))

//priority_queue<ll, vector<ll>, greater<ll> >q

int vis[MAXN], lvl[MAXN];
vector <ll> graph[MAXN];
void bfs(ll src, ll s)
{
    //mstt(lvl, 0);
    deque<ll> q;
    q.pb(src);
    vis[src]++;
    lvl[src] = 0;
    if(s == 0)
        return;
    while(!q.empty())
    {
        ll ma_src = q.front();
        q.pop_front();
        LOOP(i, graph[ma_src].size())
        {
            ll adj = graph[ma_src][i];
            if(!vis[adj])
            {
                vis[adj] = 1;
                lvl[adj] = lvl[ma_src]+1;
                if(lvl[adj] < s)
                    q.pb(adj);

            }

        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    ll n, r, k, s, u, v, m, t;
    scl(t);
    while(t--)
    {
        for(ll i = 0; i < MAXN; i++)
        {
            graph[i].clear();
            vis[i] = 0;
            lvl[i] = 0;
        }

        scl(n);
        scl(r);
        scl(m);
        for(ll i = 0; i < r; i++)
        {
            scl(u);
            scl(v);
            graph[u].pb(v);
            graph[v].pb(u);
        }
        for(ll i = 0; i < m; i++)
        {
            scl(k);
            scl(s);
            bfs(k, s);
        }
        ll flag = 0;
        FOR(i, n)
        {
            //cout << "i = " << i << " " << vis[i] << endl;
            if(!vis[i] || vis[i] > 1)
                flag = 1;
        }
        if(flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}

/*2
6 5 2
1 2
2 3
1 4
5 6
4 5
1 2
6 0*/





















