#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n, d;
    cin >> t;
    while(t--)
    {
        cin >> n >> d;
        double x = n/2;
        //cout << ceil(d/(x+1)) << endl;
        if(x+ceil(d/(x+1)) <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
