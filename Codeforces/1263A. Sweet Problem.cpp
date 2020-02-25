#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r, g, b, t, mx, mn, md;
    cin >> t;
    while(t--)
    {
        long long int tot = 0;
        cin >> r >> g >> b;
        mx = max(r, max(g, b));
        mn = min(r, min(g, b));
        md = r+g+b-mx-mn;
        if(mx >= md+mn)
            cout << md+mn << endl;
        else
        {
            long long int rem = mx-md;
            mx -= rem;
            mn -= rem;
            rem = mx-mn;
            mx -= rem;
            md -= rem;
            /*if(!mx && !md && ! mn || mx == 1)
                cout << (r+g+b)/2LL << endl;
            else*/
            long long int ans =  floor((r+g+b)/2LL);
                cout << ans << endl;
        }
    }

}
