#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int t, i, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << 2*(v[n-1] - v[0]) << endl;
        v.clear();
    }
}
