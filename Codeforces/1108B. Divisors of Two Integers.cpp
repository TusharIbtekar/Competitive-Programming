#include<bits/stdc++.h>
using namespace std;
int ar[200];
int main()
{
    long long int n, x, y, div;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    x = ar[n-1];
    for(int i = n-2; i >= 0; i--)
    {
        if(x%ar[i])
        {
            y = ar[i];
            break;
        }
    }
    cout << x << " " << y;
}
