#include<bits/stdc++.h>
using namespace std;
int chk[27];
set<char>ans;
set<char>:: iterator it;
int main()
{
    int n, t, i;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        for(i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                if(s.size() == 0)
                    break;
                i -= 1;
            }
        }
        /*for(i = 0; i < 27; i++)
        {
            if(chk[i]%2)
            {
                cout << char('a'+i);
            }
            chk[i] = 0;
        }*/
        for(i = 0; i < s.size(); i++)
            ans.emplace(s[i]);
        for(it = ans.begin(); it != ans.end(); it++)
        {
            cout << *it;
        }
        cout << endl;
        ans.clear();
    }
}
