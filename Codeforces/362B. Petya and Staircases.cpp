#include<bits/stdc++.h>
using namespace std;
int ar[3005];
int main()
{
    long long int n, i, x, m;
    cin >> n >> m;
    for(i = 0; i < m; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+m);
    for(i = 0; i < m-2; i++)
    {
        if(ar[i+2]-ar[i] == 2)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    if(ar[m-1] == n || ar[0] == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
