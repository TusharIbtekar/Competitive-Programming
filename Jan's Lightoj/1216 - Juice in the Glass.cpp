#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r, x, ans;
    int n, t, cs = 0, r1, r2, h, p;
    cin >> t;
    while(t--)
    {
        cin >> r1 >> r2 >> h >> p;
        x = double(r2*h)/(r1-r2);
        r = r2 + double(p*(r1-r2))/h;
        ans = ((acos(-1) * r*r * (p+x)) - (acos(-1) * r2*r2 * x))/3;
        printf("Case %d: %.9f\n", ++cs, ans);
    }
}
