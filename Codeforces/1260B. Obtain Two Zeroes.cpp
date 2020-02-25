#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, a, b, na, nb, t, mx;
    scanf("%lld", &t);
    while(t--)
    {
        cin >> a >> b;
        if(!a || !b)
        {
            if(!a && !b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if(a == b)
        {
            /*mx = a/2;
            na = a-mx;
            nb = b-mx;*/
            if(a%3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            /*na = max(a, b);
            nb = a+b-na;
            mx = na/2;
            na = na-(mx*2);
            nb = nb-mx;*/
            if(a < b)
                swap(a, b);
            if((a+b)%3 == 0 && a <= 2*b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

    }
}
