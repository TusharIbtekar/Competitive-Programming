#include<bits/stdc++.h>
using namespace std;
int ar[200005];
vector<int>v;
int main()
{
    string s;
    int n, i, flag = 0;
    cin >> n >> s;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(i = 0; i < s.size()-1; i++)
    {
        if(s[i] == 'R' && s[i+1] == 'L')
        {
            flag = 1;
            v.push_back((ar[i+1]-ar[i])/2);
        }
    }
    if(!flag)
    {
        cout << -1 << endl;
        return 0;
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl;

}
