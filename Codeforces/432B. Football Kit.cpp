#include<bits/stdc++.h>
using namespace std;
int h[100005], a[100005];
int cnt[100005], home[100005];
int main()
{
    int n, x, y, i, j;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
        cnt[h[i]]++;
    }
    for(i = 0; i < n; i++)
    {
        cout << n-1+cnt[a[i]] << " " << n-1-cnt[a[i]] << endl;
    }

}
