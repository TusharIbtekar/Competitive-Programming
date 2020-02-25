#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int chk[300005];
int main()
{
    long long int i, n, m, a, b, tot = 0;
    cin >> m >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    for(i = 1; i < n; i++)
    {
        if(v[0].first != v[i].first && v[0].first != v[i].second)
        {
            chk[v[i].first]++;
            chk[v[i].second]++;
            tot++;
        }
    }
    int fmn = -1;
    for(i = 1; i <= m; i++)
    {
        if(fmn < chk[i])
        {
            fmn = chk[i];
        }
    }
    if(fmn == tot)
    {
        cout << "YES" << endl;
        return 0;
    }
    tot = 0, fmn = -1;
    memset(chk, 0, sizeof(chk));
    for(i = 1; i < n; i++)
    {
        if(v[0].second != v[i].first && v[0].second != v[i].second)
        {
            chk[v[i].first]++;
            chk[v[i].second]++;
            tot++;
        }
    }
    fmn = -1;
    for(i = 1; i <= m; i++)
    {
        if(fmn < chk[i])
        {
            fmn = chk[i];
        }
    }
    if(fmn == tot)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;

}
