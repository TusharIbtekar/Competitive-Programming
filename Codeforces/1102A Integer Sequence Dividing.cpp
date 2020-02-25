#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, i;
    cin >> n;
    sum = (n*(1+n))/2;
    //cout << sum << endl;
    if(sum%2)
        cout << 1;
    else
        cout << 0;
}
