#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    long long int n, x, div = 0, i, j;
    cin >> n >> x;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    for(i = 0; i < n; i++)
    {
        div += x*ar[i];
        if(x > 1)
            x--;
    }
    cout << div;
}
