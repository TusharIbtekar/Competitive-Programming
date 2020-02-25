#include<bits/stdc++.h>
using namespace std;
long long int ar[300005];
long long int p[300005];
int main()
{
    long long int n, m, i, gcd;
    cin >> n >> m;
    for(i = 0; i < n; i++)
        cin >> ar[i];
    for(i = 0; i < m; i++)
        cin >> p[i];
    gcd = ar[1]-ar[0];
    for(i = 1; i < n-1; i++)
        gcd = __gcd(gcd, ar[i+1]-ar[i]);
    for(i = 0; i < m; i++)
    {
        if(gcd%p[i] == 0)
        {
            cout << "YES" << endl;
            cout << ar[0] << " " << i+1 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
