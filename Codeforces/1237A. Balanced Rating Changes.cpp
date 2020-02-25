#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%2 == 0)
            cout << n/2 << endl;
        else if(cnt%2)
        {
            if(floor(n/2.0) == 0)
                cout << 0 << endl;
            else
                cout << floor(n/2.0) << endl;
            cnt++;
        }
        else
        {
            if(ceil(n/2.0) == 0)
                cout << 0 << endl;
            else
                cout << ceil(n/2.0) << endl;
            cnt++;
        }
    }
}
