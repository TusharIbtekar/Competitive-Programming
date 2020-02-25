#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, div, cnt = 0;
    cin >> n >> m;
    if(m%n)
        cout << -1;
    else
    {
        div = m/n;
        while(!(div%2))
        {
            div /= 2;
            cnt++;
        }
        while(!(div%3))
        {
            div /= 3;
            cnt++;
        }
        if(div == 1)
            cout << cnt;
        else
            cout << -1;
    }

}
