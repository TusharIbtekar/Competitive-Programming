#include<bits/stdc++.h>
using namespace std;
long long int ar[10000];
int main()
{
    long long int i, n, s, mn = 999999999999, tot = 0;
    cin >> n >> s;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        tot += ar[i];
        mn = min(mn, ar[i]);
    }

    //cout << tot;
    //tot = abs(s - tot);
    //cout << tot << endl;
    if(tot < s)
        cout << -1 << endl;
    else
        cout << min(mn, (tot-s)/n) << endl;
}
