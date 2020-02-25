#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, ps = -1, pos = 0, dummy, mx = 999999999, mxx = -1, f = 0;
    string s, cpy;
    cin >> s;
    cpy = s;
    if((s[s.size()-1]-'0') % 2 == 0)
    {
        for(i = 0; i < s.size(); i++)
        {
            if(mxx > s[i]-'0')
            {
                mxx = s[i]-'0';
                ps = i;
            }
        }
        if(s[0]-'0' % 2 == 0 && ps == s.size()-1)
            swap(s[0], s[ps]);
        else if(s[0]-'0'%2 && ps == s.size()-1)
            swap(s[0], s[ps-1]);
        else
            swap(s[0], s[ps]);
    }
    else
    {
        for(i = 0; i < s.size(); i++)
        {
            if((s[i]-'0')%2 == 0)
                f = 1;
            if((s[i]-'0') < s[s.size()-1]-'0')
            {
                if((s[i]-'0')%2 == 0)
                {
                    pos = -2;
                    //cout << "HELL" << endl;
                    swap(s[i], s[s.size()-1]);
                    break;
                }
            }
            else
            {
                //cout << pos << " ";
                if((s[i]-'0')%2 == 0)
                    pos = i;
            }
        }
        if(pos >= 0)
            swap(s[pos], s[s.size()-1]);
    }
    if(!f)
        cout << -1 << endl;
    else
        cout << s << endl;
}
