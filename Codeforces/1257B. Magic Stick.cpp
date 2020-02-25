#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x, y;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        if(x == 1 && y > 1)
            cout << "NO" << endl;
        else if((x == 2 || x == 3) && y > 3)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
