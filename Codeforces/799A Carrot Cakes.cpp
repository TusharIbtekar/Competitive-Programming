#include<iostream>
using namespace std;
int main()
{
    int t, n, k, d, mn = 0;
    cin >> n >> t >> k >> d;
    while(mn <= d)
    {
        n -= k;
        mn += t;
    }
    if(n > 0)
        cout << "Yes";
    else
        cout << "No";
}
