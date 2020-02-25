#include<bits/stdc++.h>
using namespace std;
char key[50][50];
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int ar[30] = {9999};
    for(int i = 0; i < 30; i++)
        ar[i] = 9999;
    long long int i, cnt = 0, x, n, m, q, j, flag = 0, fl = 0;
    string s, ss;
    char c;
    cin >> n >> m >> x;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin >> c;
            key[i][j] = c;
        }
    }
    cin >> q;
    s = "";
    ss = "";
    string sss = "";
    for(i = 0; i < q; i++)
    {
        cin >> c;
        sss += tolower(c);
        if(c >= 'A' && c <= 'Z')
            s += c;
        else
            ss += c;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            for(int k = 0; k < sss.size(); k++)
                {
                    if(key[i][j] == sss[k])
                        sss[k] = '*';
                }
        }
    }
    for(i = 0; i < sss.size(); i++)
    {
        if(sss[i] != '*')
        {
            cout << -1 << endl;
            return 0;
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(key[i][j] == 'S'){
                //cout << 1 << endl;
                flag = 1;
                for(long long int k = 0; k < n; k++)
                {
                    for(long long int l = 0; l < m; l++)
                    {
                        //if(key[i][j] >= 'A' && c <= 'Z')
                        {
                            //cout << key[k][l] << endl;
                            long long int dis = ceil(sqrt(abs(i-k)*abs(i-k)+abs(j-l)*abs(j-l)));
                            ar[key[k][l]-'a'] = min(ar[key[k][l]-'a'], dis);
                        }
                    }
                }
            }
        }
    }
    for(i = 0; i < s.size(); i++)
    {
        if(ar[s[i]-'A'] > x && ar[s[i]-'A'] != 9999)
        {
            cnt++;
            //cout << s[i] << endl;
        }
    }
    //for(int i = 0; i < 30; i++)
        //cout << ar[i] << " ";
    //cout << endl;
    if(cnt || flag && s.size())
    {
        cout << cnt << endl;
    }
    else if(!flag && s.empty())
    {
        cout << 0 << endl;
    }
    else
        cout << -1 << endl;
}
