#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, n, c8 = 0, ce = 0, pos = -1;
    cin >> n;
    cin >> s;
    for(i = s.size()-11; i >= 0; i--)
    {
        if(s[i] == '8')
        {
            c8++;
        }
        else
            ce++;
    }
    //cout << pos << " " << c8 << " " << ce << endl;
    if(c8 >= ce)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
