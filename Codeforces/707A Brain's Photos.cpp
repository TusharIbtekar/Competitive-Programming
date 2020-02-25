#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int n, m, i;
    cin >> n >> m;
    while(n--)
    {
        for(i = 0; i < m; i++)
        {
            cin >> c;
            if(c == 'C' || c == 'M' || c == 'Y')
            {
                cout << "#Color";
                return 0;
            }
        }
    }
    cout << "#Black&White";
}
