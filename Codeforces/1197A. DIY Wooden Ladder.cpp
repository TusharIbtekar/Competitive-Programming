#include<bits/stdc++.h>
using namespace std;
int ar[100005], cnt[100005];
int main()
{
    int n, i, k, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int ans = 0;
        for(i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar+n);
        for(i = 0; i < n-2; i++)
            if(ar[n-2] > i+1)
            {
                ans++;
            }
        cout << ans << endl;
    }
}
