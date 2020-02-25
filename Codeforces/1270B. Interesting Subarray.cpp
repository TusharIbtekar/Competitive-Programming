#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, d, i, rem;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int ar[n+1], f = 0;
        for(i = 0; i < n; i++)
            cin >> ar[i];
        for(i = 0; i < n-1; i++)
        {
            if(abs(ar[i]-ar[i+1]) >= 2)
            {
                f = 1;
                cout << "YES" << endl;
                cout << i+1 << " " << i+2 << endl;
                break;
            }
        }
        if(!f)
            cout << "NO" << endl;
    }

}
