#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    long long int n, i, ans = 0, flag = 0;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> ar[i];
    ans = ar[0]+n;
    for(i = 1; i < n; i++)
    {
        ans += abs(ar[i]-ar[i-1])+1;
    }
    cout << ans << endl;
}
