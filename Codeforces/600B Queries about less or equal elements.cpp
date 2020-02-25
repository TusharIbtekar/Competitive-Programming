#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, i, index, hi, mid, lo;
    scanf("%lld %lld", &n, &m);
    long long int a[n], b[m];
    for(i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    sort(a, a+n);
    for(i = 0; i < m; i++)
        scanf("%lld", &b[i]);
    for(i = 0; i < m; i++)
    {
        hi = n - 1;
        lo = 0;
        while(lo <= hi)
        {
            mid = (hi + lo)/2;
            if(a[mid] < b[i])
            {
                index = mid;
                lo = mid + 1;
            }
            else if(a[mid] < b[i] )
                lo = mid+1;
            else if(a[mid] > b[i])
                hi = mid - 1;
        }
        printf("%lld ", index+1);
    }
}
