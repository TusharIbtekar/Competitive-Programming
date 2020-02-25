#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, d, sum = 0, ans = 0, sum1 = 0, lo, hi, mid;
    scanf("%lld", &n);
    long long int ar[n];
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &d);
        sum += d;
        ar[i] = sum;
    }
    for(i = 0; i < n; i++)
    {
        sum = ar[i];
        hi = n-1;
        lo = i;
        while(hi >= lo)
        {
            mid = (hi+lo)/2;
            sum1 = ar[n-1] - ar[mid];
            if(sum1 == sum)
            {
                if(ans < sum1)
                {
                    ans = sum1;
                    break;
                }
            }
            else if(sum1 > sum)
                lo = mid+1;
            else
                hi = mid-1;
        }
    }
    printf("%lld\n", ans);
}
