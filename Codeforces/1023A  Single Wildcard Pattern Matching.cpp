#include<bits/stdc++.h>
using namespace std;
//string s, ss, t;
int main()
{
    string s, ss, t;
    char c;
    int i, n, m, flag = 0, j = 0, c1 = 0, c2 = 0;
    cin >> n >> m;
    cin >> s >> t;
    for(i = 0; i < n; i++)
        if(s[i] == '*')
        {
            flag = 1;
            break;
        }
    if(flag == 0)
    {
        if(s == t)
            cout << "YES";
        else
            cout << "NO";
        return 0;
    }

    if(n - m > 1)
    {
        cout << "NO";
        return 0;
    }
    for(i = 0; s[i] != '*'; i++)
    {
        if(s[i] != t[i])
        {
            cout << "NO";
            return 0;
        }
    }
    for(i = n-1, j = m-1; s[i] != '*'; i--, j--)
        if(s[i] != t[j])
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";
}
