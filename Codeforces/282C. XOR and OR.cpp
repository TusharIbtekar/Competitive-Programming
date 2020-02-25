#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    int i, c1 = 0, c11 = 0;
    cin >> s >> ss;
    if(s.size() != ss.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
            c1++;
        if(ss[i] == '1')
            c11++;
    }
    if(c1 && c11 || s == ss)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
