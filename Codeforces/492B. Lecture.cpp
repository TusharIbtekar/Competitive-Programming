#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string, string> mp;
    int n, m, i, l;
    string s, ss;
    cin >> n >> m;
    for(i = 0; i < m; i++)
    {
        cin >> s >> ss;
        if(s.size() > ss.size())
            mp[s] = ss;
        else
            mp[s] = s;
    }
    for(i = 0; i < n; i++)
    {
        cin >> s;
        cout << mp[s] << " ";
    }
}
