/*4
5
-1 2 3 4 -1
4
1 2 3 4
6
2 -1 2 3 4 -5
5
-2 -3 -1 -4 -6*/

#include<bits/stdc++.h>
using namespace std;
long long int cmsm[100002], ar[100002], re[100002];
int main()
{
    long long int t, n, seq, sar, add, i;
    scanf("%lld", &t);
    while(t--)
    {
        int flag = 1;
        add = 0;
        seq = 0;
        sar = 0;
        memset(cmsm, 0, sizeof(cmsm));
        memset(ar, 0, sizeof(ar));
        memset(re, 0, sizeof(re));
        scanf("%lld", &n);
        cmsm[-1] = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%lld", &ar[i]);
        }
        for(i = 0; i < n; i++)
        {
            if(add + ar[i] > 0)
            {
                add += ar[i];
                sar = max(sar, add);
                flag = 0;
            }
            else
                add = 0;
        }
        sort(ar, ar+n);
        for(i = 0; i < n; i++)
        {
            if(ar[i] > 0)
            {
                seq += ar[i];
                //flag = 0;
            }
        }
        if(!flag)
            printf("%lld %lld\n", sar, seq);
        else
            printf("%lld %lld\n", ar[n-1], ar[n-1]);
    }
}
