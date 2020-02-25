#include<bits/stdc++.h>
using namespace std;
int ar[1000];
int main()
{
    int n, m, k, i, pleft = 999999, pright = 999999;
    cin >> n >> m >> k;
    for(i = 1; i <= n; i++)
        cin >> ar[i];
    for(i = m-1; i >= 1; i--)
    {
        if(ar[i] && ar[i] <= k)
        {
            pleft = i;
            break;
        }
    }
    for(i = m+1; i <= n; i++)
    {
        if(ar[i] && ar[i] <= k)
        {
            pright = i;
            break;
        }
    }
    pleft = abs(m-pleft);
    pright = abs(pright-m);
    cout << min(pleft, pright)*10 << endl;
}
