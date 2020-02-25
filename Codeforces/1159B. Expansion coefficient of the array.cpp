#include<bits/stdc++.h>
using namespace std;
int ar[300005];
int main()
{
    int n, ans = 9999999999, i, part;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        part = (ar[i]/max(i, n-i-1));
        ans = min(part, ans);
    }
    cout << ans << endl;
}
