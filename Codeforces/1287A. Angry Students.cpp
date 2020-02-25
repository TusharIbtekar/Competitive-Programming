#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        int cnt = 0, f = 0;
        while(1)
        {
            f = 0;
            for(i = 0; i < s.size()-1; i++)
            {
                if(s[i] == 'A' && s[i+1] == 'P')
                {
                    s[i+1] = 'A';
                    i++;
                    f = 1;
                }
            }
            if(!f)
                break;
            cnt++;
        }
        cout << cnt << endl;
    }
}
