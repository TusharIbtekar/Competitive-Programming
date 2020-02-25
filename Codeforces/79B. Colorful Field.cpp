#include<bits/stdc++.h>
using namespace std;
int ar[1000000];
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int s, i, j, n, m, k, t, a, b;
    cin >> n >> m >> k >> t;
    for(i = 1; i <= k; i++)
    {
        cin >> a >> b;
        ar[i] = a*m+b;
    }
    sort(ar+1, ar+k+1);
    for(i = 1; i <= t; i++)
    {
        cin >> a >> b;
        j = lower_bound(ar+1, ar+k+1, a*m+b)-ar;
        //cout << j << " ";
        if(ar[j] == a*m+b)
            cout << "Waste" << endl;
        else
        {
            j = (a-1)*m+b-j+1;
            //cout << j << " ";
            if(j%3 == 1)
                cout << "Carrots" << endl;
            else if(j%3 == 2)
                cout << "Kiwis" << endl;
            else
                cout << "Grapes" << endl;
        }
    }
}
