#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n, l, w, ans = 0, i;
    cin >> n;
    for(i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
            v.emplace_back(i);
    }
    if(v.empty())
    {
        l = 1;
        w = n;
    }
    else
    {
        l = v[v.size()-1];
        w = n/l;
    }
    ans = 2*l+2*w;
    cout << ans << endl;
}
