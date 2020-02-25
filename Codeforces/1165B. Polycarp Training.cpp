#include<bits/stdc++.h>
using namespace std;
int ar[200005];
int main()
{
    int n, d, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    for(int i = 0; i < n; i++)
    {
        if(cnt >= ar[i])
        {
            //cout << cnt << " " << ar[i] << endl;
            continue;
        }
        cnt++;
    }
    cout << cnt << endl;
}
