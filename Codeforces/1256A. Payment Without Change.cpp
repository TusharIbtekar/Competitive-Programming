#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b, s, rem, lage;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> n >> s;
        lage = s/n;
        if(lage == a && s%n == 0 || b >= s)
        {
            cout << "YES" << endl;
            continue;
        }
        int ase = min(a, lage)*n;
        rem = s - ase;
        if(rem <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
