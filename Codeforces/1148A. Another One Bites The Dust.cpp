#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, a, b, c, mn = 9999999999;
    cin >> a >> b >> c;
    mn = min(a, b);
    mn *= 2;
    if(a != b)
        mn++;
    mn += c*2;
    cout << mn << endl;
}
