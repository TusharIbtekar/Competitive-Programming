#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, n, op = 0;
    cin >> n >> s;
    for(i = 1; i < n; i += 2)
    {
        if(s[i] == 'a' && s[i-1] == 'b' || s[i] == 'b' && s[i-1] == 'a')
            continue;
        else
        {
            //op++;
            if(s[i] == 'a')
            {
                if(s[i-1] == 'a')
                {
                    s[i-1] = 'b';
                    op++;
                }
            }
            else
            {
                if(s[i] == 'b')
                {
                    s[i-1] = 'a';
                    op++;
                }
            }
        }
    }
    cout << op << endl;
    cout << s << endl;
}
