#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t, i;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if(s[s.size()-1] == 'o')
            cout << "FILIPINO" << endl;
        else if(s[s.size()-1] == 'u')
            cout << "JAPANESE" << endl;
        else if(s[s.size()-1] == 'a')
            cout << "KOREAN" << endl;
    }
}
