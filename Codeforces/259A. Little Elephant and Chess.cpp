#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, flag = 0;
    for(i = 0; i < 8; i++)
    {
        cin >> s;
        for(int j = 0; j < 7; j++)
        {
            if(s[j] == s[j+1])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
}
