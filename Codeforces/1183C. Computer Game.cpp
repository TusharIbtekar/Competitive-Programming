#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q, k, n, a, b;
    cin >> q;
    while(q--)
    {
        cin >> k >> n >> a >> b;
        if(n*b >= k)
        {
            cout << -1 << endl;
            continue;
        }
        int lo = 0, hi = n, mid, ans = 0;
        while(lo <= hi)
        {
            mid = (lo+hi)/2;
            int temp = a*mid+(n-mid)*b;
            if(temp < k)
            {
                lo = mid+1;
                ans = max(ans, mid);
            }
            else
                hi = mid-1;
        }
        cout << ans << endl;

    }
}
