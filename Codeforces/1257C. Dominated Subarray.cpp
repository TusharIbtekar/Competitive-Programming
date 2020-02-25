#include<bits/stdc++.h>
using namespace std;
vector<int>v[200005];
int ar[200005];
int main()
{
    int t, d, n, i, j;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int mx = -2, f = 0;
        for(i = 0; i < n; i++)
        {
            cin >> d;
            mx = max(mx, d);
            v[d].push_back(i);
        }
        int mn = 999999999;
        for(i = 0; i <= mx; i++)
        {
            if(v[i].size() > 1)
            {
                for(j = 1; j < v[i].size(); j++)
                {
                    mn = min(mn, v[i][j]-v[i][j-1]+1);
                    f = 1;
                    //cout << v[i][j] << " " << v[i][j-1] << endl;
                }
            }
        }
        if(f)
            cout << mn << endl;
        else
            cout << -1 << endl;
        for(i = 0; i <= mx; i++)
            v[i].clear();
    }
}
