#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p, h;
    int t, i, j;
    /*p = "zzpptzpt";
    h = "zptpptzz";
    sort(p.begin(), p.end());
    sort(h.begin(), h.end());
    cout << p << " " << h << endl;
    if(p == h)
        cout << "YES" << endl;*/
    cin >> t;
    while(t--)
    {
        cin >> p >> h;
        if(p.size() > h.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            int flag = 0;
            sort(p.begin(), p.end());
            for(i = 0; i < h.size(); i++)
            {
                j = i;
                if(h.size() < i+p.size())
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
                string s;
                for(; j < i+p.size(); j++)
                {
                    s += h[j];
                    //cout << s << endl;
                }
                sort(s.begin(), s.end());
                if(s == p)
                {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
            if(!flag)
                cout << "NO" << endl;
        }
    }
}
