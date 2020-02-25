#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t, i, dig, cnt = 0;
    cin >> n >> t;
    i = t;
    while(i != 0)
    {
        i /= 10;
        cnt++;
    }
    if(n == 1 && t > 9)
        cout << "-1";
    else
        {
            cout << t;
            for(i = cnt; i < n; i++)
                cout << 0;
        }

}
