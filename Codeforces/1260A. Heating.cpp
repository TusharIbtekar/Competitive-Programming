#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, c, i, per, rem, ans = 0, sum;
    cin >> n;
    while(n--)
    {
        ans = 0;
        cin >> c >> sum;
        rem = sum%c;
        per = sum/c;
        while(rem--)
        {
            ans += (per+1)*(per+1);
            c--;
        }
        ans += c*per*per;
        cout << ans << endl;
    }
}
