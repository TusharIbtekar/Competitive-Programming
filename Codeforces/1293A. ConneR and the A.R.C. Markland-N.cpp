#include<bits/stdc++.h>
using namespace std;
int ar[10000];
int main()
{
    int t, n, s, k, i, pos;
    cin >> t;
    while(t--)
    {
        int f = 0;
        cin >> n >> s >> k;
        for(i = 0; i < k; i++)
        {
            cin >> ar[i];
            if(s == ar[i])
            {
                f = 1;
            }
        }
        if(!f)
        {
            cout << 0 << endl;
            continue;
        }
        sort(ar, ar+k);

        for(i = 0; i < k; i++)
            if(s == ar[i])
                pos = i;
            //cout << ar[i] << " ";

        int dist = 999999999;
        for(i = pos; i < k-1; i++)
        {
            if(ar[i] == ar[i+1]-1)
                continue;
            else
            {
                dist = abs(s-ar[i]-1);
                break;
            }
        }
        for(i = pos; i > 0; i--)
        {
            if(ar[i] == ar[i-1]+1)
                continue;
            else
            {
                dist = min(dist, abs(s-ar[i]+1));
                break;
            }
        }
        if(ar[k-1] < n)
            dist = min(dist, abs(s-ar[k-1]-1));
        if(ar[0] > 1)
        dist = min(dist, abs(s-ar[0]+1));
        cout << dist << endl;
    }
}
