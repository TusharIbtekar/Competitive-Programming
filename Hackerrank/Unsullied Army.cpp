#include<bits/stdc++.h>
using namespace std;
map < string, long long int > mp;
map < string, long long int > chk;
string s, sub;
long long int t, n, m, q, p, i, j, cnt, x, y, k;
int main()
{
    cin >> t;
    while(t--)
    {
        k++;
        cin >> n >> m;
        cin >> s;
        for(y = 0; y < m; y++)
        {
            sub = "";
            cin >> i >> j >> p;
            for(x = i-1; x < j; x++)
                sub += s[x];
            chk[sub]++;
            mp[sub] += p;
        }
        cin >> q;
        cout << "Case " << k << ":" << endl;
        while(q--)
        {
            cin >> sub;
            cout << chk[sub] << " " << mp[sub] << endl;
        }
        chk.clear();
        mp.clear();
    }
}
