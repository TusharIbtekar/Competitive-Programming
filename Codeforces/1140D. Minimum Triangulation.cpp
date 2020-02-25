#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int n, i, ans = 0;
    cin >> n;
    for(i = 2; i < n; i++)
    {
        ans += i*(i+1);
    }
    cout << ans << endl;
}
