#include<bits/stdc++.h>
using namespace std;
int cnt[26];
int main()
{
    string s;
    cin >> s;
    int i, odd = 0;
    for(i = 0; i < s.size(); i++)
    {
        cnt[s[i]-'a']++;
    }
    for(i = 0; i < 26; i++)
    {
        if(cnt[i]%2)
            odd++;
    }

    if(odd%2 || odd < 2)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
}
