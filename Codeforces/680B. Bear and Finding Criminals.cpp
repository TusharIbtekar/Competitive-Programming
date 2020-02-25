#include<bits/stdc++.h>
using namespace std;
int chk[1000];
int main()
{
    int ar[105], n, a, i, cnt = 0;
    cin >> n >> a;
    for(i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    if(ar[a])
        cnt++;
    ar[a] = 0;
    if(n > 2)
    {
        for(int j = 1, i = a+1; i < n+1 && a-j > 0; i++, j++)
        {
            cout << i << " " << a-j << endl;
            if(ar[i] == 1 && ar[a-j] == 1)
            {
                cnt += 2;
            }
            ar[i] = ar[a-j] = 0;
        }
    }
    for(i = 1; i <= n; i++)
    {
        //cout << i << endl;
        if(ar[i])
            cnt++;
    }
    cout << cnt;
}
