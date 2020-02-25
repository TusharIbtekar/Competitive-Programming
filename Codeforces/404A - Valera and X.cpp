#include<bits/stdc++.h>
using namespace std;
int main()
{
    std :: ios_base :: sync_with_stdio(false);
    map< string, int > mp;
    map< int, string > m;
    string s;
    char first, second;
    int n, i, l, k, flag = 0;
    cin >> n;
    k = n;
    l = (n/2);
    //k--;
    while(n--)
    {
        cin >> s;
        if(k-1 == n)
        {
            first = s[0];
            second = s[1];
        }
        mp[s]++;
        m[mp[s]] = s;
    }
    //cout << m[1];
    //cout << mp.size() << endl << l;;
    if(l+1 == mp.size())
    {
        s = m[1];
        for(i = 0; i < l; i++)
        {
            if(s[i] == second)
                continue;
            //cout << " " << s[i];
            flag = 1;
        }
        if(flag == 0)
        {
            for(i = k-1; i > l; i--)
            {
                if(s[i] == second)
                    continue;
                //cout << " " << s[i];
                flag = 1;
            }
        }
        if(flag == 0 && s[l] == first)
        {
            cout << "YES";
            return 0;
        }

    }
    cout << "NO";

}
