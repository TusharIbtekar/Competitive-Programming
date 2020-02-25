#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, ans;
    double n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ans = ceil((n-2)/3.0)*ceil((m-2)/3.0);
        cout << ans << endl;
    }
}
//3 6 6 7 7 9 13

