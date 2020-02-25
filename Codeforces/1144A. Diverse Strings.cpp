#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int i, flag = 1;
        sort(s.begin(), s.end());
        for(i = 1; i < s.size(); i++)
        {
            if(abs(s[i] - s[i-1]) != 1)
            {
                cout << "No" << endl;
                flag = 0;
                break;
            }

        }
        if(flag)
            cout << "Yes" << endl;
    }
}
