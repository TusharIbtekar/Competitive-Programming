#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3], i, d, ans = 0;
    cin >> ar[0] >> ar[1] >> ar[2] >> d;
    sort(ar, ar+3);
    if(ar[1]-ar[0] < d)
        ans = d-(ar[1]-ar[0]);
    if(ar[2]-ar[1] < d)
        ans += d-(ar[2]-ar[1]);
    cout << ans << endl;
}
