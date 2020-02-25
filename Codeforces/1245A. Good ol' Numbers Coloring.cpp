#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, i;
    cin >> t;
    while(t--)
    {
        bool flag = false;
        cin >> a >> b;
        if(a == 1 || b == 1)
            cout << "Finite" << endl;
        else if(a == b)
            cout << "Infinite" << endl;
        else
        {
            for(i = 2; i <= min(a, b); i++)
            {
                if(a%i == 0 && b%i == 0)
                    flag = true;
            }
            if(flag)
                cout << "Infinite" << endl;
            else
                cout << "Finite" << endl;
        }
    }
}
