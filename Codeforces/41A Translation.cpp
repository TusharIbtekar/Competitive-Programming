#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss, sn;
    int i;
    cin >> s >> ss;
    for(i = s.size()-1; i >= 0; i--)
    {
        sn += s[i];
    }
    if(sn == ss)
        cout << "YES";
    else
        cout << "NO";

}
