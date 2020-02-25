#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <pair<int, char> > vec;
    long long int n, k, d, tot = 0, i;
    char c;
    scanf("%lld %lld", &n, &k);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &d);
        scanf(" %c", &c);
        tot += d;
        vec.push_back(make_pair(d, c));
    }
    long long pos, mn = 999999999999, cnt = 0;
    for(i = 0; i < n-1; i++)
    {
        //if(vec[i].second == vec[i+1].second)
        {
            cnt++;
            cout << vec[i].first << " " << vec[i].second << endl;           // if(cnt == k)
                cout << vec[i].second;
        }
    }

}
