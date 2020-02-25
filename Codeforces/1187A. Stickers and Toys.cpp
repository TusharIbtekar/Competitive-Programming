#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q, n, s, t, i;
    cin >> q;
    while(q--)
    {
        cin >> n >> s >> t;
        //long long mn = 9999999999;

        cout << n-min(s, t)+1 << endl;
    }
}
