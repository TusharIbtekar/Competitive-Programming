#include<bits/stdc++.h>
using namespace std;
bool check(char c)
{
    if(c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u')
        return 1;
    else
        return 0;
}
int main()
{
    string s1, s2;
    int con = 0, vow = 0, con1 = 0, vow1 = 0, i, flag = 0;
    cin >> s1 >> s2;
    for(i = 0; i < s1.size(); i++)
    {
        if(check(s1[i]) == 1 && check(s2[i]) == 0 || check(s1[i]) == 0 && check(s2[i]) == 1)
            flag = 1;
    }
    if(!flag && s1.size() == s2.size())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
