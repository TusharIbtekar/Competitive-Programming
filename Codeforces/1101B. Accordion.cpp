#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, j, f = 0, f2 = 0, f3 = 0, f4 = 0, f1 = 0, cnt = 0;
    cin >> s;
    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == '['&& f == 0)
        {
            f = 1;
            s[i] = '*';
            cnt++;
            //cout << i;
        }
        else if(s[i] == ':' && f2 == 0 && f != 0)
        {
            f2 = i;
            s[i] = '*';
            cnt++;
            //cout << i;
            break;
        }
    }
    if(f == 0 || f2 == 0)
    {
        cout << -1;
        return 0;
    }
    for(i = s.size()-1; i >= f2; i--)
    {
        if(s[i] == ']' && f3 == 0)
        {
            f3 = 1;
            s[i] = '*';
            cnt++;
        }
        else if(s[i] == ':' && f4 == 0 && f3 != 0)
        {
            f4 = i;
            s[i] = '*';
            cnt++;
            break;
        }
    }
    if(f3 == 0 || f4 == 0)
    {
        cout << -1;
        return 0;
    }
    for(i = f2; i <= f4; i++)
    {
        if(s[i] == '|')
            cnt++;
    }
    cout << cnt;
}
