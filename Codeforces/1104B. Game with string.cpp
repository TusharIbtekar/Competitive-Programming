#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    string s, sn;
    int i, j, cnt = 0, flag = 0;
    cin >> s;
    sn = "";
    sn += s[0];
    for(i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1])
        {
            cnt++;
            s.erase(i-1, 2);
            i = 0;
        }
        //cout << s <<endl;
    }
    if(cnt%2)
        cout << "Yes";
    else
        cout << "No";
}
