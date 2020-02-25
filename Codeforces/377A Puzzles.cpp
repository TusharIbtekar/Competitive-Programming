#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[55], n, m, i, j, cnt = 0, mn = 1000, dif;
    cin >> n >> m;
    for(i = 0; i < m; i++)
        cin >> ar[i];
    sort(ar, ar+m);
    for(i = 0; i < m-n+1; i++)
    {
        dif = ar[n+i-1] - ar[i];
        mn = min(dif, mn);
        //cout << mn << endl;
    }
    cout << mn;
    //5 7 10 10 12 22
}
