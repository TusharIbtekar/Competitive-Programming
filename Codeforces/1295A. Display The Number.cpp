#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, rem, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n&1)
        {
            cout << 7;
            n -= 3;
        }
        n /= 2;
        for(int i = 0; i < n; i++)
            cout << 1;
        cout << endl;
    }
}
