#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pre;
    int t, n, i, j, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        pre = 0;
        if(n == -1)
            break;
        while(n--)
        {
            cin >> i >> j >> k;
            pre += i*k;
        }
        cout << (int)pre << endl;
    }
}
