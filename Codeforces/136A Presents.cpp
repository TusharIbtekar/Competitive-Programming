#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    int n, i, d;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> d;
        mp[d] = i;
    }
    for(i = 1; i <= n; i++)
        cout << mp[i] << " ";

}
