#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, p, q, cnt =0;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin >> p >> q;
        if((q-p) >= 2)
            cnt++;
    }
    cout << cnt;
}
