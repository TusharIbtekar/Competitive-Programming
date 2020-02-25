#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    string s, t;
    int l, r, i, cnt = 0, n, m , q, k = 0, f_c = 0;
    cin >> n >> m >> q;
    cin >> s >> t;
    while(q--)
    {
        f_c = 0;
        cin >> l >> r;
        for(i = l-1; i < r; i++)
        {
            if(s[i] == t[k])
            {
                k++;
                cnt++;
                if(cnt == t.size())
                {
                    f_c++;
                    cnt = 0;
                    k = 0;
                }
            }
        }
        cout << f_c << endl;
    }
}
