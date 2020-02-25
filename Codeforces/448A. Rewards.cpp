#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f, tot = 0, n, tot2 = 0;
    cin >> a >> b >> c >> d >> e >> f >> n;
    tot = a+b+c;
    tot2 = d+e+f;
    tot = (tot+4)/5;
    tot2 = (tot2+9)/10;
    if(n >= tot+tot2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
