#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while(t--)
    {
        string s;
        int u = 0, r = 0, l = 0, d = 0;
        cin >> s;
        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == 'D')
                d++;
            else if(s[i] == 'R')
                r++;
            else if(s[i] == 'U')
                u++;
            else
                l++;
        }
        if((u && d) && (r && l))
        {
            cout << 2*(min(u, d)+min(r, l)) << endl;
            for(i = 0; i < min(u, d); i++)
                cout << 'U';
            for(i = 0; i < min(r, l); i++)
                cout << 'R';
            for(i = 0; i < min(u, d); i++)
                cout << 'D';
            for(i = 0; i < min(r, l); i++)
                cout << 'L';
            cout << endl;
        }
        else
        {
            if(l && r)
                cout << 2 << endl << "LR" << endl;
            else if(u && d)
                cout << 2 << endl << "UD" << endl;
            else
                cout << 0 << endl;
        }

    }
}
