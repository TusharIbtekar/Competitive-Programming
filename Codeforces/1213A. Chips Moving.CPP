#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, od = 0, ev = 0, d;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> d;
        if(d%2)
            od++;
        else
            ev++;
    }
    if(ev > od)
        cout << od;
    else
        cout << ev;
}
