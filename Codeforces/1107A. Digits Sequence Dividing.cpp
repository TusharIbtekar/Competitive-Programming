#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, s2, s3;
        s2 = "";
        s3 = "";
        int n, f = 0, i, div, p1, p2;
        cin >> n;
        div = n/2;
        cin >> s;
        s2 = s[0];
        s.erase(0, 1);
        //cout << s2 << " " << s << endl;
        if(s2 < s || s2.size() < s.size())
        {
            cout << "YES\n";
            cout << 2 << endl;
            cout << s2 << " " << s << endl;
        }
        else
        {
            cout << "NO\n" << endl;
        }
    }

}
