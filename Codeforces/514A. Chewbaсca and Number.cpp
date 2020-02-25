#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, sup;
    cin >> s;
    for(i = 1; i < s.size()-1; i++)
    {
        if(s[i] > s[i]-'9' && s[i]-'9' < '0')
            s[i] = s[i]-'9';
    }
    cout << s << endl;
}
