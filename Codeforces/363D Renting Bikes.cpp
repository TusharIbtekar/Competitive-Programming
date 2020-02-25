#include<bits/stdc++.h>
using namespace std;
long long int per[100005], rent[100005], a, n, m, i, res, hi, mid, lo, temp;
int main()
{
     cin >> n >> m >> a;
     for(i = 0; i < n; i++)
        cin >> per[i];
     for(i = 0; i < m; i++)
        cin >> rent[i];
     sort(per, per+n);
     sort(rent, rent+m);
     hi = min(n, m);
     lo = 0;
     long long index;
     while(lo <= hi)
     {
         mid = (hi+lo)/2;
         for(i = 0; i < mid; i++)
         {
             if(rent[i] > per[n-mid+i])
                temp += (rent[i] - per[n-mid+i]);
         }
         if(temp <= a)
            index = mid, lo = mid+1;
         else
            hi = mid-1;
     }
     for(i = 0; i < index; i++)
        res += rent[i];
     cout << index << " " << max((res-a), 0LL);
}
