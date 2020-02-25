#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ar[100005], n, m, i, rem, ans = 0;
    cin >> n >> m;
    for(i = 0; i < m; i++)
    {
        cin >> ar[i];
    }
    ans = ar[0]-1;
    for(i = 1; i < m; i++)
    {
        if(ar[i-1] > ar[i])
        {
            ans += n-ar[i-1]+ar[i];
        }
        else if(ar[i-1] < ar[i])
        {
            ans += ar[i]-ar[i-1];
        }
    }
    cout << ans << endl;
}
