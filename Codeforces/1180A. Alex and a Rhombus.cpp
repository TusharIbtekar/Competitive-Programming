#include<bits/stdc++.h>
using namespace std;
int ar[1000];
int main()
{
    bool b[1][1][1];
    int n, i, pre = 1;
    cin >> n;
    ar[1] = 1;
    for(i = 1; i <= n; i++)
    {
        pre += i*4;
        ar[i+1] = pre;
    }
    cout << ar[n] << endl;
}
