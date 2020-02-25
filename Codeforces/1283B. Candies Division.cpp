#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, rem, ans = 0;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        rem = floor(n/k);
        ans = min(n-rem*k, k/2)+rem*k;
        cout << ans << endl;
    }
}
