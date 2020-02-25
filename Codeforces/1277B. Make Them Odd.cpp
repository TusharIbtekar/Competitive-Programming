#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int i, n, t, d;
    cin >> t;
    while(t--)
    {
        int  cnt = 0;
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> d;
            s.insert(d);
        }
        while(!s.empty())
        {
            int m = *s.rbegin();
            s.erase(m);
            if(m%2 == 0)
            {
                cnt++;
                s.insert(m/2);
            }
        }
        cout << cnt << endl;
    }
}
