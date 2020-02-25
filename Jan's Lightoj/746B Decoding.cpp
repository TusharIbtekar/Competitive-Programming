#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char sn[2005];
    int n, l, i, j;
    cin >> n >> s;
    l = (n - 1)/2;
    j = 0;
    for(i = n-2; i >= 0; i -= 2)
    {
        sn[j] = s[i];
        j++;
    }
    for(i = (n+1) % 2; i < n; i += 2)
    {
        sn[j] = s[i];
        j++;
    }
    for(i = 0; i < n; i++)
        cout << sn[i];
}
