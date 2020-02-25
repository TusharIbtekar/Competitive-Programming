#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<long long int,long long int> > vec;
    long long n, m, i, rem = 0, sum = 0, x, y, k;
    scanf("%lld %lld", &n, &m);
    k = m;
    while(m--)
    {
        scanf("%lld %lld", &x, &y);
        vec.push_back(make_pair(y, x));
    }
    sort(vec.rbegin(), vec.rend());
    /*for(i = 0; i < 3; i++)
    {
        printf("%lld %lld\n", vec[i].first, vec[i].second);
    }*/
    for(i = 0; i < k && n > 0; i++)
    {
        if(n > vec[i].second)
        {
            n -= vec[i].second;
            sum += vec[i].first * vec[i].second;
        }
        else
        {
            sum += vec[i].first * n;
            n = 0;
        }
    }
    printf("%lld", sum);
}
