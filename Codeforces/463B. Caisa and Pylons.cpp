#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, mx = -1, d;
    cin >> a;
    while(a--)
    {
        cin >> d;
        mx = max(mx, d);
    }
    cout << mx << endl;
}
