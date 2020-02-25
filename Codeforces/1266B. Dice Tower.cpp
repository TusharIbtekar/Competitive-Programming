#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, d, mod;
    cin >> n;
    while(n--)
    {
        cin >> d;
        mod = d%14;
        if(mod <= 6 && mod > 0 && d > 7)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
