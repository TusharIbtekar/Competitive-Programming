#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, ans = 0;
    cin >> n;
    ans = pow(2, n/2);
    if(n&1)
    {
        cout << 0 << endl;
    }
    else
        cout << ans << endl;
}
