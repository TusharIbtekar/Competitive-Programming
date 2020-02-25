#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, pos, mx = -1, cnt = 0, flag = 0;
    cin >> n;
    int ar[n+5];
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    mx = ar[0];
    pos = 0;
    for(i = 1; i < n; i++)
    {
        if(mx > ar[i])
        {
            mx = ar[i];
            pos = i;
            break;
        }
        mx = ar[i];
    }
    //cout << mx << " " << pos << endl;
    cnt = 1;
    for(i = pos; i < n-1; i++)
    {
        if(ar[i] <= ar[i+1])
        {
            cnt++;
            /*if(i == n-2)
                cnt++;*/
        }
        else
        {
            //cout << "HELL" << endl;
            flag = 1;
        }
    }
    if(!pos)
        cnt = 0;
    for(i = 0; i < pos-1; i++)
    {
        if(ar[i] > ar[i+1])
            flag = 1;
    }
    if(ar[0] < ar[n-1] && pos)
        flag = 1;
    if(!flag)
        cout << cnt << endl;
    else
        cout << -1 << endl;
}
