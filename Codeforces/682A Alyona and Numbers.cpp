#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum, n, m, i, div = 0;
    cin >> n >> m;
    for(i = 1; i <= n; i++)
    {
        div += (m+i%5)/5;
    }
    cout << div;
}
