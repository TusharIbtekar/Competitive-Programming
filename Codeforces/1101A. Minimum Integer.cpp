#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l, r, x, d, div, mn, t;
    cin >> t;
    while(t--){
    cin >> l >> r >> d;
    div = l/d;
    if(div > 0 && d < l)
        cout << d << endl;
    else
    {
        div = r/d;
        if(r%d == 0)
        {
            cout << r+d << endl;;
        }
        else
        {
            div++;
            cout << div*d << endl;
        }
    }
    }
}
