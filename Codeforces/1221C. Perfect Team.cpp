#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, c, m, x, rem, cnt = 0;
    cin >> t;
    while(t--)
    {
        cin >> c >> m >> x;
        cnt = (c+m+x)/3;
        cnt = min(cnt, min(c, m));
        cout << cnt << endl;
        cnt = 0;
    }
}
