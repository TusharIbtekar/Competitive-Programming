#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long tot = 0, ans = -111111111, i, prev = 0, k, n;
    cin >> n >> k;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        tot += ar[i];
        if(tot > k)
        {
            ans = max(ans, i-prev);
            while(tot > k)
            {
                //cout << prev << endl;
                tot -= ar[prev];
                prev++;
            }
        }
    }
    ans = max(ans, i-prev);
    cout << ans << endl;
}
