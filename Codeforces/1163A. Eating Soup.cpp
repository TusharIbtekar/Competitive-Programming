#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, rem;
    cin >> n >> m;
    rem = n/2;
    if(m <= 1)
        cout << 1 << endl;
    else if(n == m)
        cout << 0 << endl;
    else if(rem >= m)
        cout << m << endl;
    else
        cout << n-m << endl;
}
