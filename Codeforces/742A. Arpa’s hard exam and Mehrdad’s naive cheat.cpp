#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, ans;
    int ar[] = {8, 4, 2, 6};
    cin >> n;
    if(n == 0)
        cout << 1;
    else
        cout << ar[(n - 1) % 4];
}
