#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y, n, ans;
    scanf("%lld %lld %lld", &x, &y, &n);
    int ar[7] = {x-y, x, y, y-x, -x, -y};
    ans = (n%6);
    ans = ((ar[ans]%1000000007)+1000000007)%1000000007;
    printf("%lld\n", ans);
}
