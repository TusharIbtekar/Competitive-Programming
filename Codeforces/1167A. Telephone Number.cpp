#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    string s;
    cin >> t;
    while(t--)
    {
        int f = 0;
        cin >> n >> s;
        for(i = n-11; i >= 0; i--)
        {
            if(s[i] == '8')
            {
                cout << "YES" << endl;
                f = 1;
                break;
            }
        }
        if(!f)
            cout << "NO" << endl;
    }
}
