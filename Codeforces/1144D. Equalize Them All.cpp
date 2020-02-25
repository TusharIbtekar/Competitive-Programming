#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[200005];
ll chk[200005];
int main()
{
    ios_base :: sync_with_stdio(false);
    ll n, i, mxtimes = 0, mxval = -1, mxind = 1;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> ar[i];
        chk[ar[i]]++;
        if(mxtimes < chk[ar[i]])
        {
            mxtimes = chk[ar[i]];
            mxval = ar[i];
            mxind = i;
        }
    }
    //cout << mxtimes << endl;
    cout << n-mxtimes << endl;
    for(i = mxind - 1; i >= 1; i--)
    {
        if(ar[i] < mxval)
            cout << "1 " << i << " " << i+1 << endl;
        else if(ar[i] > mxval)
            cout << "2 " << i << " " << i+1 << endl;
    }
    for(i = mxind + 1; i <= n; i++)
    {
        if(ar[i] < mxval)
            cout << "1 " << i << " " << i-1 << endl;
        else if(ar[i] > mxval)
            cout << "2 " << i << " " << i-1 << endl;
    }
}
