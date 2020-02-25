#include<bits/stdc++.h>
using namespace std;
long long divisors(int n)
{
    long long cnt = n/3 * 2;
    if(n == 0)
        return 0;
    else if(n%3 == 2)
        return cnt +1;
    else
        return cnt;
}
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int a, b, i, n, t;
    cin >> t;
    int cs = 0;
    while(t--)
    {
        cin >> a >> b;
        cout << "Case " << ++cs << ": ";
        cout << divisors(b) - divisors(a-1) << endl;
    }
}
