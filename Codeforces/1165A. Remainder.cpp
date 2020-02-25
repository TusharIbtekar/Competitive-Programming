#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, i, c = 0;
    string s;
    cin >> n >> x >> y;
    cin >> s;
    //cout << c << endl;
    if(s[n-y-1] != '1')
        c++;
    cout << c << endl;
    for(i = n-x; i < n-y-1; i++)
        if(s[i] == '1')
            c++;
    for(i = n-y; i < s.size(); i++)
        if(s[i] == '1')
            c++;
    cout << c << endl;
}
