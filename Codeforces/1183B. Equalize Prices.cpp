#include<bits/stdc++.h>
using namespace std;
long long int ar[1001];
int main()
{
    long long int k, i, n, q, f = 0;
    cin >> q;
    while(q--)
    {
        f = 0;
        cin >> n >> k;
        for(i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar, ar+n);
        long long int b = ar[0]+k;
        for(i = 0; i < n; i++)
        {
            if(abs(ar[i]-b) > k)
            {
                f = 1;
            }
        }
        if(f)
        {
            cout << -1 << endl;
        }
        else
            cout << b << endl;
    }
}
