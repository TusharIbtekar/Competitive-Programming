#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, mn, rem, i, ans = 0;
    cin >> n >> m >> a >> b;
    rem = n % m;
    if(b/m >= a)
        ans = n * a;
    else
        ans = b*(n/m) + min(rem*a, b);



    cout << ans;
}
