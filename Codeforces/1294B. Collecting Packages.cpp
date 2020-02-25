#include<bits/stdc++.h>
using namespace std;
vector< pair<int, int> > v;
int main()
{
    int n, t, i, j, a, b;
    cin >> t;
    while(t--)
    {
        v.clear();
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> a >> b;
            v.emplace_back(make_pair(a, b));
        }
        sort(v.begin(), v.end());
        /*for(i = 0; i < v.size(); i++)
            cout << v[i].first << " " << v[i].second << endl;*/
        string s = "";
        int ti, tj, f = 0;
        for(i = 0; i < n-1; i++)
        {
            if(v[i].first == v[i+1].first)
                continue;
            else
            {
                if(v[i].second > v[i+1].second)
                {
                    f = 1;
                    //cout << v[i].second << endl;

                }
            }
        }
        ti = v[0].first;
        tj = v[0].second;
        for(j = 0; j < ti; j++)
            s += 'R';
        for(j = 0; j < tj; j++)
            s += 'U';
        for(i = 1; i < n; i++)
        {
            if(ti == v[i].first)
            {
                for(j = 0; j < abs(v[i].second - tj); j++)
                    s += 'U';
            }
            else if(ti < v[i].first)
            {
                for(j = 0; j < (v[i].first - ti); j++)
                    s += 'R';
                for(j = 0; j < abs(tj-v[i].second); j++)
                    s += 'U';
            }
            /*else if(v[i].first > ti)
            {
                for(j = 0; j < (v[i].first - v[i-1].first); j++)
                    s += 'R';
                if(tj > v[i].second)
                {
                    for(j = 0; j < (tj-v[i].second); j++)
                        s += 'U';
                }
            }
            else if(v[i].second > v[i-1].second)
            {
                for(j = 0; j < (v[i].second - v[i-1].second); j++)
                    s += 'U';
            }
            else
            {
                f = 1;

            }*/
            ti = v[i].first;
            tj = v[i].second;

        }
        if(f)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }
}
