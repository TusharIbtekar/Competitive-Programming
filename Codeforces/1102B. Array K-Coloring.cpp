#include<bits/stdc++.h>
using namespace std;
int ar[10000];
int chk[10000];
int ans[10000];
int mark[10000];
int main()
{
    int i , j, k, n, m, l=0;
    cin >> n >> k;
    for(i = 1; i <= n; i++)
    {
        cin>>ar[i];
        chk[ar[i]]++;
        ans[i] = chk[ar[i]];
        mark[ans[i]]++;
        l = max(l, ans[i]);
        if(ans[i] > k)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    for(i = 1; i <= n && l < k; i++){
        if(mark[ans[i]]>1)
            mark[ans[i]]--,ans[i]=++l;
    }
    for(i = 1; i <= n; i++)
        cout << ans[i] <<' ';
    return 0;
}
