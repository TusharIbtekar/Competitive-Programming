#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, ra, rb, rc, ans = 0;
    cin >> a >> b >> c;
    ra = a/3;
    rb = b/2;
    rc = c/2;
    if(ra < rb && ra < rc)
    {
        ans = ra*7+2;
    }
    else
    {
        ans = rb*7+4;
    }
    cout << ans << endl;
}
