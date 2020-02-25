#include<bits/stdc++.h>
using namespace std;
int ar[105];
int main()
{
    int p, d, i, n, q;
    cin >> n;
    cin >> p;
    for(i = 1; i <= p; i++)
    {
        cin >> d;
        ar[d]++;
    }
    cin >> q;
    for(i = 1; i <= q; i++)
    {
        cin >> d;
        ar[d]++;
    }
    for(i = 1; i <= n; i++)
    {
        if(ar[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }

    }
    cout << "I become the guy.";
    return 0;
}
