#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, t, flag = 0;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        for(i = 0; i < s.size()-1; i++)
        {
            if(s[i] == '?')
                continue;
            else if(s[i] == s[i+1])
            {
                flag = 1;
            }
        }
        if(flag)
        {
            cout << -1 << endl;
            flag = 0;
            continue;
        }
        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == '?')
            {
                if(i == 0)
                {
                    if(s[i+1] == 'a' || s[i+1] == 'b')
                        s[i] = 'c';
                    else
                        s[i] = 'a';
                }
                else if(i == s.size()-1)
                {
                    if(s[i-1] == 'a' || s[i-1] == 'b')
                        s[i] = 'c';
                    else
                        s[i] = 'a';
                }
                else if(s[i-1] == 'a')
                {
                    if(s[i+1] == '?')
                    {
                        s[i] = 'b';
                    }
                    else if(s[i+1] == 'c')
                    {
                        s[i] = 'b';
                    }
                    else if(s[i+1] == 'b')
                    {
                        s[i] = 'c';
                    }
                    else if(s[i+1] == 'a')
                    {
                        s[i] = 'b';
                    }
                }
                else if(s[i-1] == 'b')
                {
                    if(s[i+1] == '?')
                    {
                        s[i] = 'a';
                    }
                    else if(s[i+1] == 'c')
                    {
                        s[i] = 'a';
                    }
                    else if(s[i+1] == 'b')
                    {
                        s[i] = 'c';
                    }
                    else if(s[i+1] == 'a')
                    {
                        s[i] = 'c';
                    }
                }
                else if(s[i-1] == 'c')
                {
                    if(s[i+1] == '?')
                    {
                        s[i] = 'b';
                    }
                    else if(s[i+1] == 'c')
                    {
                        s[i] = 'b';
                    }
                    else if(s[i+1] == 'b')
                    {
                        s[i] = 'a';
                    }
                    else if(s[i+1] == 'a')
                    {
                        s[i] = 'b';
                    }
                }
            }
        }
        cout << s << endl;
    }
}
