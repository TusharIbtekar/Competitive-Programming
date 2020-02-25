#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l, r, pr;
    cin >> l >> r;
    pr = l + (l%2);
    if(r - pr < 2)
        cout << -1;
    else
        cout << pr << " " << pr+1LL << " " << pr+2LL;
}
