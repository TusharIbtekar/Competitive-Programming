#include<bits/stdc++.h>
using namespace std;

long long int ar[100001], ara[100001];
int main()
{
    long long int hi, lo, mid, i, index = 0, sum = 0, n, s, ans = 0;
    scanf("%lld %lld", &n, &s);
    for(i = 0; i < n; i++)
        scanf("%lld", &ar[i]);
    lo = 1;
    hi = n;
    while(lo <= hi)
    {
        mid = (hi+lo)/2;
        for(i = 0; i < n; i++)
            ara[i] = ar[i] + mid*(i+1);
        sort(ara, ara+n);
        sum = 0;
        for(i = 0; i < mid; i++)
            sum += ara[i];
        if(sum <= s)
        {
            lo = mid+1;
            index = mid;
            ans = sum;
        }
        else
            hi = mid-1;


    }
    printf("%lld %lld", index, ans);
}
