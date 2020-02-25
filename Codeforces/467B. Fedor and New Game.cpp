#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int n, m, k, c = 0;
    cin >> n >> m >> k;
    int i, ar[m], d;
    for(i = 0; i < m; i++)
    {
        cin >> ar[i];
    }
    cin >> d;
    while(d)
    {
        s += d%2 + '0';
        d /= 2;
    }
    //reverse(s.begin(), s.end());
    for(i = 0; i < m; i++)
    {
        d = ar[i];
        int j = 0, cnt = 0;
        while(d)
        {
            int temp = d%2;
            if(j >= s.size())
            {
                if(temp != 0)
                    cnt++;
            }
            if(s[j]-'0' != temp && j < s.size())
                cnt++;
            j++;
            d /= 2;
        }
        if(j < s.size())
        {
            for(; j < s.size(); j++)
            {
                if(0 != s[j]-'0')
                    cnt++;
            }
        }
        //cout << cnt << endl;
        if(cnt <= k)
            c++;
    }
    cout << c << endl;
}
