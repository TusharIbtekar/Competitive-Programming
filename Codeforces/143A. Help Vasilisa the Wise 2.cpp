#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, c1, c2, r1, r2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    b = (r1-c1+d2)/2;
    a = r1-b;
    c = d2-b;
    d = c2-b;
    if(r1!=a+b || r2!= c+d || c1!=a+c || c2!=b+d || d1!=a+d || d2!=b+c || a==b || b==c || c==d || d==a || a==c || b==d || a==c || a > 9 || a < 1 || b > 9 || b < 1 || c > 9 || c < 1 || d > 9 || d < 1)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << a << " " << b << endl << c<< " " << d << endl;
}
