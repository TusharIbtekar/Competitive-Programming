#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ans = 0;
    int n;
    cin >> n;
    while(n)
    {
        ans += 1.0/n;
        n--;
    }
    cout << setprecision(10) << ans << endl;
}
