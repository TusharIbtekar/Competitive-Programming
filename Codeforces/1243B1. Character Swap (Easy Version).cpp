#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i;
    string s, t, temp;
    cin >> k;
    while(k--)
    {
        int koyta = 0;
        temp = "";
        cin >> n;
        cin >> s >> t;
        for(i = 0; i < n; i++)
        {
            if(s[i] != t[i])
            {
                temp += s[i];
                temp += t[i];
            }
        }
        if(temp.size() > 4)
            cout << "NO" << endl;
        else if(temp[1] == temp[3] && temp[0] == temp[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
