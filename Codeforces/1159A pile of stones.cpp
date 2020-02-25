#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, ans = 0, in = 0, out = 0;
    string s;
    cin >> n;
    cin >> s;
    for(i = 0; i < n; i++)
    {
        if(s[i] == '-')
        {
            //ans--;
            if(ans == 0)
                ans++;
            ans--;
        }
        else
            ans++;
    }
    if(ans < 0)
        ans = 0;
    cout << ans << endl;
    /*for(i = 0; i < s.size(); i++)
    {
        if(s[i] == '+')
            in++;
        else
            out++;
    }
    if(out >= in)
        cout << in << endl;
    else
    {
        cout << in - (n-in) << endl;
    }*/
}
