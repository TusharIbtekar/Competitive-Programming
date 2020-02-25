#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <double> v;
    int n, i, pos, a, cnt = 0;
    double f;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a);
        pos = lower_bound(v.begin(), v.end(), a) - v.begin();
        v.insert(v.begin() + pos, a);
        cnt++;
        if(cnt % 2)
        {
            f = cnt/2;
            printf("%0.1lf\n", v[f]);
        }
        else
        {
            f = cnt/2;
            printf("%0.1lf\n", (v[f-1]+v[f])/2.0);
        }
    }
}
