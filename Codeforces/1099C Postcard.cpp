#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, io;
    int k, n, l, flake = 0, cane = 0;
    cin >> s;
    cin >> k;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '?')
            cane++;
        else if(s[i] == '*')
            flake++;
    }
    l = s.size();
    int len = l - cane - flake;
    //cout << len;
    if(l-2*cane-2*flake > k || l-cane < k && flake == 0)
    {
        printf("Impossible\n");
        return 0;
    }
    if(len > k)
    {
        int dif = len-k;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '?' || s[i] == '*')
            {
                s[i-1] = '0';
                dif--;
                if(dif == 0)
                    break;
            }
        }
    }
    else if(len < k)
    {
        io = "";
        int dif = k - len;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '*')
            {
                char c = s[i-1];
                if(dif > 0)
                {
                    while(dif--)
                        io += c;
                }
            }
            else
                io += s[i];
        }
        s = io;
    }
    for(int i = 0; i < s.size(); i++)
        if(s[i]!='?' && s[i] != '0' && s[i] != '*')
            cout << s[i];


}
