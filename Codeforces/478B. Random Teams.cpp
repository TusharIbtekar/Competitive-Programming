#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, mn, mx, f;
    cin >> n >> m;
    f = n-m+1;
    mx = f*(f-1)/2;
    f = n/m;
    mn = f*(n%m);
    mn += m*(f*(f-1)/2);
    cout << mn << " " << mx;
}
