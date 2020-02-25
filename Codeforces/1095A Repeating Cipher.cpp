#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j = 0;
    string s, ss;
    ss = "";
    cin >> n;
    cin >> s;
    for(i = 0; i < n;)
    {
        ss += s[i];
        i = i+1+j;
        j++;
        //cout << i << endl;
    }
    cout << ss;
}
