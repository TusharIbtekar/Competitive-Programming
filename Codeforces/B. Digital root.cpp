#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, x, tot = 0, t;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &k, &x);
        tot = x+(k-1)*9;
        cout << tot << endl;
    }
}
