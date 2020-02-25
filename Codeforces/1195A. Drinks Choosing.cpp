#include<bits/stdc++.h>
using namespace std;
int chk[2000], ar[2000];
int main()
{
    int i, ans = 0, n, k;
    cin >> n >> k;
    double a, b, c;
    a = n/2.0;
    int haf = ceil(a);
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        chk[ar[i]]++;
    }
    sort(chk, chk+n, greater<int>());
    int rem = 0, r = 0;
    for(i = 0; i < n; i++)
    {
        b = chk[i]/2.0;
        r = ceil(b);
        if(r > haf)
        {
            ans += haf*2;
            break;
        }
        haf -= r;
        ans += chk[i];
        //cout << haf << " ";
    }
    cout << ans << endl;
}
