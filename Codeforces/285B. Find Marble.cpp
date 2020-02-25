#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, t, i;
    cin >> n >> s >> t;
    int ar[n+1];
    for(i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    for(i = 0; i < n; i++)
    {
        if(s == t)
        {
            cout << i << endl;
            return 0;
        }
        s = ar[s];
    }
    cout << -1 << endl;
}
