#include<bits/stdc++.h>
using namespace std;
long long int ar[100005];
int main()
{
    long long int k = 0, l, r, i, n, m, cnt = 0, sum1 = 0, sum2 = 0;
    scanf("%lld %lld", &n, &m);
    for(i = 0; i < n; i++)
    {
        scanf("%lld %lld", &l, &r);
        sum1 += l;
        sum2 += r;
        ar[k] = l - r;
        k++;
    }
    sort(ar, ar+n, greater<int>());
    if(sum2 > m)
        printf("-1");

    else
    {
        for(i = 0; i < n; i++)
        {
            if(sum1 > m)
            {
                sum1 -= ar[i];
                cnt++;
            }
        }
        printf("%lld", cnt);
    }

}
