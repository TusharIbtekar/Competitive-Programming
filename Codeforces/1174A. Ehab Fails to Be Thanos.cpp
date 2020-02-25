#include<bits/stdc++.h>
using namespace std;
int ar[10000];
int main()
{
    long long int n, i, f = 0, l = 0;
    cin >> n;
    for(i = 0; i < 2*n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+(2*n));
    for(i = 0; i < n; i++)
        f += ar[i];
    for(i = n; i < 2*n; i++)
        l += ar[i];
    if(f == l)
        cout << -1 << endl;
    else
    {
        for(i = 0; i < 2*n; i++)
            cout << ar[i] << " ";
    }
}
