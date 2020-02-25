#include<bits/stdc++.h>
using namespace std;
vector<int>graph[10005];
int cost[10005];
int temp[10005];
int main()
{
    int u, v, n, m, i, t;
    cin >> t;
    while(t--)
    {
        for(i = 0; i < 10005; i++)
        {
            graph[i].clear();
            cost[i] = 0;
            temp[i] = 0;
        }
        int tot = 0, mn, smn;
        cin >> n >> m;
        for(i = 0; i < n; i++)
        {
            cin >> cost[i];
            tot += cost[i];
            temp[i] = cost[i];
        }
        sort(temp, temp+n);
        int f = 0;
        for(i = 0; i < n; i++)
        {
            if(cost[i] == temp[0] && !f)
            {
                mn = i;
                f = 1;
            }
            else if(cost[i] == temp[1])
                smn = i;
        }
        //cout << mn << " " << smn << endl;
        for(i = 1; i < m; i++)
        {
            u = i;
            v = i+1;
            graph[u].push_back(v);
        }
        graph[m].push_back(1);
        tot = (2*tot) + (n-m)*(cost[mn]+cost[smn]);
        //cout << "HELL";
        if(n > m || n < 3)
            cout << "-1" << endl;
        else
        {
            cout << tot << endl;
            for(i = 1; i <= n; i++)
            {
                cout << i << " " << graph[i][0] << endl;
            }
        }
    }

}
