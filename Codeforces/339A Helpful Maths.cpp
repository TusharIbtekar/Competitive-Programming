#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '+')
            s.erase(s.begin() + i);
    }
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++)
    {
        if(i == 0)
            cout << s[i];
        else
            cout << "+" << s[i];
    }
}
