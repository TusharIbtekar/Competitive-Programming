#include<bits/stdc++.h>
using namespace std;
double precal[1000005];
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int t, cs = 0, n, base, i, res;
    for(i = 1; i < 1000004; i++)
    {
        precal[i] = precal[i-1]+log(i);
    }
    cin >> t;
    while(t--)
    {
        cin >> n >> base;
        res = precal[n]/log(base) + 1;
        printf("Case %lld: %lld\n", ++cs, res);
    }
}
