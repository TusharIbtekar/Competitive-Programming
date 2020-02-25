#include<bits/stdc++.h>
using namespace std;
long long int rem[100005];
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int ar[100005], i, j, tot = 0, mx = 0, k, l, n, f, to = 0;
    cin >> n >> f;
    for(i = 0; i < n; i++)
    {
        cin >> k >> l;
        tot += min(k, l);
        ar[i] = min(2*k, l) - min(k, l);
    }
    sort(ar, ar+n, greater<int>());
    for(i = 0; i < f; i++)
        tot += ar[i];
    for(i = 0; i < n; i++)
    {
        to += ar[i];
    }
    cout << tot;
}
