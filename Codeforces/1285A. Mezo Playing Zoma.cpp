#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, n, l = 0, r = 0;
    cin >> n >> s;
    for(i = 0; i < n; i++)
    {
        if(s[i] == 'L')
            l++;
        else
            r++;
    }
    int ans = l+r;
    if(l && r)
        ans++;
    cout << ans << endl;
}
