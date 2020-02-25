#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, ans = 0, i, x;
    cin >> n >> k;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(5-k >= x)
            ans++;
    }
    cout << ans/3 << endl;
}
