#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, z = 0, o = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'z')
            z++;
        else if(s[i] == 'n')
            o++;
    }
    while(o--)
        cout << "1 ";
    while(z--)
        cout << "0 ";
}
