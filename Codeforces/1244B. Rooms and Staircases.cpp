#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, pos;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
        int pore = 0, aage = 0;
        for(i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                aage = n-i;
                break;
            }
        }
        for(i = n-1; i >= 0; i--)
        {
            if(s[i] == '1')
            {
                pore = i+1;
                break;
            }
        }
        //cout << pore << " " << aage << endl;
        if(pore && aage)
            cout << 2*max(pore, aage) << endl;
        else
            cout << n << endl;
    }
}
