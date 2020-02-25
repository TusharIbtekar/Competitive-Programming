#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long in, ex, st, mid = 0, hi, t;
    scanf("%lld", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld", &st, &in, &ex);
        mid = (st+in+ex)/2;
        long long int ans = (st+ex)-mid;
        /*if(in+ex < st)
            ans += st-in-ex;*/
        if(ans < 0 || ex+st <= in)
            cout << 0 << endl;
        else if(ex == 0 && st > in)
            cout << 1 << endl;
        else
            cout << min(ex+1, ans) << endl;
        mid = 0;
    }
}
