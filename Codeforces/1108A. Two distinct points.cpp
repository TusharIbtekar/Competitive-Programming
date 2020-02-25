#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, l1, r1, l2, r2, a1, a2;
    cin >> n;
    while(n--)
    {
        cin >> l1 >> r1 >> l2 >> r2;
        if(l1 == l2)
            cout << r1 << " " << l2 << endl;
        else if(l1 == r2)
            cout << r1 << " " << r2 << endl;
        else if(l2 == r1)
            cout << r2 << " " << r1 << endl;
        else if(r2 == r1)
            cout << r1 << " " << l2 << endl;
        else
        {
            a1 = (l1+r1)/2;
            a2 = (l2+r2)/2;
            if(a1 == a2)
                cout << a1 << " " << a2+1 << endl;
            else
                cout << a1 << " " << a2 << endl;
        }
    }
}
