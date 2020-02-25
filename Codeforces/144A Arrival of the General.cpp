#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[101], n, i, sum, mn = 500, mx = -500, cnt = 0, hi, lo;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] <= mn)
        {
            mn = ar[i];
            lo = i;
        }
        if(ar[i] > mx)
        {
            mx = ar[i];
            hi = i;
        }
    }
    /*for(i = 0; i < n; i++)
    {
        if(ar[i] == mn)
            lo = i;
        if(ar[i] == mx)
            hi = i;
    }*/
    //cout << hi << " " << lo;
    cnt = hi + n - lo - 1;
    if(hi > lo)
        cnt--;
    cout << cnt;
}
