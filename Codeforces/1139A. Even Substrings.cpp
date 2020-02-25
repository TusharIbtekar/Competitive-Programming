#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base :: sync_with_stdio(false);
    ll n, i, ans = 0, val;
    string s;
    cin >> n;
    cin >> s;
    for(i = 0; i < s.size(); i++)
    {
        val = s[i] - '0';
        if(!(val%2))
        {
            ans++;
            ans += i;
        }
    }
    cout << ans << endl;
}
