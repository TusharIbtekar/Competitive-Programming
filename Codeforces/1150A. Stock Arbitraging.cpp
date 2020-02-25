#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, r, i, sold, cost, bght;
    int ar[40], br[40];
    cin >> n >> m >> r;
    for(i = 0; i < n; i++)
        cin >> ar[i];
    for(i = 0; i < m; i++)
        cin >> br[i];
    sort(ar, ar+n);
    sort(br, br+m);
    bght = r/ar[0];
    sold = bght*br[m-1];
    //cout << bght << ' ' << sold << endl;
    cost = r - bght*ar[0] + sold;
    if(cost > r)
        cout << cost << endl;
    else
        cout << r << endl;
}
