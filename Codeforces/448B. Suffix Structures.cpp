#include<bits/stdc++.h>
using namespace std;
int chk[27];
int main()
{
    string s, t;
    int i, x;
    cin >> s >> t;
    for(i = 0; i < s.size(); i++)
    {
        chk[s[i]-'a']++;
    }
    for(i = 0; i < t.size(); i++)
    {
        if(chk[t[i]-'a'])
        {
            chk[t[i]-'a']--;
        }
        else
        {
            cout << "need tree" << endl;
            return 0;
        }
    }
    size_t found = s.find(t);
    //cout << found << endl;
    if(s.size() == t.size())
    {
        cout << "array" << endl;
        return 0;
    }
    x = 0;
    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == t[x])
            x++;
    }
    if(x == t.size())
        cout << "automaton" << endl;
    else
        cout << "both" << endl;
}
