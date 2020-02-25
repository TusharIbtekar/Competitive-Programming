#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, x, y, flag = 0, i;
    cin >> n >> a >> x >> b >> y;
    for(i = 1; i <= n; i++)
    {
        if(a == b)
        {
            flag = 1;
            break;
        }
        if(a == x || b == y)
            break;
        a++;
        b--;
        if(n < a)
            a = 1;
        if(1 > b)
            b = n;
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
