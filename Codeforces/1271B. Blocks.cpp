#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define pll pair<ll,ll>
#define eb emplace_back
#define ll long long
#define nl '\n'
#define in() ( { int a ; scanf("%d",&a); a; } )

const int N = 3e5 + 9;
const int mod = 1e9 + 7;
vector<int>v;
int main()
{
    int n, i, cntb = 0, cntw = 0, f = 0, t;
    string s;
    n = in();
    cin >> s;
    t = 3*n;
        for(i = 0; i < n-1; i++)
        {
            if(s[i] == s[i+1] && s[i] == 'B')
            {
                s[i] = 'W';
                s[i+1] = 'W';
                v.eb(i+1);
            }
            else if(s[i] == 'B' && s[i+1] == 'W')
            {
                s[i] = 'W';
                s[i+1] = 'B';
                v.eb(i+1);
            }
        }
        for(i = 0; i < n-1; i++)
        {
            if(s[i] == s[i+1] && s[i] == 'B')
            {
                s[i] = 'W';
                s[i+1] = 'W';
                v.eb(i+1);
            }
        }
        if(s[n-1] == 'B')
        {
            for(i = 0; i < n-2; i++)
            {
                if(s[i] == s[i+1] && s[i] == 'W')
                {
                    s[i] = 'B';
                    s[i+1] = 'B';
                    v.eb(i+1);
                }
            }
        }
        //cout << s<< endl;
        for(i = 1; i < n; i++)
        {
            if(s[i-1] != s[i])
                f = 1;
        }
        cout << s << endl;

    if(f)
        cout << -1 << endl;
    else{
    cout << v.size() << nl;
    for(i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    }
}
