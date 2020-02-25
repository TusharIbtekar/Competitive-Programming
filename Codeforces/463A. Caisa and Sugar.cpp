#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, x, y, mn = 99999999, flag = 0;
    cin >> n >> s;
    while(n--)
    {
        cin >> x >> y;
        if(x < s || (x==s && y == 0))
        {
            if(y != 0)
            {
                mn = min(mn, y);
            }
            flag = 1;
        }
    }
    if(flag == 1 && mn != 99999999)
        printf("%d\n",100-mn);
    else if(flag)
        printf("0\n");
    else
        printf("-1\n");
}
