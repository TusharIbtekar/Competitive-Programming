#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, cnt = 0;
    string str;
    cin >> str;
    if(str[0] == '-')
    {
        if(str[str.size() - 1] < str[str.size() - 2])
            str[str.size() - 2] = '*';
        else
            str[str.size() - 1] = '*';
        for(i = 0; i < str.size(); i++)
        {
            if(str[i] == '0')
                cnt++;
            if(i == str.size() - 1)
            {
                if(cnt == str.size() - 2)
                    str[0] = '*';
            }
        }
        for(i = 0; i < str.size(); i++)
        {
            if(str[i] != '*')
            cout << str[i];
        }
        return 0;
    }
    else
        cout << str;
}
