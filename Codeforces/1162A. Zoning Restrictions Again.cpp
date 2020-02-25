#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[55];
    int i, n, h, m, l, r, x, ans = 0;
    cin >> n >> h >> m;
    for(i = 1; i <= n; i++)
        ar[i] = h;
    for(i = 0; i < m; i++)
    {
        cin >> l >> r >> x;
        for(int j = l; j <= r; j++)
            ar[j] = min(ar[j], x);
    }
    for(i = 1; i <= n; i++)
        ans += ar[i]*ar[i];
    cout << ans << endl;
}
