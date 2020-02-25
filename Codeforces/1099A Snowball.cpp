#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w, h, u1, u2, d1, d2, tot = 0, wei = 0, ans;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;
    int i;
    tot = w;
    for(i = h; i >= 0; i--)
    {
        tot += i;
        if(i == d1)
        {
            tot -= u1;
            if(tot < 0)
                tot = 0;
        }
        if(i == d2)
        {
            tot -= u2;
            if(tot < 0)
                tot = 0;
        }
    }
    //wei = u1+u2;
    //ans = tot - wei;
    cout << tot << endl;

}
