#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[1005], n, hi, lo, d = 0, s = 0, i, cnt = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    hi = n-1;
    lo = 0;
    while(cnt < n)
    {
        if(cnt % 2 == 0)
        {
            if(ar[hi] > ar[lo])
            {
                s += ar[hi];
                hi--;
            }
            else
            {
                s += ar[lo];
                lo++;
            }
        }
        else
            {
                if(ar[hi] > ar[lo])
            {
                d += ar[hi];
                hi--;
            }
            else
            {
                d += ar[lo];
                lo++;
            }
        }
        cnt++;
    }
    printf("%d %d", s, d);
}
