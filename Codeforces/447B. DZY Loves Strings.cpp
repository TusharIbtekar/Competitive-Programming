#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int i, n, d, mx = -1, pos, val = 0, ar[27];
    cin >> s;
    cin >> n;
    for(i = 0; i < 26; i++)
    {
        cin >> ar[i];
        if(mx < ar[i])
        {
            pos = i;
            mx = ar[i];
        }
    }
    for(i = 1; i <= s.size(); i++)
    {
        val += ar[s[i-1]-'a']*i;
    }
    while(n--)
    {
        val += mx*i;
        i++;
    }
    cout << val << endl;
}
