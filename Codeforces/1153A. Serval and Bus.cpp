#include<bits/stdc++.h>
using namespace std;
int s, d;
int ar[10000];
int main()
{
    int n, i, mn = 99999999, ind, t, mx = -1;
    cin >> n >> t;
    for(i = 0; i < n; i++)
    {
        cin >> s >> d;
        mx = s;
        while(1)
        {
            if(mx >= t)
            {
                ind = i;
                ar[ind] = mx;
                //cout << mx << endl;
                break;
            }
            mx += d;
        }
    }
    for(i = 0; i < n; i++)
    {
        //cout << ar[i] << " ";
        if(mn > ar[i])
        {
            ind = i;
            mn = ar[i];
        }
    }
    cout << ind+1 << endl;

}
