#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c1 = 0, c2 = 0, d;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> d;
        if(d == 1)
            c1++;
        else
            c2++;
    }
    if(c1 && c2)
    {
        cout << 2 << " ";
        c2--;
        cout << 1 << " ";
        c1--;
        while(c2)
        {
            cout << 2 << " ";
            c2--;
        }
        while(c1)
        {
            cout << 1 << " ";
            c1--;
        }
    }
    else
    {
        while(c2)
        {
            cout << 2 << " ";
            c2--;
        }
        while(c1)
        {
            cout << 1 << " ";
            c1--;
        }
    }
}

