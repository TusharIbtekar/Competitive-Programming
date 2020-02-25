#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, d, e;
    a = "aeiou";
    b = "eioua";
    c = "iouae";
    d = "ouaei";
    e = "uaeio";
    int n, i, r = 0, col = 0;
    cin >> n;
    for(i = sqrt(n); i >= 2; i--)
    {
        if(n%i == 0)
        {
            r = i;
            col = n/i;
            break;
        }
    }
    if(r < 5 || col < 5)
        cout << -1 << endl;
    else
    {
        for(i = 0; i < col-5; i++)
        {
            a += a[i];
            b += b[i];
            c += c[i];
            d += d[i];
            e += e[i];
        }
        //cout << a << endl << b << endl << c << endl << d << endl << e << endl;
        cout << a << b << c << d << e;
        for(i = 5; i < r; i++)
        {
            cout << a;
        }
    }

}
