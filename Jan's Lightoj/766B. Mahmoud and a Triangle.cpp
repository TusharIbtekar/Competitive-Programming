#include<bits/stdc++.h>
using namespace std;
long long int ar[100005];
int main()
{
    int n, i;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    for(i = 1; i < n-1; i++)
    {
        if(ar[i-1]+ar[i] > ar[i+1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
