#include<bits/stdc++.h>
using namespace std;
int ar[300005];
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int n, ans = 0, i;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(i = 0; i <= n/2; i++)
    {
        if(ar[i] != ar[n-1])
        {
            ans = n-i-1;
            break;
        }
    }
    for(i = n-1; i >= n/2; i--)
    {
        if(ar[i] != ar[0])
        {
            ans = max(i, ans);
            break;
        }
    }
    printf("%lld\n", ans);
}
