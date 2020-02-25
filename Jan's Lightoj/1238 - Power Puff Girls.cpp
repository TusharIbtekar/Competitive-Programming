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
#define MAXN                 1004
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define mstt(a,b)            memset((a),(b),sizeof (a))

//priority_queue<ll, vector<ll>, greater<ll> >q
char s[25][25];
bool vis[25][25];
int dist[25][25], hx, hy, n, m;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};
int bfs(int posi, int posj)
{
    LOOP(i, 25)
    {
        LOOP(j, 25)
        {
            dist[i][j] = 9999;
            vis[i][j] = 0;
        }
    }
    deque <pi> dq;
    vis[posi][posj] = 1;
    dist[posi][posj] = 0;
    dq.pb(mp(posi, posj));
    while(!dq.empty())
    {
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();
        LOOP(i, 4)
        {
            posi = x + dx[i];
            posj = y + dy[i];
            if(posi > -1 && posi < n && posj > -1 && posj < m && s[posi][posj] != 'm' && s[posi][posj] != '#' && vis[posi][posj] == 0)
            {
                dist[posi][posj] = min(dist[x][y]+1, dist[posi][posj]);
                vis[posi][posj] = 1;
                dq.pb(mp(posi, posj));
            }
        }
    }

}
int main()
{
    int t, a, b, c, cs = 0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n, &m);
        LOOP(i, n)
            scanf("%s", s[i]);
        LOOP(i, n)
        {
            LOOP(j, m)
            {
                if(s[i][j] == 'h')
                {
                    hx = i, hy = j;
                    break;
                }
            }
        }
        LOOP(i, n)
        {
            LOOP(j, m)
            {
                if(s[i][j] == 'a')
                {
                    bfs(i, j);
                    a = dist[hx][hy];
                }
                if(s[i][j] == 'b')
                {
                    bfs(i, j);
                    b = dist[hx][hy];
                }
                if(s[i][j] == 'c')
                {
                    bfs(i, j);
                    c = dist[hx][hy];
                }
            }
        }
        cout << a << " " << b << " " << c << endl;
        printf("Case %d: %d\n", ++cs, max(a, max(b, c)));
    }
}
