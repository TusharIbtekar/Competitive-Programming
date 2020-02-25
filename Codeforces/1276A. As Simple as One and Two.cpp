#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        string s;
        vector<int>ans;
        cin >> s;
        int i;
        for(i = 0; i < s.size()-4 && s.size() > 4; i++)
        {
            if(s[i] == 't'&& s[i+1] == 'w' && s[i+2] == 'o' && s[i+3] == 'n' && s[i+4] == 'e')
            {
                ans.emplace_back(i+3);
                s[i] = 't'; s[i+1] = '*'; s[i+2] = '*'; s[i+3] = '*'; s[i+4] = '*';
            }
        }
        for(i = 0; i < s.size()-2 && s.size() > 2; i++)
        {
            if((s[i] == 'o' && s[i+1] == 'n' && s[i+2] == 'e') || (s[i] == 't' && s[i+1] == 'w' && s[i+2] == 'o'))
            {
                ans.emplace_back(i+2);
            }
        }
        cout << ans.size() << endl;
        for(i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}
