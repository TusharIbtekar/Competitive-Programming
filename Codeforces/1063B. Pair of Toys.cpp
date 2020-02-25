#include<bits/stdc++.h>
using namespace std;
int ar[100000000000005], ar1[100000000000005], ar2[100000000000005];
int main()
{
    long long int n, k, cnt = 0, i, mx;
    scanf("%lld %lld", &n, &k);
    mx = max(n, k);
    /*for(i = 0; i < n; i++)
    {
        ar[i] = i+1;
    }*/
    for(i = 0; i < n; i++)
    {
        if(k - ar[i] < n)
            ar[i+1]++;
    }
    for(i = 0; i <= mx; i++)
    {
        if(ar[i] > 0)
            cnt++;
    }
    printf("%lld", cnt/4);
}
