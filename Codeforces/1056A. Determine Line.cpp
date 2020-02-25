#include<bits/stdc++.h>
using namespace std;
int chk[10000];
int main()
{
    int i, n, t, tt;
    cin >> t;
    tt = t;
    while(t--)
    {
        cin >> n;
        while(n--)
        {
            cin >> i;
            chk[i]++;
        }
    }
    for(i = 0; i < 200; i++)
    {
        if(chk[i] == tt)
            cout << i << " ";
    }
}
