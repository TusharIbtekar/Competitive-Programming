#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, a = "";
    int n, i, k = 0, cnt = 0;
    cin >> n;
    cin >> s;
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    a += s[0];
    for(i = 1; i < s.size(); i++)
    {
        if(a[a.size()-1] != s[i])
        {
            a += s[i];
        }
        else
        {
            if((a.size()-1)%2)
            {
                a += s[i];
            }
            else
            {
                cnt++;
            }
        }
    }
    if((a.size()-1)%2 == 0)
    {
        cnt++;
        a.pop_back();
    }
    cout << cnt << endl << a << endl;
}
