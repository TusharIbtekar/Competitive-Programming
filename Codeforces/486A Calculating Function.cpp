#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, ans;
    cin >> n;
    ans = n/2;
    if(n % 2)
        cout << '-' << (n/2)+1;
    else
        cout << n/2;

}
