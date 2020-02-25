#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long int i, ans = 1, flag = 0, mx;
    if(s.size() < 2)
    {
        cout << s;
        return 0;
    }
    for(i = s.size()-1; i >= 2; i--)
    {
        ans = ans*9;
    }
    if(s[1] == '0' || s[1] == '1')
    {
        ans = ans*9;
        if(s[0] == '1')
            ans = ans*(s[0] - '0');
        else
            ans = ans*(s[0]-1- '0');
    }
    else
    {
        ans = ans*(s[1]-1 - '0');
        ans = ans*(s[0] - '0');
    }
    mx = ans;
    ans = 1;
    for(i = s.size()-1; i >= 1; i--)
    {
        ans = ans*9;
    }
    if(s[0] == '1')
        ans = ans*(s[0] - '0');
    else
        ans = ans*(s[0]-1- '0');
    mx = max(ans, mx);
    ans = 1;
    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == '9')
            flag++;
    }
    if(flag == s.size())
    {
        ans = 9;
        for(i = 1; i < s.size(); i++)
        {
            ans = ans*9;
        }
    }
    mx = max(mx, ans);
    //cout << mx  << endl;
    ans = 1;
    int flag1 = 0;
    for(i = s.size()-1; i >= 0; i--)
    {
        if(s[i] == '9')
        {
            flag1 = 1;
            ans = ans*8;
            break;
        }
        else
        {
            ans = ans * 9;
            //cout << i << endl;
        }
    }
    if(flag1)
    {
        for(long long j = i-1; j >= 0; j--)
            ans = ans * (s[j]-'0');
        mx = max(mx, ans);
    }
    ans = 1;
    for(i = 0; i < s.size(); i++)
        ans = ans*(s[i]-'0');
    mx = max(ans, mx);
    cout << mx;

}
