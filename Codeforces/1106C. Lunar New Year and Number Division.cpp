#include<bits/stdc++.h>
using namespace std;
int ar[3000005];
int main()
{
    long long int n, tot = 0, i, div;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    div = n/2;
    for(i = 0; i < div; i++)
    {
        tot += (ar[i]+ar[n-i-1]) * (ar[i]+ar[n-i-1]);
    }
    cout << tot << endl;
}
