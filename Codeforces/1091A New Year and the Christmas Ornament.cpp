#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y, b, r, mn;
    cin >> y >> b >> r;
    mn = min(y, min(b, r));
    while(1)
    {
        if(b >= y+1 && r >= y+2)
            break;
        y--;
    }
    cout << y+y+1+y+2;

}
