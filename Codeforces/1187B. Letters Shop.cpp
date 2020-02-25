#include<bits/stdc++.h>
using namespace std;
int ar[27];
vector<int>v[30];
int main()
{
    int n, m, i;
    scanf("%d", &n);
    string s, a;
    cin >> a;
    scanf("%d", &m);
    for(i = 0; i < n; i++)
    {
        v[a[i]-'a'].push_back(i+1);
    }
    while(m--)
    {
        int mx = -1, cnt = 0;
        cin >> s;
        if(s.size() == n || s == a)
        {
            cout << n << endl;
            continue;
        }
        for(i = 0; i < s.size(); i++)
        {
            ar[s[i]-'a']++;
            mx = max(mx, v[s[i]-'a'][ar[s[i]-'a']-1]);
        }
        //cout << cnt << endl;
        printf("%d\n", mx);
        memset(ar, 0, sizeof(ar));
    }
}
