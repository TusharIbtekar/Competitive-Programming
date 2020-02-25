#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>s, t;
    string dump;
    int n, m, q, i, rem1, rem2, d;
    cin >> n >> m;
    for(i = 0; i < n; i++)
    {
        cin >> dump;
        s.push_back(dump);
    }
    for(i = 0; i < m; i++)
    {
        cin >> dump;
        t.push_back(dump);
    }
    cin >> q;
    while(q--)
    {
        cin >> d;
        d--;
        rem1 = d%n;
        rem2 = d%m;
        cout << s[rem1] << t[rem2] << endl;
    }
}
