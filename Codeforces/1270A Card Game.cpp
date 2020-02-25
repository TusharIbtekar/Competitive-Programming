#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k1, k2, i, f = 0, d;
        cin >> n >> k1 >> k2;
        for(i = 0; i < k1; i++)
        {
            cin >> d;
            if(d == n)
                f = 1;
        }
        for(i = 0; i < k2; i++)
            cin >> d;
        if(f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
