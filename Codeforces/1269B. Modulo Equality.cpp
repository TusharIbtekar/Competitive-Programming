#include<bits/stdc++.h>
using namespace std;
int ar[2005], br[2005];
int main()
{
    int i, n, m;
    cin >> n >> m;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(i = 0; i < n; i++)
    {
        cin >> br[i];
    }
    sort(ar, ar+n);
    sort(br, br+n);
    for(i = 0; i < n; i++)
    {
        int dif = (br[n-1] - ar[i]);
        if(dif < 0)
            dif = m+dif;
        int cnt = 0;
        int cpy[n+1];
        for(int j = 0; j < n; j++)
        {
            cpy[j] = (ar[j]+dif)%m;
        }
        sort(cpy, cpy+n);
        for(int j = 0; j < n; j++)
        {
            if(cpy[j] == br[j])
                cnt++;
        }
        if(cnt == n)
        {
            cout << dif << endl;
            break;
        }
    }
}
