#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, i, ans = 0, div;
    cin >> n >> k;
    div = (n+1)/2;
    if(div >= k)
        cout << 2*k-1;
    else
        cout << 2*k - 2*div;
}
