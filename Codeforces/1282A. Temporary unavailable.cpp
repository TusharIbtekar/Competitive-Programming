#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, r, rem, ans, t;
    cin >> t;
    while(t--){
    cin >> a >> b >> c >> r;
    if(b < a)
        swap(a, b);
    if(a <= c-r && b >= c+r)
    {
        ans = abs(b-a)-r*2;
        //cout << "cond 2" << endl;
        if(ans < 0)
            ans = 0;
    }
    else if(a > c-r && a > c+r && b > c-r && b > c+r || a < c-r && a < c+r && b < c-r && b < c+r)
    {
        ans = abs(a-b);
        //cout << "cond 1" << endl;
    }
    else if(a <= c+r && b >= c+r)
    {
        ans = (b-c-r);
        //cout << "cond 3" << endl;
    }
    else if(a <= c-r && b >= c-r)
    {
        ans = (c-r-a);
        //cout << "cond 4" << endl;
    }
    else
        ans = 0;
    cout << ans << endl;
    }
}
