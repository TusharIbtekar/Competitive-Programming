#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, k, t, i, l, r;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> k;
        if(k % 2)
        {
            l = a*(k/2+1);
            r = b*(k/2);
        }
        else
        {
            l = a*(k/2);
            r = b*(k/2);
        }
        cout << (l-r) << endl;
    }
}
