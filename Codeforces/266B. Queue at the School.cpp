#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, n, t;
    cin >> n >> t;
    cin >> s;
    while(t--)
    {
        for(i = 0; i < n-1; i++)
        {
            if(s[i] == 'B' && s[i+1] == 'G')
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    cout << s << endl;
}
